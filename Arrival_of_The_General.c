/*
 ** Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int soldiers[n];
    int max=0,min=0;
    for(int i=0;i<n;i++){
        scanf("%d",&soldiers[i]);
        if(soldiers[i] > soldiers[max])
            max=i;
        if(soldiers[i] <= soldiers[min])
            min=i;
    }
    int moves = max + (n-1-min);
    if(max>min)
        moves--;

    printf("%d\n",moves);



    return 0;
}
