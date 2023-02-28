#include<bits/stdc++.h>
using namespace std ;
int main(){
// Here we are trying to use the isdigit function
char str[] = "hj;pq910js4";
  int check;

  cout << "The digit in the string are:" << endl;

  for (int i = 0; i < strlen(str); i++)  {

    // check if str[i] is a digit
    check = isdigit(str[i]);

    if (check)
      cout << str[i] << endl;
  }

  return 0;
}
