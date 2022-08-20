#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
void letter_space(char *sentence) {
    char _sentence[999];
    strcpy(_sentence, sentence);
    int ii, jj = 0;
    for(ii=0;ii<999;ii++) {
        if(_sentence[ii] == '(' || _sentence[ii] == ')' || _sentence[ii] == '!' || _sentence[ii] == '=' || _sentence[ii] == ':' || _sentence[ii] == '.' || _sentence[ii] == '\"' || _sentence[ii] == ' ' || _sentence[ii] == '\'' || _sentence[ii] == '\n' || (_sentence[ii] < '{' && _sentence[ii] > '`') || (_sentence[ii] < '[' && _sentence[ii] > '@') || (_sentence[ii] < ':' && _sentence[ii] > '/'))
	    	jj++;
	    else if(_sentence[ii] == '\0')
			ii=999;
        else
            //printf("\n현재 ii는 %c, jj는 %d!", _sentence[ii], jj);
	    	jj++;
            jj++;
            ii+=3;
    }
    for(ii=0;ii<(90-jj);ii++)
        printf(" ");
}
int main(){
    system("chcp 65001");
    system("cls");
    time_t t;
    t = time(NULL);
    int i, j, k, letter_etimelimit[4] ={2022, 8, 9, 0}, letter_stimelimit[4] ={2022, 8, 9, 0}; //유효기간(년, 월, 일, 시) 입력
    char  *letter_main[4][8] = { { //1문단  //내용은 검열됨
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    ""
    },
    {                              //2문단
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    ""
    },
    {                              //3문단
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    ""
    },
    {                              //4문단
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    ""
    }
    };
    char  *letter_top = {"열심히 공부하는 퍼덤에게"};
    char  *letter_bottom = {"2022년 8월 8일, 수목초 보냄"};
    char  *letter_ps = {"ㅋㅋㅋㅋ케 곧 죽겠구만"};
    struct tm* monthandday;
    monthandday = localtime(&t);

    int nowyear = monthandday->tm_year + 1900;
    int nowmonth = monthandday->tm_mon + 1;
    int nowday = monthandday->tm_mday;
    int nowhour = monthandday->tm_hour;
    if(letter_etimelimit[0]>=nowyear&&letter_etimelimit[1]>=nowmonth&&letter_etimelimit[2]>=nowday&&(letter_etimelimit[2]>nowday||letter_etimelimit[3]>=nowhour)&&letter_stimelimit[0]<=nowyear&&letter_stimelimit[1]<=nowmonth&&letter_stimelimit[2]<=nowday&&letter_stimelimit[3]<=nowhour)
        for(i=0;i<4;i++) {
            system("cls");
            printf(" ____________________________________________________________________________________________ \n");
            printf("/ %s ", letter_top);
            letter_space(letter_top);
            printf("\n");
            printf("/ %90s \n", " ");
            for(j=0;j<=i;j++) {
                for(k=0;k<8;k++) {
                    printf("/ %s ", letter_main[j][k]);
                    //letter_space(letter_main[j][k]);
                    printf("\n");
                }
                printf("/ %90s \n", " ");
            }
            if(i==3)  {
                printf("/");
                letter_space(letter_bottom);
                printf(" %s \n", letter_bottom);
                printf("/");
                printf(" 추신 : %s \n", letter_ps);
            }
            else system("pause");
            printf(" -------------------------------------------------------------------------------------------- \n");
        }
    else  
        printf(":/\n");
    system("pause");
    return 0;
}