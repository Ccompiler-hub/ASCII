/*Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input*/
#include <stdio.h>

int main() {
	int chars[256];
	int  c, i, l;
	for (i = 0; i <=255; ++i) chars[i] = 0;
	while ((c = getchar()) != EOF) ++chars[(unsigned char)c];
	for (i = 0; i<=255; ++i){
		if (chars[i] > 0){putchar(i); printf("\t : ");
		for (l = 0; l < chars[i]; ++l) putchar('|'); putchar('\n');}}
}
/*
#include <stdio.h>

int main() {
    int chars[256] = {0};
    int c, i, l;

    while ((c = getchar()) != EOF)
        ++chars[(unsigned char)c];

    for (i = 0; i < 256; ++i) {
        if (chars[i] > 0) {
            putchar(i);
            printf("\t : ");
            for (l = 0; l < chars[i]; ++l) {
                putchar('|');
            }
            putchar('\n');
        }
    }

    return 0;
}
*/
