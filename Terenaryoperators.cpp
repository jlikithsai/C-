#include <iostream>
#include <string>
using namespace std;

int main() {
  double marks ;
  // take input from users
  cout << "Enter your marks: ";
  cin >> marks;

  // ternary operator checks if
  // marks is greater than 40
  string result = (marks >= 40) ? "passed" : "failed";
  // string represents the kind of output we want result is a new variable 
  // the rest is syntax 
  cout << "You " << result << " the exam.";

  return 0;
}