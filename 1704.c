#include <stdio.h>
int main() {
    int age=2013, f;
    char a[2][10];
    scanf("%s %s", a[0], a[1]);
    if(a[1][0]=='2'||a[1][0]=='4') f=1;
    else f=0;
    if(a[1][0]=='1'||a[1][0]=='2') age-=1900;
    else age-=2000;
    printf("%d %c", age-((a[0][0]-48)*10+a[0][1]-48), f?'F':'M');
}