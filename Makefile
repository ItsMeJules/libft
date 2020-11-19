NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
IFLAGS			= -I$(INCS_PATH)
AR				= ar
ARFLAGS			= rcs
RM				= rm -rf

STR_SRCS_PATH	= string
MEM_SRCS_PATH	= memory
CHAR_SRCS_PATH	= char
FD_SRCS_PATH	= fd
BONUS_SRCS_PATH	= bonus
SRCS_PATH		= srcs
INCS_PATH		= includes
INCS_NAME		= libft.h

INCS			= $(addprefix $(INCS_PATH)/, $(INCS_NAME))
SRCS			= $(addprefix $(SRCS_PATH)/, ft_strdup.c \
					ft_strlen.c \
					ft_substr.c \
					ft_strtrim.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strmapi.c \
					ft_strjoin.c \
					ft_strlcpy.c \
					ft_split.c \
					ft_atoi.c \
					ft_strlcat.c \
					ft_itoa.c \
					ft_bzero.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_calloc.c \
					ft_tolower.c \
					ft_isdigit.c \
					ft_isalpha.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_tolower.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c)
BONUS			= $(addprefix $(SRCS_PATH)/, ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c)

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

all				: $(NAME)

$(NAME)			: $(OBJS)
				$(AR) $(ARFLAGS) $@ $^

%.o				: %.c
				$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

bonus			: $(OBJS) $(BONUS_OBJS)
				$(AR) $(ARFLAGS) $(NAME) $^

clean			: 
				$(RM) $(OBJS) $(BONUS_OBJS) $(INCS:.h=.h.gch)

fclean			: clean
				$(RM) $(NAME)
				
re				: fclean all

.PHONY			: all re clean fclean
