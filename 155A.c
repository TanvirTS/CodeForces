/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int contest_points[n];
   int count=0;
    for(int i=0;i<n;i++)
        scanf("%d",&contest_points[i]);
    
    int best=contest_points[0],worst=contest_points[0];

    for (int i=1;i<n;i++){
        if (contest_points[i] > best){
            count++;
            best=contest_points[i];
        }
        if (contest_points[i] < worst){
            count++;
            worst=contest_points[i];
        }
    }
    printf("%d\n",count);
    
    return 0;
}

