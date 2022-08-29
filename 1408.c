#include <stdio.h>
int main() {
    int i;
    char a[21];
    scanf("%s", a);
    for(i=0;i<21;i++) {
        if(a[i]=='\0') {
            break;
        }
        printf("%c", a[i]+2);
    }
    printf("\n");
    for(i=0;i<21;i++) {
        if(a[i]=='\0') {
            break;
        }
        printf("%c", (a[i]*7)%80+48);
    }
}