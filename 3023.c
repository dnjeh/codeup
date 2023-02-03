#include <stdio.h>
#include <string.h>
char a[101], b[101], c[201];
int main() {
    int i, j, t, tt, f=0;
    char *A=a, *B=b;
    scanf("%s %s", a, b);
    if(strlen(a)<strlen(b)) {
        A=b;
        B=a;
    }
    if(*A=='-') {
        A++;
        f=!f;
    }
    if(*B=='-') {
        B++;
        f=!f;
    }
    if((*A=='0'&&A[1]=='\0')||(*B=='0'&&B[1]=='\0')) f=0;
    t=strlen(A)-1;
    tt=strlen(B)-1;
    for(i=tt;i>=0;i--) {
        for(j=t;j>=0;j--) {
            c[tt-i+t-j]+=((A[j]-48)*(B[i]-48));
            while(c[tt-i+t-j]>9) if(c[tt-i+t-j]>9) {
                c[tt-i+t-j+1]++;
                c[tt-i+t-j]-=10;
            }
        }
    }
    if(f) printf("-");
    f=0;
    for(i=200;i>=0;i--) {
        if(!f&&c[i]) f=1;
        if(f||!i) printf("%d", c[i]);
    }
}