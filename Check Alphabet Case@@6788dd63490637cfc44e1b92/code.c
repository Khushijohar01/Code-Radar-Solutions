#include <stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if(letter>=65 && letter<=90){
        printf("Uppercase");
    }
    else if("letter>=95 && letter<=122"){
        printf("Lowercase");
    }
    return 0;
}