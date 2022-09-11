#include <stdio.h>

int n, d[110];
int f() {
    int i, max=0, index;
    for(i=0;i<n;i++) {
        if(max<d[i]||i==0) {
            max=d[i];
            index=i;
        }
    }
    return index+1;
}                          // 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}