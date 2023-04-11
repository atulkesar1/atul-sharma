#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n] ;
       cout << "enter the size of elements"<<endl;
       cin >> n;
       cout << "enter the no. in elements"<<endl;
       for( int i=0;i<n;i++){
        cin >> a[i];
       }
       // print the no. in elements 
        for (int j=0;j<n;j++){
            cout << a[j] << "\n";
        }
        return 0;
    
}