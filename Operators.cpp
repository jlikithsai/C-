#include <iostream> 
using namespace std ;
int main() {
    // Time for some bitwise operators 
    // They should always be stored in brackets 
    int a,b ;
    a = 25 ;
    b = 11 ;
    cout << (a& b) << endl ;
    // & represents and operator shows one only if both the values up and low are 1 
    /* 25 = 00011001
       11 = 00001011
          = 00001001 == 9  */
    // similarly we can use | for bitwise or 
    // we can use ^ for bitwise XOR i.e. for o,o and 1,1 it will output 0 rest it will output i
    // ~ can be used for bitwise complement 
    // >> can be used for the shift right operator and << can be used for bitwise left operator 
    // ! can be used for logical nor statement
    //Let us work with some other operators 
    cout<< sizeof (int)<< endl;
    // This will show the size of the beforementioned Datatype 
    if (a != b){
        cout << "The != denotes not equal to" << endl ;
    }
    else{

    }
}