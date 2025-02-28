#include<stdio.h>
int main(){
    int n,h;
    scanf("%d %d",&n,&h);
    int a[n];
    int width=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]<=h)
            width+=1;
        else if(a[i]>h)
            width+=2;
    }
    printf("%d",width);


    return 0;
}
