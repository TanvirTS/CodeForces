/*
 ** Author: Tshahriar32
*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[25];
    int faces=0;
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(strcmp(s,"Tetrahedron")==0)
            faces += 4;
        else if(strcmp(s,"Cube")==0)
            faces += 6;
        else if(strcmp(s,"Octahedron")==0)
            faces += 8;
        else if(strcmp(s,"Dodecahedron")==0)
            faces += 12;
        else if(strcmp(s,"Icosahedron")==0)
            faces += 20;   
        
    }
    printf("%d\n",faces);

    return 0;
}
