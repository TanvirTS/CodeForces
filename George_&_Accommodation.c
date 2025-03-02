#include<stdio.h>
int main(){
   int n,space=0;
   scanf("%d",&n);
   while(n--){
    int p,q;
    scanf("%d %d",&p,&q);
    if(q-p >= 2)
     space++;
   }
   printf("%d\n",space);


    return 0;
}
