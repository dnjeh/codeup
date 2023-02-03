#include <stdio.h>
#include <string.h>
int main() {
    int i, t, tt, f=0;
    char a[101], b[101];
    char *A=a, *B=b;
    scanf("%s %s", a, b);
    if(strlen(a)<strlen(b)) {
        A=b;
        B=a;
    }
    t=strlen(A)-1;
    tt=strlen(B)-1;
    for(i=0;i<=tt;i++) {
        A[t-tt+i]+=B[i]-48;
    }
    for(i=t;i>=0;i--) {
        if(A[i]>'9'&&i>=1) {
            A[i]-=10;
            A[i-1]++;
        }
        else if(A[i]>'9'&&!i) {
            A[i]-=10;
            f=1;
        }
    }
    if(f) printf("1");
    printf(A);
}