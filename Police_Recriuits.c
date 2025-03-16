/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int n,events,untreated=0,Available_Officers=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&events);
        if(events==-1){
            if(Available_Officers>0)
                Available_Officers--;
            else
                untreated++;
        }
        else
            Available_Officers+=events;

    }
    printf("%d",untreated);

    return 0;
}
