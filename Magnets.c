#include<stdio.h>
int main(){
   int n,groups=1;
   char first[3],current[3];
   scanf("%d",&n);
   scanf("%s",first);
   int i=1;
   while(i<n){
    scanf("%s",current);
    if(current[0] != first[0])
      groups++;
    first[0]=current[0];
    i++;
   }
   printf("%d\n",groups);


    return 0;
}
