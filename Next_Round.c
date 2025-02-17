#include<stdio.h>
int main(){
    int n,k,count=0;
    scanf("%d %d",&n,&k); 
    int scores[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&scores[i]);
    }
    for(int i=0;i<n && scores[i]>=scores[k - 1] && scores[i]>0;i++) {
        count++;
    }
    printf("%d\n", count); 

    return 0;
}
