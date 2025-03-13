#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("%c",a);
    }
    else if(b>a){
        printf("%c",b);
    }
    return 0;
}