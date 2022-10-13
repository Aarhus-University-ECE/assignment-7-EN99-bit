#include "taylor_sine.h"
#include <stdlib.h>
#include <math.h>

double factorial (int n){
    if (n<=1){
        return 1;  
    }
    else
        return (n*factorial(n-1));
             
}

double taylor_sine(double x, int n)
{
double sin = x;
double square_x = x*x;
double number = x; //tæller
double num=1; //initialising numerator
int q = 1;


for (int i=1; i<=n; i++){
q = q+2;
number = number*square_x;
num = factorial(q);

if (i % 2 == 0)//vi tjekker om tallet er lige eller ulige ift. om vi skal trække fra eller lægge til. Anvender modulus
{
    sin+=number/num;
} 
else
{
sin-=number/num;
}

}
    return sin;
}
