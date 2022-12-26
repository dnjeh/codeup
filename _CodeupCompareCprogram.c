#include <stdio.h>
#include <windows.h>
int main() {
    system("chcp 65001");
    int i, a1=0, b1=0, n, m, j, tsum=0;
    printf("비교할 두 플레이어 의 각각의 풀이 수를 알려주세요 : ");
    scanf("%d %d", &n, &m);
    int a[n], b[m], aUb[n+m];
    printf("이제 첫 플레이어의 푼 문제를 오름차순으로 입력해주세요 (마지막엔 0을 입력해주세요) : ");
    for(i=0, scanf("%d", &a[i]);i<n;scanf("%d", &a[i]), i++);
    printf("그리고, 두번째 플레이어의 푼 문제를 오름차순으로 입력해주세요 (마지막엔 0을 입력해주세요) : ");
    for(i=0, scanf("%d", &b[i]);i<m;scanf("%d", &b[i]), i++);
    for(i=0;i<n+m;i++) { 
        if((a1==-1||a[a1]>b[b1])&&b1!=-1) {
            aUb[i]=b[b1];
            if(b1+1>=m||b1==-1) b1=-1;
            else b1++;
        }
        else if((b1==-1||a[a1]<b[b1])&&a1!=-1) {
            aUb[i]=a[a1];
            if(a1+1>=n||a1==-1) a1=-1;
            else a1++;
        }
        else {
            aUb[i]=a[a1];
            aUb[++i]=b[b1];
            if(a1+1<n&&a1!=-1) a1++;
            else a1=-1;
            if(b1+1<n&&b1!=-1) b1++;
            else b1=-1;
        }
    }
    printf("두 사람의 푼 문제들은 다음과 같습니다 : ");
    for(i=0;i<n+m;i++) { 
        printf("%d ", aUb[i]);
    }
    for(i=0;i<n+m;i++, tsum=0) {
        for(j=0;j<n;j++) {
            if(a[j]==aUb[i]) {
                tsum++;
                break;
            }
        }
        for(j=0;j<m;j++) {
            if(b[j]==aUb[i]) {
                tsum++;
                break;
            }
        }
        if(tsum==2) {
            printf("%d ", aUb[i]);
        }
    }
    system("pause");
}