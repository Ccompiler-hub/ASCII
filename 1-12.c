/*Exercise 1-12. Write a program that prints its input one word per line */
#include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF){
		while (c != ' ' && c != '\n' && c != '\t' && c != '\b') {putchar(c); c = getchar();}
		printf("\n");}
}
