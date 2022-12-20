#include <stdio.h>
int main() {
    int i;
    char str[21];
    scanf("%s", str);
    for(i=0;i<21;i++) {
        if(str[i] == '\0')
            break;
        printf("\'%c\'\n", str[i]);
    }
}
