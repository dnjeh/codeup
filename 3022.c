#include <stdio.h>
#include <string.h>
int main() {
    int i, t, tt, f=0;
    char a[101], b[101];
    char *A=a, *B=b;
    scanf("%s %s", a, b);
    if(strlen(a)<strlen(b)||(strlen(a)==strlen(b)&&strcmp(a, b)<0)) {
        A=b;
        B=a;
        f=1;
    }
    t=strlen(A)-1;
    tt=strlen(B)-1;
    for(i=0;i<=tt;i++) {
        A[t-tt+i]-=B[i]-48;
    }
    for(i=t;i>=0;i--) {
        if(A[i]<'0') {
            A[i]+=10;
            A[i-1]--;
        }
    }
    if(f) printf("-");
    for(i=0;i<t&&A[i]=='0';i++);
    printf(A+i);
}