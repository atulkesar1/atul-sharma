#include <iostream>
using namespace std;
int main() {
  int a,b,sum,multiply,divide,rem;
     cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
  
     int temp=a;
     a=b;
     b=temp;
    
    sum= a+b;
   
    multiply=a*b;
  

    cout <<"your answer is  " << sum  << " your ans of multiplying of two no. are  " << multiply; 

    
    return 0;
}