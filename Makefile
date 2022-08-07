# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 18:39:02 by mayocorn          #+#    #+#              #
#    Updated: 2022/08/07 18:09:52 by mayocorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME         = myfdf

SRCDIR       = ./src/
SRCS         = main.c \
               get_next_line/get_next_line.c \
               get_next_line/get_next_line_utils.c \
               map/dot_array.c \
               map/extract_param.c \
               map/map.c \
               map/map_with_list.c \
               utils/exit_util.c \
               utils/free_util.c \
               utils/split_util.c \
               wrapper/try_malloc.c \
               wrapper/try_open.c \
               wrapper/try_strtoll.c

OBJDIR       = ./obj/
OBJS         = $(addprefix $(OBJDIR), $(SRCS:%.c=%.o))
DEPS         = $(OBJS:%.o=%.d)

LIBFT_DIR    = ./libft/
LIBFT        = ./libft/libft.a
MINILIBX_DIR = minilibx-linux/
MINILIBX     = ./minilibx-linux/libmlx_Linux.a

CC           = gcc
CFLAGS       = -Wall -Wextra -Werror 
LDFLAGS      = -L/usr/lib
LIBS         = -lXext -lX11 -lm -lz
INCLUDE      = -I./include/ -I$(LIBFT_DIR) -I$(MINILIBX_DIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT) $(MINILIBX)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MINILIBX) $(LDFLAGS) $(LIBS) -o $@

$(LIBFT): dummy
	$(MAKE) bonus -C $(LIBFT_DIR)
	
$(MINILIBX): dummy
	$(MAKE) -C $(MINILIBX_DIR)
	
-include $(DEPS)

.PHONY: all
all: $(NAME)

.PHONY: bonus
bonus: all

.PHONY: clean
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(MINILIBX_DIR)
	rm -rf $(OBJDIR)

.PHONY: fclean
fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -rf $(OBJDIR)
	rm -f $(NAME) 

.PHONY: re
re: fclean all

.PHONY: dummy
dummy:
