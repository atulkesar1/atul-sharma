#include <stdio.h>
#include<math.h>

int number(int n){
    return n;
}
double  cube(double n){
    return n*n*n;
}
double valueE(double n){
    return log10(n);
}
 float power(float x,float n){
    return pow(2.0,n);
}

double lnofis(double n){
    return log(n);
}

double nlogis(double n){
    return n*log10(n);
}

double loglogn(double n){
    return log10(log10(n));}

float squarerootlg(float n){
    return sqrt(log10(n));
}
 double logFactorial(int n) {
  double result = 0.0;
  for (int j = 1; j <= n; j++) {
    result += log10(j);
  }
  return result;
}
unsigned long int powerlogn(float x,float n){
    return pow(x,log10(n));
}
unsigned long int threeupontwo(float k,float n){
    return pow(3.0/2.0,n);
}
double factorial(int n) {
  double result = 1;
  for (int k = 1; k <= n; k++) {
    result *= k;
  }
  return result;
}

int main(){ 
    

    for(int i=0;i<=100;i=i+10){
     printf("\n");
    printf( "number is  %d\n  "  , number(i));
    printf( "the ans of cube %lf\n  ", cube(i));
    printf( "soln of log  %lf \n  " , valueE(i));
    printf( "soln of ln is   %lf  \n"    , lnofis(i));
    printf( "soln of n*log   %lf \n   "  , nlogis(i)) ;
    printf( "soln of log(log(n)) %lf\n   "   , loglogn(i));
    printf( "power of 2 is  %f  \n  "   , power(2.0,i));
    printf( "sqrt of logn is  %f \n  "   , squarerootlg(i));
    printf( "factorial of logn %lf \n  "    , logFactorial(i));
    printf( "2 power of logn %lu \n  "    , powerlogn(2.0,i));
    printf( "3/2 power of n  is  %lu\n  "    , threeupontwo(3.0/2.0,i));
    printf( "Factorial of is %lf\n",  factorial(i));
            }
            return 0;
        }
    

