#include <stdio.h>

int n;


char grade(int n) {
    if(100>=n&&n>=90) return 'A';
    else if(n>=80) return 'B';
    else if(n>=70) return 'C';
    else if(n>=60) return 'D';
    else return 'F';       
}// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}