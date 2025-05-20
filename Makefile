# Makefile for Lex and Yacc program

LEX = lex
YACC = yacc
CC = gcc
CFLAGS = -Wall -g

TARGET = program
LEX_SRC = program.l
YACC_SRC = program.y

all: $(TARGET)

$(TARGET): y.tab.c lex.yy.c
	$(CC) $(CFLAGS) y.tab.c lex.yy.c -o $(TARGET)

lex.yy.c: $(LEX_SRC)
	$(LEX) $(LEX_SRC)

y.tab.c: $(YACC_SRC)
	$(YACC) -d $(YACC_SRC)

clean:
	rm -f lex.yy.c y.tab.c y.tab.h $(TARGET)
