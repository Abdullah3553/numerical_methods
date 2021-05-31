#include <iostream>
#include "Number_operations.h"

using namespace std;

int main(){
    Number_Operations op;
    // cases for testing
    Octal x("14");
    cout << op.octal_to_binary(x) << endl;
    cout << op.octal_to_decimal(x) << endl;
    cout << op.octal_to_hexadecimal(x) << endl;
    return 0;
}

/*
    Binary x("1111");

    cout <<"Binary -> " << x.get() << " original\n";
    cout << "Binary -> "<<op.decimal_to_binary( Decimal(op.binary_to_decimal(x)))<< endl;
    cout << "Decimal -> "<<op.binary_to_decimal(x) << endl;
    cout << "Octal -> "<<op.binary_to_octal(x) << endl;
    cout << "Hexadecimal -> "<<op.binary_to_hexadecimal(x)<<endl;
 * */
