PROGRAM1 = client
PROGRAM2 = server

CC = gcc

SRCS = client.c
SRCS2 = server.c

OBJS = $(SRCS:.c=.o)
OBJS2 = $(SRCS2:.c=.o)
DEPS = $(SRCS:.c=.d)
DEPS2 = $(SRCS2:.c=.d)

CFLAGS = -Wall -Werror -Wextra -MMD -I libft -I printf

# -L es la carpeta donde tiene que buscar las librerias
# -l es el nombre de la libreria sin lib al principio y .a al final 
# (ejemplo: si la libreria se llama libft.a, lo que escribes con -l es "-l ft",
# si la libreria se llama libftprintf.a, lo que escribes con -l es "-l ftprintf")
LDFLAGS = -L libft -L printf -l ft -l ftprintf

all: 
	make -C libft
	$(MAKE) -C printf
	$(MAKE) $(PROGRAM1) 
	$(MAKE) $(PROGRAM2)

$(PROGRAM1): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(PROGRAM1)

$(PROGRAM2): $(OBJS2)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS2) -o $@

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJS2)
	rm -rf $(DEPS)
	rm -rf $(DEPS2)

fclean: clean
	$(MAKE) -C libft fclean
	$(MAKE) -C printf fclean
	rm -rf $(PROGRAM1)
	rm -rf $(PROGRAM2)

re: fclean all

-include $(DEPS) $(DEPS2)

.PHONY: all clean fclean re
