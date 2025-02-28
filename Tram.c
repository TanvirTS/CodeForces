#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int passengers=0,capacity=0;
    for (int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        passengers -= a;
        passengers += b;
        if (passengers >capacity)
            capacity=passengers;
        
    }

    printf("%d\n",capacity);
    
    return 0;
}
