#include <stdio.h>
#include <math.h>


int main(){
    int x, y, a;
    
    printf("enter your integers that you want to find their gcd\n");
    scanf("%d %d", &x, &y);
   
    int first_num[2] = {x, y};
    
    if(y > x){
        y = first_num[0];
        x = first_num[1];
    };

    if(x % y == 0){
        printf("gcd of %d and %d is %d", x, y, y);
        return 0;
    };

    while(1){
        if(x % y != 0){
            a = x%y;

//            y = x % y;
            x = y;
//            y = x%y;
            y = a;

            printf("a:%d\nx:%d\ny:%d\n", a, x, y);
            }
        
        else{
            break;
            }        
    };

    printf("gcd of %d and %d is %d", first_num[0], first_num[1], a);

    return 0;
}

