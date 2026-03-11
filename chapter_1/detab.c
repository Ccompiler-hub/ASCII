#include <stdio.h>
#define MAXLINE 1000
#define TABSTOP 8

int main(){
	int c;
	int k = 0; //k for kolumn
	//tab is just a character, if '\t' then ' ' * y
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			while(((k+TABSTOP) % TABSTOP) > 0) 
				{putchar(' '); k++;}
		putchar(c);
		if (c == '\n') k = 0;
	}
}
