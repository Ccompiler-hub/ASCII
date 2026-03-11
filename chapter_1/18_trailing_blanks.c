#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[]);

int main(){
	char line[MAXLINE];
	int len;
	while ((len = get_line(line)) > 0) printf("%s", line);
	return 0;
}

int get_line(char s[]){
	int c;
	int i;
	while((c = getchar()) == ' ' || c == '\t' || c == '\n');
	for (i = 0; i < MAXLINE - 1 && c != EOF && c != '\n'; i++) {s[i] = c; c = getchar();}
	if (c == '\n') {s[i] = c; i ++;}
	s[i] = '\0';
	return i;
}
