#include <stdio.h>
int main() {
    int min=0b00000000000000000000000000000001;
    int max[4]={0,0,0,0};
    int i, j, a, t, isitminus=0;
    scanf("%d", &a);
    if(a<0) {
        a=~a;
        isitminus=1;
    }
    for(i=0;;min<<=1) {
        t=1;
        if(min&a) {
            if(min<0b100000000) {
                for(j=1;j<min;j<<=1) {
                    t*=10;
                }
                max[0]+=t;
            }
            else if(min<0b10000000000000000) {
                for(j=1;j<(min)>>8;j<<=1) {
                    t*=10;
                }
                max[1]+=t;
            }
            else if(min<0b1000000000000000000000000) {
                for(j=1;j<(min)>>16;j<<=1) {
                    t*=10;
                }
                max[2]+=t;
            }
            else {
                for(j=1;j<(min)>>24;j<<=1) {
                    t*=10;
                }
                max[3]+=t;
            }
        }
        else if(min>a||min==0b10000000000000000000000000000000) {
            break;
        } 
    }
    if(isitminus==1) {
        for(i=0;i<a;i++) {
            max[i]=11111111-max[i];
        }
    }
    for(i=3;i>=0;i--) {
        if(max[i]!=0) {
            printf("%d", max[i]);
            for(j=i-1;j>=0;j--) {
                printf("%08d", max[j]);
            }
            break;
        }
        if(a==0) {
            printf("0");
            break;
        }
    }
}