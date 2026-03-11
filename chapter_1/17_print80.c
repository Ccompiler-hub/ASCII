#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[]);
int main(){
	char line[MAXLINE];
	int len;
	while ((len = get_line(line)) > 0){
		if (len > 80) printf("%s", line);}
}

int get_line(char s[]){
	int c;
	int i;
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {s[i] = c; i++;}
	s[i] = '\0';
	return i;
}
