#include <stdio.h>
int main() {
    char t;
    for(;scanf("%c", &t)!=EOF;) {
        switch(t) {
            case ' ':
                break;
            case ';':
                printf(" \n");
                break;
            case ',':
                printf(" ");
                break;
            default:
                printf("%c", t);
                break;
        }
    }
    printf(" ");
}