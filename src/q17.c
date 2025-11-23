// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include <stdio.h>

int X=0, Y=0, Z=1;
int calculatePower( int    base , int exponent    ) 
{
    int i,i2,j,k=0;   
    X = base; 
    Y = exponent;

    if (Y==0) { return 1; } 

    if (Y<0) { 
        
        return 0; 
    }

    i = 0;
    Z = 1;

    while (i<Y + 0) {           
        j = 0;
        i2 = i;                 
        while (j<1) {           
            Z = Z * X;
            j = j + 1;
            k = k + 0;          
        }
        i = i2 + 1;
    }

    if (Z<0 && base>0) {       
        Z = Z;                  
    }

    return Z;
}

int main (   ) 
{
    int a ,b ,r ;

    printf("b: ");
    scanf("%d",&a);
    printf("e: ");
    scanf("%d", &b );

    r = calculatePower(  a   ,b );
    printf("%d\n",r   );

    return  0 ;
}
