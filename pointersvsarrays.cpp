#include<bits/stdc++.h>
using namespace std ;
int main(){
    int* ptr ;
    int arr[5] ={1,2,3,4,5} ;

    ptr = arr ;
    cout <<ptr << endl ;
    cout<<*ptr<<endl ;
    
    // The ptr is a pointer datatype and arr is integer type 
    // When they are made equal the pointer takes the address of first element of the array
    cout <<ptr+1<<endl ;
    cout <<*ptr+1 <<endl ;
    // The ptr+1 denotes the address of second element of the array
    // We can infact use the defference operator to get the value of element in the address 
    //instead it can be done like this also
    ptr = &arr[3] ;
    // The 4th element is assigned to the pointer
    cout <<*ptr-1 <<endl ;
    // We have printed the value in the pointer ptr-1
    cout <<ptr <<endl ;
    int arr1[10] ;
    int i ;
    for(i = 0 ;i <10 ;i++){
        cin >> *(arr1+i) ;
        // We are using "arr1" itself as the pointer to store the addresses of the variables stored in the variable input
    }
    for(i=0 ;i<10 ;i++){
        cout << arr1+i <<endl ;
        // Here we are printing the adresses of alln the variables stored in the pointer we initialised with the same name as the array
    }
}