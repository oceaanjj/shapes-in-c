#include <stdio.h>

int main (){
    int x, y, num;

    printf("Enter Number: ");
    scanf("%i", &num);

if ( num%2 == 0){
    printf("This is an even number !");
}
else {
    for(x = 0 ; x <=num; x+=2){
        for(y = 0; y <= num*2 - 1; y+=2)
        {
        if ( y + x >= num - 1 && y - x <= num - 1)
        {
        printf("* ");
        }

        else{
            printf("_ ");
        }
        }

printf("\n");
    }
    }


    return 0;
}
