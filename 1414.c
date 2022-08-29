#include <stdio.h>
int main() {
    char a[101];
    int i, c=0, C=0;
    scanf("%s", a);
    for(i=0;i<101;i++) {
        if(a[i]=='\0') {
            break;
        }
        if(a[i]=='c'||a[i]=='C') {
            c++;
        }
    }
    for(i=0;i<101;i++) {
        if(a[i]=='\0'||a[i+1]=='\0') {
            break;
        }
        if((a[i]=='c'||a[i]=='C')&&(a[i+1]=='c'||a[i+1]=='C')) {
            C++;
        }
    }
    printf("%d\n%d", c, C);
}