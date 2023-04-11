#include<iostream>
using namespace std;
class car
{ public:
int carnumbr;
string carname;
string carmodel;
    car(int x,string y,string z){
        carnumbr = x;
        carname = y;
        carmodel = z;
    }
};
int main(){
    
    car cardetails ( 100," BMW "," MER ");
    car cardetails1 ( 101," AUDI "," MER ");
    car cardetails2 ( 102," BMW "," TAv ");
    car cardetails3 ( 103 ," SWIFT "," MER ");
    cout << " your car1 details are :--->>>> " <<  cardetails.carnumbr << cardetails.carname  << cardetails.carmodel  <<endl;
    cout << " your car2 details are :--->>>> " << cardetails1.carnumbr << cardetails1.carname << cardetails1.carmodel <<endl;
    cout << " your car3 details are :--->>>> " << cardetails2.carnumbr << cardetails2.carname << cardetails2.carmodel <<endl;
    cout << " your car4 details are :--->>>> " << cardetails3.carnumbr << cardetails3.carname << cardetails3.carmodel <<endl;
   return 0;

}