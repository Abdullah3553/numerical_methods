#include <iostream>
#include "Number_operations.h"

using namespace std;

int main(){
    Binary x("0101101010");
    Number_Operations op;

    cout << op.binary_to_decimal(x) << endl;

    cout << op.decimal_to_binary(346)<< endl;
    return 0;
}
