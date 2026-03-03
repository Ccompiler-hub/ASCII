#include <stdio.h>

int main() {
	int c, tab, bsp, bsl = 0;
	while ((c = getchar()) != EOF){
		if (c == '\t' || c == '\b' || c == '\\'){
			if (c == '\t') printf("\\t");
			if (c == '\b') printf("\\b");
			if (c == '\\') printf("\\\\");
		}
		else
			putchar(c);
}}
