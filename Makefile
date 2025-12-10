NAME		= ft_ping

BUILD		= ./build
SRCS_DIR		= ./srcs

SRCS		= $(shell find $(SRCS_DIR) -name '*.c')
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(BUILD)/%.o, $(SRCS))

HEADERS		= ./includes/ft_ping.h

INCS		= -I./includes/
FLAGS		= -Wall -Wextra -Werror -g3 -fsanitize=address

RESET		= \033[0m
BLUE		= \033[34m
YELLOW		= \033[38;2;255;239;0m
APPLE_GREEN	= \033[38;2;141;182;0m

all:			$(BUILD) $(NAME)

$(BUILD)/%.o:	$(SRCS_DIR)/%.c $(HEADERS) Makefile
			@echo "${APPLE_GREEN} Compiling $<${RESET}"
			@$(CC) $(FLAGS) $(INCS) -c $< -o $@

${NAME}:		${OBJS}
			@$(CC) $(FLAGS) $(OBJS) $(INCS) -o ${NAME} $(LIB)
			@echo "${YELLOW}Ping created 🥑 ${RESET}"

$(BUILD):
			@mkdir -p $(BUILD)

clean:
			rm -rf $(BUILD)

fclean:			clean
			rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re
