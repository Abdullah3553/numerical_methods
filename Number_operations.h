#include "Numbers.h"


class Number_Operations{
    int pow(int base, int power){
        int return_val=1;
        for(int i=0;i<power;i++)
            return_val*= base;
        return return_val;
    }
public:
    int binary_to_decimal(Binary &number){
        int return_val = 0;
        for(int i=0;i<number.size();i++){
            if(number[i]=='1')
                return_val += pow(2, i);
        }
        return return_val;
    }

    string decimal_to_binary(Decimal number){
        string return_val;
        while(number.get()!=0){
            return_val += (char)((number.get()%2)+'0');
            number.set(number.get()/2);
        }
        return return_val;
    }


};