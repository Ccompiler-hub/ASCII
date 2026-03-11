#include <stdio.h>
#define TABSTOP 8

int main(){
	int c;
	int k = 0; //for kolumn
	int sp = 0; //spamming spaces
	while ((c = getchar()) != EOF){
	if (c == ' ')	{
		sp++;
		if (TABSTOP - ((k+TABSTOP) % TABSTOP) == sp) //if spamming is the same as a single tab...
			{putchar('\\'); putchar('t');sp = 0;k += sp;}
			}
	else	{
		while(sp > 0) {putchar(' '); sp--;k++;}
		putchar(c);
		k++;
		sp = 0;
		if (c == '\n') k = 0;
		}
	}
}
