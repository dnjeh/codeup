#include <stdio.h>
int main() {
    int i;
    char a[101], b[101];
    scanf("%100s %100s", a, b);
    for(i=0;i<100;i++) {
        if(a[i]==0&&b[i]==0)
            break;
        else if(a[i]=='\0') {
            printf("%s %s", a, b);
            return 0;
        }
        else if(b[i]=='\0') {
            printf("%s %s", b, a);
            return 0;
        }
    }
    for(i=0;i<100;i++) {
        if(a[i]>b[i]) {
            printf("%s %s", b, a);
            return 0;
        }
        else if(a[i]<b[i]) {
            printf("%s %s", a, b);
            return 0;
        }
    }
}