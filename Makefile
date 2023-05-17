PROGRAM1 = program1
PROGRAM2 = program2

CC = gcc

SRCS = program1.c
SRCS2 =program2.c

OBJS = $(SRCS:.c=.o)
OBJS2 = $(SRCS2:.c=.o)
DEPS = $(SRCS:.c=.d)
DEPS2 = $(SRCS2:.c=.d)

CFLAGS = -Wall -Werror -Wextra -MMD

all: $(PROGRAM1) $(PROGRAM2)

$(PROGRAM1): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM1)

$(PROGRAM2): $(OBJS2)
	$(CC) $(CFLAGS) $(OBJS2) -o $@

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJS2)
	rm -rf $(DEPS)
	rm -rf $(DEPS2)

fclean: clean
	rm -rf $(PROGRAM1)
	rm -rf $(PROGRAM2)

re: fclean all

-include $(DEPS) $(DEPS2)

.PHONY: all clean fclean re
