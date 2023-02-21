#include<iostream>
using namespace std ;
// The conversion of lower data types to higher data types will lead to no data loss otherwisewe will experience dataloss
/***** Do This conversion only if you want to convert lower to higher to get proper results*********/
int main() {
     // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;

    return 0;
}