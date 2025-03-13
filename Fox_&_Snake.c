/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int r,c,n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
      if(i%2==0){
        for(int j=0;j<m;j++)
        printf("#");
        }
      else if(i%4==1){
        for(int j=1; j<m;j++)
          printf(".");
          printf("#");
      }
      else{
        printf("#");
        for(int j=1;j<m;j++)
          printf(".");
      }
      printf("\n");
      
    }
    
    return 0;
}
