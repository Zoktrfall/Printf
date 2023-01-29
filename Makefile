NAME = libftprintf.a

INCLUDES = libft/libft.a
LIBFT = libft

Flags = -Wall -Wextra -Werror
MAKE = make

SRC = ft_printf.c ft_print_hexadec.c ft_print_number.c \
		ft_print_pointer.c ft_print_string.c ft_print_unsigned.c
OBJ = $(patsubst %.c, %.o, $(SRC))

# Colors
RESET  = \033[0
RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m

all : $(NAME)

$(NAME) : $(OBJ) Makefile ft_printf.h
	@cd $(LIBFT) && $(MAKE)
	@mv $(INCLUDES) $(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(GREEN)All done successfully!$(RESET)"

%.o : %.c
	@echo "$(YELLOW)Making object files...$(RESET)"
	@gcc $(Flags) -c $< -o $@

clean :
	@echo "$(RED)Deleting all object files.. $(RESET)"
	@rm -rf $(OBJ)
	@cd $(LIBFT) && rm -rf *.o

fclean : clean
	@echo "$(RED)Deleting $(NAME)... $(RESET)"
	@rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : re fclean clean all