#include<iostream>
using namespace std;

int main()
{
int a;
cin >> a ;
if( a % 3 == 0 && a % 5 == 0 ){
    cout << "BuzzFizz" << endl;
    //If a is a multiple of both 3 and 5 print BuzzFizz
}
else if( a % 3 == 0){
    cout<< "Fizz" << endl;
}
// If a is a multiple of 3 then print Fizz
else if ( a % 5 == 0){
    cout<< "Buzz" <<endl;
}
// If a is a multiple of 5 print Buzz
}
