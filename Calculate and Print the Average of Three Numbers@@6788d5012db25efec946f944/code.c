#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int sum=a+b+c;
    float avg=sum/3;
    printf("Average: %f",avg);
    return 0;
}