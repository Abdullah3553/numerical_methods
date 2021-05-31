#include <iostream>
#include "Number_operations.h"

using namespace std;

int main(){
    Number_Operations op;
    Binary x("1111");

    cout <<"Binary -> " << x.get() << " original\n";
    cout << "Binary -> "<<op.decimal_to_binary( Decimal(op.binary_to_decimal(x)))<< endl;
    cout << "Decimal -> "<<op.binary_to_decimal(x) << endl;
    cout << "Octal -> "<<op.binary_to_octal(x) << endl;
    cout << "Hexadecimal -> "<<op.binary_to_hexadecimal(x)<<endl;
    return 0;
}
