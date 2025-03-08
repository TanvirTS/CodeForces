/*
 ** Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int money;
    scanf("%d",&money);
    int bills=0;
    bills+= money/100;
    money %= 100;
    bills+= money/20;
    money %= 20;
    bills+= money/10;
    money %= 10;
    bills+= money/5;
    money %= 5;
    bills+= money/1;

    printf("%d\n",bills);


    return 0;
}
