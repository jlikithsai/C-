#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,i ;
    cin >> n ;
    for(i=0;i<n;i++){
        if(i%2 == 0){
        continue ;
        }
        // The use of continue statement is to just skip the execution of the statement in for loop if the input matches a certain condition
        cout<< i << endl ;
    }
    for(i=0;i<n;i++){
        if(i%2==1){
            break ;
        }
        // the break statement makes the computer exit from the "for" loop completely
        cout << i << endl ;
    }
}   