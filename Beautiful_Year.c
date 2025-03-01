#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    while(1){
       year++;
       int temp=year;
       int digits[10]={0};
       int flag=1;
       while(temp>0){
        int digit=temp%10;
            if(digits[digit]>0){
                flag=0;
                break;
            }
        digits[digit]=1;
        temp/=10;
       }
    if(flag){
        printf("%d\n",year);
        break;
    }
    }



    return 0;
}
