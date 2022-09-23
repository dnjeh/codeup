#include <stdio.h>
#include <math.h>
int main() {
    char end_hex[4]={'\0','\0','\0','\0'};
    long long int a, sum_bin=0LL, sum_oct=0, sum_hex[4]={0,0,0,0}, i, j, q=0;
    scanf("%lld", &a);
    
    for(i=14;i>=0;i--) {
        if(a&(long long int)(pow(2, i))) {
            sum_bin+=(long long int)pow(10LL, i);
        }
    }
    printf("2 %lld\n", sum_bin);

    for(i=0;i<5;i++) {
        for(j=0;j<3;j++) {
            if(a&(long long int)pow(2, i*3+j)) {
                sum_oct+=((long long int)pow(2, j))*((long long int)pow(10, i));
            }
        }
    }
    printf("8 %lld\n", sum_oct);

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(a&(long long int)pow(2, i*4+j)) {
                sum_hex[i]+=(long long int)pow(2, j);
            }
        }
    }
    for(i=0;i<4;i++) {
        if(sum_hex[i]>9) {
            end_hex[3-i]=sum_hex[i]+55;
        }
        else if (sum_hex[i]!=0) {
            end_hex[3-i]=sum_hex[i]+48;
        }
        else {
            end_hex[3-i]='\0';
        }
    }
    printf("16 ");
    for(i=0;i<4;i++) {
        if(end_hex[i]!='\0') {
            printf("%c", end_hex[i]);
            q=1;
        }
        else if (q==1) {
            printf("0");
        }
    }
}