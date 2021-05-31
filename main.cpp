#include <iostream>
#include "Number_operations.h"

using namespace std;

int main(){
    Binary x("111");
    Decimal y(7);
    Number_Operations op;

    cout << op.binary_to_decimal(x) << endl;

    cout << op.decimal_to_binary(y)<< endl;
    return 0;
}
