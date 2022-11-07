#include <stdio.h>
int main() {
    int i;
    char a[101];
    for(i=0;i<=100;i++) {
        a[i]='\0';
    }
    fgets(a, 100, stdin);
    for(i=0;i<=100;i++) {
        if(a[i]=='\n') a[i]='\0';
    }
    for(i=100;i>=0;i--) {
        if(a[i]!='\0') {
            break;
        }
    }
    for(;i>=0;i--) {
        printf("%c", a[i]);
    }
}