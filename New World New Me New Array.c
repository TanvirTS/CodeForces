#include<stdio.h>
int min_operations(int n,int k,int p){
    if (k>n*p || k<n*(-p)) {
        return -1;
    }
    if (k == 0) {
        return 0;
    }
    int sum = 0, operations = 0;
    for (int i = 0; i < n; i++){
        int remaining = k - sum;
        int value = (remaining >= p) ? p : (remaining <= -p ? -p : remaining);
        sum += value;
        operations++;
 
        if (sum == k){
            return operations;
        }
    }
 
    return -1; 
}
 
int main(){
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n,k,p;
        scanf("%d %d %d",&n,&k,&p);
        
        printf("%d\n",min_operations(n,k,p));
    }
 
    return 0;
}
