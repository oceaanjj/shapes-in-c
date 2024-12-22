#include <stdio.h>
 int main(){
    int x, y, a, b, num;
printf("Enter a number: ");
scanf("%i", &num);

if ( num%2 == 0){
   printf("Can't do shape. This is an even number !\n");
}
else {
     a = num/2+1;
     b = a;
    for( y = 1; y <= num; y++) {
        for (x = 1; x <= num; x++){
            if (a >= x && b <= x)
            {
            printf("* ");
            }
            else {
                printf("_ ");
            }

    }
    printf("\n");
    if (y >= num/2+1){
        a--;
        b++;
    }
    else {
        a++;
        b--;
    }
}
}


    return 0;
 }
