/* Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank */
#include <stdio.h>

int longa(){
	int c = 0;
	int prev_was_blank = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!prev_was_blank){
				putchar(c);
				prev_was_blank = 1;
			}
		}else {
			putchar(c);
			prev_was_blank = 0;
		}
}}

int main(void) {
    int c, lastc = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }

    return 0;
}
