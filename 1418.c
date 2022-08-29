#include <stdio.h>
int main() {
    int i;
    char a[11];
    scanf("%s", a);
    for(i=0;i<10;i++) {
        if(a[i]=='\0') break;
        else if(a[i]=='t') {
            printf("%d ", i+1);
        }
    }
}