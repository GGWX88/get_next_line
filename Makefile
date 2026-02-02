ARCHIVE = get_next_line.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

FILENAMES = get_next_line

SRCS = $(addsuffix .c, $(FILENAMES))
OBJS = $(addsuffix .o, $(FILENAMES))

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

all: $(ARCHIVE)

$(ARCHIVE): $(OBJS)
	ar rcs $(ARCHIVE) $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(ARCHIVE)

re: fclean all

#Custom Rules:
alll:
	make --no-print-directory re
	make --no-print-directory clean

.PHONY: all clean fclean re
