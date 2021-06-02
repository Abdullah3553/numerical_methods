// this is not a source file to include ...

// this is a file to store the testing functions until needed ...

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
        cout << op.binary_to_decimal(op.decimal_to_binary(op.binary_to_decimal(x))) << " This should = "
             << op.binary_to_decimal(x) << endl;
        cout << op.binary_to_octal(op.octal_to_binary(op.binary_to_octal(x))) << " This should = "
             << op.binary_to_octal(x) << endl;
        cout << op.binary_to_hexadecimal(op.hexadecimal_to_binary(op.binary_to_hexadecimal(x))) << " This should = "
             << op.binary_to_hexadecimal(x) << endl;
    }
}