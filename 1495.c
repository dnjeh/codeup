#include <stdio.h>
int main() {
    int a, b, d, i, j, sum, t[5];
    scanf("%d %d %d", &a, &b, &d); //배열 크기, 크기값? 갯수 입력
    int c[a][b];                   //배열 선언
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            c[i][j]=0;           //배열
        }
    }
    for(i=0;i<d;i++) {
        for(j=0;j<5;j++) {
            t[j]=0;              //입력할 값 초기화 (의미 없지만)
        }
        for(j=0;j<5;j++) {
            scanf("%d", &t[j]);  //후 크기값?들 입력
        }
        c[t[0]][t[1]]+=t[4];
        if(t[2]+1<a&&t[3]+1<b)           
            c[t[2]+1][t[3]+1]+=t[4];
        if(t[3]+1<b)                         //질문의 제시사항대로 특정 부분 증감
            c[t[0]][t[3]+1]-=t[4];
        if(t[2]+1<a)
            c[t[2]+1][t[1]]-=t[4];
    }
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            printf("%d ", c[i][j]);          //날 것의 배열 출력
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<a;i++) {                       //후,
        for(j=0;j<b;j++) {
            sum=0;
            if(i-1>=0&&j-1>=0) {
                sum-=c[i-1][j-1];
            }
            if(i-1>=0) {
                sum+=c[i-1][j];              //누적합 계산 (가로 쪽 누적, 세로 쪽 누적, 중첩 제거, 자기자신 더하기)
            }
            if(j-1>=0) {
                sum+=c[i][j-1];
            }
            sum+=c[i][j];
            c[i][j]=sum;                     //누적합 배열로 입력
            printf("%d ", sum);              //후 출력
        }
        printf("\n");
    }
}