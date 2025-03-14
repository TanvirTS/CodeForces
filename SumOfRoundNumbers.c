/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
      scanf("%d",&n);
      int numbers[6];
      int count=0;
      int X=1;
 
      int temp=n;
      while(temp>0){
        int digit= temp%10;
        if(digit != 0)
            numbers[count++]=digit*X;
        temp/=10;
        X*=10;
      }
      printf("%d\n",count);
      for (int i=0;i<count;i++)
          printf("%d ",numbers[i]);
      
      printf("\n");
    }
    
    return 0;
}
