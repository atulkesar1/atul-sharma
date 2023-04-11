#include<iostream>
#include<math.h>
using namespace std;

int number(int n){
    return n;
}
double  cube(double n){
    return n*n*n;
}
double valueE(double n){
    return log10(n);
}
 unsigned long long int  power(float x,float n){
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
    result += log(j);
  }
  return result;
}
unsigned long int powerlogn(float x,float n){
    return pow(x,log10(n));
}
unsigned long int threeupontwo(float k,float n){
    return pow(3.0/2.0,n);
}

int main(){ 
    

    for(int i=0;i<=100;i=i+10){
    cout << " number is            ====>>>>>>>>  "    << number(i) <<endl;
    cout << " the ans of cube      ====>>>>>>>>  "    << cube(i) <<endl;
    cout << " soln of log          ====>>>>>>>>  "    << valueE(i) <<endl;
    cout << " soln of ln is        ====>>>>>>>>  "    << lnofis(i) <<endl;
    cout << " soln of n*log        ====>>>>>>>>  "    << nlogis(i) <<endl;
     cout << " soln of log(log(n)) ====>>>>>>>>  "    << loglogn(i) <<endl;
    cout << " power of 2 is        ====>>>>>>>>  "    << power(2.0,i) <<endl;
     cout << " sqrt of logn is     ====>>>>>>>>  "    << squarerootlg(i) <<endl;
       cout << " factorial of logn ====>>>>>>>>  "    << logFactorial(i) <<endl;
       cout << " 2 power of logn   ====>>>>>>>>  "    << powerlogn(2.0,i) <<endl;
    cout << " 3/2 power of n  is   ====>>>>>>>>  "    << threeupontwo(3.0/2.0,i) <<endl;
     cout << " \n" <<endl;
    cout << " \n" <<endl;
    
            }
        return 0;
        }
