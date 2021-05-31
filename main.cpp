#include <iostream>
#include "Number_operations.h"

using namespace std;

int main(){
    Number_Operations op;
    Binary x("1001101100101101011110101101");
    Decimal y(op.binary_to_decimal(x));


    cout << "Decimal -> "<<op.binary_to_decimal(x) << endl;

    cout << "Binary -> "<<op.decimal_to_binary( Decimal(op.binary_to_decimal(x)))<< endl;

    cout << "Octal -> "<<op.binary_to_octal(x) << endl;
    return 0;
}
