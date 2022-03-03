TARGET = rush-02
OBJS = test.o
INCDIR = inc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

$(TARGET) : $(OBJS)
	@gcc $(CFLAGS) $(OBJS) -o $(TARGET)

%.o : %.c
	@gcc -c $(CFLAGS) $< -o $@

.PHONY : fclean
fclean:
	@rm -f *.o rush-02
