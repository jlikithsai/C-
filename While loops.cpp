#include<iostream>
using namespace std ;
int main(){
    int sum = 0 ;
    int num ;
    cin >> num ;
    while (num >=0 ){ 
        cout << " Please enter the next number " << endl ;
        cin >> num ;
        sum += num ;

    }
    cout << sum <<endl ;
}