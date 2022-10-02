#include <stdio.h>
int a[3]={1,1,2};
int pibonachi(int b) {
    if(b==1) return a[0];
    else {
        a[0]=a[1]%10009;
        a[1]=a[2]%10009;
        a[2]=a[0]%10009+a[2]%10009;
        return pibonachi(b-1);
    }
}
int main() {
    int b;
    scanf("%d", &b);
    printf("%d", pibonachi(b));
}