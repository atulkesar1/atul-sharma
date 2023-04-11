#include<iostream>
using namespace std;
int addSum(int x,int y){
    cout<< "sum of two no. are "  <<x+y <<endl;  
    return x+y;
}
int minusSub(int x,int y){
    cout<< "sub of two no. are "<< x-y <<endl;  
    return x-y;
}
int divide(int x,int y){  
    if( x>y){
        cout<< "ans of two no. are " <<x/y<<endl;  
    return x/y;}
    else{
        cout<< "ans of two no. are " <<y/x <<endl;  
        return y/x;
    }
}


int main(){
    int a,b;
    
    cout<< " enter the two numbers ::::::-->>>>"<<endl;
    cin>> a>>b;
    addSum(a,b);
    minusSub(a,b);
    divide(a,b);
    return 0;


}