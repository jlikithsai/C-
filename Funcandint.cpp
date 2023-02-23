#include<bits/stdc++.h>
using namespace std ;
void printnum(int n){
  cout<< n << endl ;
}
void dispalynum(int n1, float n2){
  cout << "The integer number is" << n1 << endl ;
  cout << "The Double number is " << n2 << endl ;
}
int add (int n3, int n4 ){
  cin >> n3 >> n4 ;
 return(n3+n4) ;
  // The value of add becomes n3+n4 by using the return
}
int main (){
  int a,b ;
  cin >> a ;
  for(b=0;b<a;b++){
    int c ;
    cin >> c ;
    printnum(c) ;
  }
  for(b=0;b<a;b++){
    int e ;
    float f ;
    cin >> e >> f ;
    displaynum(e,f) ;
  }
  for(b=0;b<a;b++){
    int g,h,sum ;
     sum= add(g,h) ;
    // It is very important that all the functions we wish to assign are on the right hand side and not on the left hand side 
    cout << sum << endl ;
}
