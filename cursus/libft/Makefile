#created executable file
NAME = libft.a

#compiler
CC = cc
#compiler flags
CCFLAGS = -Wall -Wextra -Werror

#archiver with it's flags
ARNAME = ar rcs $(NAME)

RANNAME = ranlib $(NAME)

#delete with flags
RM = rm -f

#all mandatory files
SRCS =	$(addprefix ft_, $(addsuffix .c, atoi bzero calloc isalnum \
		isalpha	isascii isdigit isprint itoa memchr memcmp memcpy \
		memmove memset putchar_fd putendl_fd putnbr_fd putstr_fd \
		split strchr strdup striteri strjoin strlcat strlcpy strlen \
		strmapi strncmp strnstr strrchr strtrim substr tolower toupper))
#turns source files into object files
OBJS := $(SRCS:%.c=%.o)

#finds all BONUS files in sourcefolder endning on _bonus.c
BONUS_SRCS = $(addprefix ft_, $(addsuffix _bonus.c, lstnew lstadd_back \
			 lstadd_front lstclear lstdelone lstiter lstlast lstmap \
			 lstnew lstsize))
#turns BONUS source files into object files
BONUS_OBJS := $(BONUS_SRCS:%.c=%.o)

ALL_OBJS = $(OBJS) $(BONUS_OBJS)

#runs $(NAME)
all: $(NAME)

#creates the library for the mandatory part
$(NAME): $(OBJS)
	$(ARNAME) $^

#creates the library for mandatory and bonus part
bonus: $(ALL_OBJS)
	$(ARNAME) $^

#compiler with flags, the output file, compile
# the sourcefile to objectfile without linking
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

#deletes all object files
clean:
	$(RM) $(ALL_OBJS)

#runs clean and deletes library
fclean: clean
	$(RM) $(NAME)

#runs fclean and $(NAME)
re: fclean $(NAME)

.PHONY: all, bonus, clean, fclean, re