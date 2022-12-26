#include <stdio.h>
#include <windows.h>
#define eachoneline 30
#define EOL eachoneline
int main() {
    int i, a1=0, b1=0, n, m, j, tsum=0, cnt=0, t, one=0;
    FILE *fp;
    fp=fopen("_bcompare.txt", "r");
    fscanf(fp, "%d %d", &n, &m);
    int a[n], b[m], aUb[n+m];
    for(i=0;i<n;i++) {
        fscanf(fp, "%d", &a[i]);
    }
    for(i=0;i<m;i++) {
        fscanf(fp, "%d", &b[i]);
    }
    fclose(fp);
    a1=b1=0;
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
            aUb[++i]=-1;
            if(a1+1<n&&a1!=-1) a1++;
            else a1=-1;
            if(b1+1<n&&b1!=-1) b1++;
            else b1=-1;
        }
    }
    fp=fopen("_acompare.txt", "w");
    fprintf(fp, "두 플레이어가 푼 문제들의 갯수는 다음과 같습니다 : %d / %d\n", n, m);
    fprintf(fp, "두 플레이어가 푼 문제들은 다음과 같습니다 :");
    one=0;
    for(i=0, cnt=0;i<n+m;i++) { 
        if(!(cnt%EOL)&&!one) {
            fprintf(fp, "\n");
            one=1;
        }
        if(~aUb[i]) {
            one=0;
            cnt++;
            fprintf(fp, "%d ", aUb[i]);
        }
    }
    fprintf(fp, "\n\n둘 다 푼 문제 : \n");
    for(i=0, cnt=0;i<n+m;i++, tsum=0) {
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
            fprintf(fp, "%d ", aUb[i]);
            cnt++;
            if(!(cnt%EOL)) {
                fprintf(fp, "\n");
            }
        }
    }
    fprintf(fp, "\n\n첫번째 플레이어'만' 푼 문제 : \n");
    for(i=0, cnt=0;i<n+m;i++, tsum=0) {
        for(j=0;j<n;j++) {
            if(a[j]==aUb[i]) {
                tsum++;
                break;
            }
        }
        for(j=0;j<m;j++) {
            if(b[j]==aUb[i]) {
                tsum--;
                break;
            }
        }
        if(tsum>0) {
            fprintf(fp, "%d ", aUb[i]);
            cnt++;
            if(!(cnt%EOL)) {
                fprintf(fp, "\n");
            }
        }
    }
    fprintf(fp, "\n\n두번째 플레이어'만' 푼 문제 : \n");
    for(i=0, cnt=0;i<n+m;i++, tsum=0) {
        for(j=0;j<m;j++) {
            if(b[j]==aUb[i]) {
                tsum++;
                break;
            }
        }
        for(j=0;j<n;j++) {
            if(a[j]==aUb[i]) {
                tsum--;
                break;
            }
        }
        if(tsum>0) {
            fprintf(fp, "%d ", aUb[i]);
            cnt++;
            if(!(cnt%EOL)) {
                fprintf(fp, "\n");
            }
        }
    }
    fprintf(fp, "\n\n");
    fclose(fp);
}