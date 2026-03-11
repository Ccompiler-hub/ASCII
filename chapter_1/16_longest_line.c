#include <stdio.h>
#define MAXLINE 10

int get_line(char s[]);
void copy(char to[], char from[]);

int main(){ // the code should identify the longest line even if it surpasses MAXLINE, print the truncated version
	char line[MAXLINE];
	char longest[MAXLINE];
	int len, max = 0;
	while ((len = get_line(line)) > 0)
		if (len > max){max = len; copy(longest, line);}
	if (max > 0) printf("%s", longest);
	return 0;
}


int get_line(char s[]){
	int c;
	int i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		if (i < MAXLINE - 1) {s[i] = c;}
	if (c == '\n')
		if (i < MAXLINE - 1) {s[i] = c; i++;}
	if (i < MAXLINE - 1) s[i] = '\0'; else s[MAXLINE] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i = 0;
	while ((to[i] = from[i]) != '\0') i++;
}
