#include<stdio.h>
int lucky_digit(char ch){
    return ch == '4' || ch == '7';
  }
int lucky_number(int num) {
    return num == 4 || num == 7 || num == 44 || num == 47 || num == 74 || num == 77 ||
           num == 444 || num == 447 || num == 474 || num == 477 ||
           num == 744 || num == 747 || num == 774 || num == 777;
}
int main(){
    char n[20];
    scanf("%s",n);
    int lucky_count = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        if (lucky_digit(n[i]))
            lucky_count++;
        
    }

    if (lucky_number(lucky_count))
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
