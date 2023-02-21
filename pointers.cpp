#include<bits/stdc++.h>
using namespace std ;
int main(){
    int var = 1 ;
    cout << "The address of variable is " << &var <<endl ;
    // The variable is assigned a adress and the address is as shown
    int* pointer,var1 ;
    var1 = 5 ;
    pointer = &var1 ;
    // Here we are assingnig the adress of variable to the pointer we created
    cout << pointer <<endl ;
    // When you just print the pointer you get the adress of the variable
    cout << *pointer <<endl ;
    // Here we are asking to print the variable present in the address

}
