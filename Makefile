NAME		= ft_ping

BUILD		= ./build
SRCS_DIR	= ./srcs
HEADERS_DIR	= ./includes

SRCS		= $(shell find $(SRCS_DIR) -name '*.c')
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(BUILD)/%.o, $(SRCS))
HEADERS		= $(shell find $(HEADERS_DIR) -name '*.h')

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INC_DIR		= -I$(HEADERS_DIR)
LDFLAGS		= -lresolv
DEBUG_MODE	= -g3 -fsanitize=address

RESET		= \033[0m
BLUE		= \033[34m
YELLOW		= \033[38;2;255;239;0m
APPLE_GREEN	= \033[38;2;141;182;0m

all:			build $(NAME)

$(NAME):		$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LDFLAGS)
			@echo "${YELLOW}ft_ping created 🥑 ${RESET}"

debug:			CFLAGS += $(DEBUG_MODE)
debug:			build $(NAME)

$(BUILD)/%.o:	$(SRCS_DIR)/%.c $(HEADERS) Makefile
			@echo "${APPLE_GREEN} Compiling $<${RESET}"
			@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

build:
			@mkdir -p $(BUILD)

clean:
			@rm -rf $(BUILD)
			@echo "${BLUE}Object files removed ${RESET}"

fclean:			clean
			@rm -f $(NAME)
			@echo "${BLUE}Everything is clean now! 🧹${RESET}"

re:			fclean all

.PHONY: all clean fclean re build debug
