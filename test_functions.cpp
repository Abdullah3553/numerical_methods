
// this is a file to store the testing functions until needed ...
#include <iostream>
#include "Number_operations.h"

using namespace std;


void test_binary(){
    auto rand_bin = []() -> auto{
        string ret;
        int bits = rand()%32;
        for(int i=0;i<bits;i++){
            ret += ( (rand()%2) + '0' );
        }
        return  ret;
    };
    string num;
    Number_Operations op;
    while(true){
        // use the breakpoints to pause the execution ...
        num = rand_bin();
        cout << "Random Binary Number -> " << num << endl;
        Binary x(num);
        cout << op.binary_to_decimal(x) << endl;
        cout << op.binary_to_octal(x) << endl;
        cout << op.binary_to_hexadecimal(x) << endl;
        cout << "---------------------------" << endl;
        cout << op.binary_to_decimal(Binary(op.decimal_to_binary(Decimal(op.binary_to_decimal(x))))) << " This should = "
             << op.binary_to_decimal(x) << endl;
        cout << op.binary_to_octal(Binary(op.octal_to_binary(Octal(op.binary_to_octal(x))))) << " This should = "
             << op.binary_to_octal(x) << endl;
        cout << op.binary_to_hexadecimal(Binary(op.hexadecimal_to_binary(Hexadecimal(op.binary_to_hexadecimal(x))))) << " This should = "
             << op.binary_to_hexadecimal(x) << endl;
    }
}

void test_decimal(){
    auto rand_dec = []() -> auto{
        int range = rand()%100000000;
        return rand()%range;
    };
    long long num;
    Number_Operations op;
    while(true){
        // use the breakpoints to pause the execution ...
        num = rand_dec();
        cout << "Random Decimal Number -> " << num << endl;
        Decimal x(num);
        cout << op.decimal_to_binary(x)<< endl;
        cout << op.decimal_to_octal(x) << endl;
        cout << op.decimal_to_hexadecimal(x) << endl;
        cout << "---------------------------" << endl;
        cout << op.decimal_to_binary(Decimal(op.binary_to_decimal(Binary(op.decimal_to_binary(x))))) << " This should = "
             << op.decimal_to_binary(x) << endl;
        cout << op.decimal_to_octal(Decimal(op.octal_to_decimal(Octal(op.decimal_to_octal(x))))) << " This should = "
             << op.decimal_to_octal(x) << endl;
        cout << op.decimal_to_hexadecimal(Decimal(op.hexadecimal_to_decimal(Hexadecimal(op.decimal_to_hexadecimal(x))))) << " This should = "
             << op.decimal_to_hexadecimal(x) << endl;
    }
}


void test_hexadecimal(){
    char digits[] = {'0', '1', '2', '3',
                     '4', '5', '6', '7',
                     '8', '9', 'A', 'B',
                     'C', 'D', 'E', 'F'};
    auto rand_hexa = [digits]() -> auto{
        string ret;
        int range = rand()%10, idx;
        while(range--) {
            idx = rand() % 16;
            ret += digits[idx];
        }
        return ret;
    };
    string num;
    Number_Operations op;
    while(true){
        // use the breakpoints to pause the execution ...
        num = rand_hexa();
        cout << "Random Hexadecimal Number -> " << num << endl;
        Hexadecimal x(num);
        cout << op.hexadecimal_to_binary(x)<< endl;
        cout << op.hexadecimal_to_octal(x) << endl;
        cout << op.hexadecimal_to_decimal(x) << endl;
        cout << "---------------------------" << endl;
        cout << op.hexadecimal_to_binary(Hexadecimal(op.binary_to_hexadecimal(Binary(op.hexadecimal_to_binary(x))))) << " This should = "
             << op.hexadecimal_to_binary(x) << endl;
        cout << op.hexadecimal_to_octal(Hexadecimal(op.octal_to_hexadecimal(Octal(op.hexadecimal_to_octal(x))))) << " This should = "
             << op.hexadecimal_to_octal(x) << endl;
        cout << op.hexadecimal_to_decimal(Hexadecimal(op.decimal_to_hexadecimal(Decimal(op.hexadecimal_to_decimal(x))))) << " This should = "
             << op.hexadecimal_to_decimal(x) << endl;
    }
}

void test_octal(){

    auto rand_oct = []() -> auto{
        string ret;
        int range = rand()%10;
        while(range--) {
            ret += ((char)(rand() % 8) +'0');
        }
        return ret;
    };
    string num;
    Number_Operations op;
    while(true){
        // use the breakpoints to pause the execution ...
        num = rand_oct();
        cout << "Random Octal Number -> " << num << endl;
        Octal x(num);
        cout << op.octal_to_hexadecimal(x)<< endl;
        cout << op.octal_to_binary(x) << endl;
        cout << op.octal_to_decimal(x) << endl;
        cout << "---------------------------" << endl;
        cout << op.octal_to_binary(Octal(op.binary_to_octal(Binary(op.octal_to_binary(x))))) << " This should = "
             << op.octal_to_binary(x) << endl;
        cout << op.octal_to_hexadecimal(Octal(op.hexadecimal_to_octal(Hexadecimal(op.octal_to_hexadecimal(x))))) << " This should = "
             << op.octal_to_hexadecimal(x) << endl;
        cout << op.octal_to_decimal(Octal(op.decimal_to_octal(Decimal(op.octal_to_decimal(x))))) << " This should = "
             << op.octal_to_decimal(x) << endl;
    }
}
