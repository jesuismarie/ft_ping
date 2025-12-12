NAME		= ft_ping

BUILD		= ./build
SRCS_DIR		= ./srcs

SRCS		= $(shell find $(SRCS_DIR) -name '*.c')
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(BUILD)/%.o, $(SRCS))

HEADERS_DIR	= ./includes
HEADERS		= $(shell find $(HEADERS_DIR) -name '*.h')

CFLAGS		= -Wall -Wextra -Werror
INC_DIR		= -I$(HEADERS_DIR)
LDFLAGS		= -lresolv
DEBUG_MODE	= -g3 -fsanitize=address

RESET		= \033[0m
BLUE		= \033[34m
YELLOW		= \033[38;2;255;239;0m
APPLE_GREEN	= \033[38;2;141;182;0m

all:			build $(NAME)

$(BUILD)/%.o:	$(SRCS_DIR)/%.c $(HEADERS) Makefile
			@echo "${APPLE_GREEN} Compiling $<${RESET}"
			@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

${NAME}:		${OBJS}
			@$(CC) $(CFLAGS) $(OBJS) $(INC_DIR) -o ${NAME} $(LDFLAGS)
			@echo "${YELLOW}ft_ping created 🥑 ${RESET}"

build:
			@mkdir -p $(BUILD)

clean:
			@echo "${BLUE}Object files removed ${RESET}"
			@rm -rf $(BUILD)

fclean:			clean
			@echo "${BLUE}ft_ping removed ${RESET}"
			@echo "${BLUE}Everything is clean now! 🧹${RESET}"
			@rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re
