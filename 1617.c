#include <stdio.h>
#include <math.h>
int main() {
    int a, i, j, t, sum;
    scanf("%d", &a);
    for(i=0, sum=t=a;t;t/=10, i++) {} i--;
    for(j=0;i>=0;i--, j++) {
        sum+=(int)pow(10, j)*((a/(int)pow(10, i))%10);
    }
    for(i=0, t=sum;t;t/=10, i++) {} i--;
    for(j=0;j<=i;j++, i--) {
        if(((sum/(int)pow(10,i))%10)!=((sum/(int)pow(10,j))%10)) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}