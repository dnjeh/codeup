#include <stdio.h>
int main() {
    long long int a, sum=0;
    scanf("%lld", &a);
    for(;a;a/=10) sum+=a%10;
    if(sum%7==4) printf("Bad");
    else printf("Good");
}