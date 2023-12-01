#include <stdio.h>
#include <string.h>

int conTolnt(char c) {
    const int diff = 1 - '1';
    return c + diff;
}

void convertprint(char str[]) {
    int len = strlen(str);

    for (int i =0; i < len; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            printf("%c",str[i] + ('a'-'A'));
        }
        else if ('a' <= str[i] && str[i] <= 'z') {
            printf("%c",str[i] + ('A'-'a'));
        }
        else {
            printf("%c",str[i]);
        }
    }
}

int main() {
    char str[50];

    printf("Input> ");
    fgets(str,sizeof(str),stdin);

    printf("Output> ");
    convertprint(str);

    return 0;
}