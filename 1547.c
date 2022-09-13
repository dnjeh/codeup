#include <stdio.h>

int n;


int prime(int n) {
    int i, t=0;
    for(i=1;i<=n;i++) {
        if(n%i==0) t++;
    }  
    if(t==2) return 1;
    else return 0;
} // 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}