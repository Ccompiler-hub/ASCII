#include <stdio.h>
#define N 20

int main() {
    int c;
    int col = 0;
    int last_blank = -1;
    char line[N + 1];

    while ((c = getchar()) != EOF) {
        line[col] = c;

        if (c == ' ' || c == '\t')
            last_blank = col;

        if (c == '\n') {
            for (int i = 0; i <= col; i++)
                putchar(line[i]);
            col = 0;
            last_blank = -1;
            continue;
        }

        col++;

        if (col >= N) {
            if (last_blank >= 0) {
                for (int i = 0; i < last_blank; i++)
                    putchar(line[i]);
                putchar('\n');

                col = col - last_blank - 1;
                for (int i = 0; i < col; i++)
                    line[i] = line[last_blank + 1 + i];
            } else {
                for (int i = 0; i < N; i++)
                    putchar(line[i]);
                putchar('\n');

                col = 0;
            }

            last_blank = -1;
        }
    }

    return 0;
}
