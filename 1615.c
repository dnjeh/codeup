#include <stdio.h>
int self(int t) {
    int i, j, ssum=0;
    for(i=1;i<=t;i++) {
        ssum=i;
        for(j=i;j;j/=10) {
            ssum+=j%10;
        }
        if(ssum==t) {
            return 0;
        }
    } 
    return 1;
}
int main() {
    int a, b, i, sum=0;
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++) {
        if(self(i)) {
            sum+=i;
        }
    }
    printf("%d", sum);
}