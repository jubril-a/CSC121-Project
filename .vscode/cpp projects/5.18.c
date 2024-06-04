#include <stdio.h>

 int isEven (int num ){
    if(num%2==0){
        return 1;
    }else{
        return 0;
    }
 }


int main (void){
    puts("Enter zero to end  program: ");
    int number;
    while (number != 0){
        puts("Enter number: ");
        scanf("%d",&number);
        if(isEven(number) == 1){
            printf("%d is an even numbe\n", number);
        }else{
            printf("%d is an odd number\n", number);
        }
    }
}