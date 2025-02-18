#include<stdio.h>
#include<math.h>
int main(){
    int matrix[5][5];
    int r,c;
     for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            scanf("%d",&matrix[i][j]);
            if (matrix[i][j] == 1) {
                r=i;
                c=j;
            }
        }
    }
    int moves = abs(r-2) + abs(c-2);
    printf("%d\n",moves);

    return 0;
}
