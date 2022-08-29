#include <stdio.h>
int main() {
    int i, sum=0;
    char a[502];
    scanf("%s", a);
    for(i=0;i<501;i++) {
        if(a[i]=='\0') {
            break;
        }
        sum+=(int)a[i];
    }
    if(sum%3==0) {
        printf("1");
    }
    else {
        printf("0");
    }
}