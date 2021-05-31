#include "Numbers.h"
#include <algorithm>

class Number_Operations{
    int pow(int base, int power){
        int return_val=1;
        for(int i=0;i<power;i++)
            return_val*= base;
        return return_val;
    }
public:
    // Binary >> all --Begin
    int binary_to_decimal(Binary number){
        int return_val = 0;
        for(int i=0;i<number.size();i++){
            if(number[i]=='1')
                return_val += pow(2, i);
        }
        return return_val;
    }

    string binary_to_octal(Binary number){
        string return_val, tmp_str;

        for(int i=0;i<number.size();i++){
            tmp_str+=number[i];
            if(tmp_str.size()==3) {
                return_val += ((char)binary_to_decimal(Binary(tmp_str)) + '0');
                tmp_str.clear();
            }
        }

        if(!tmp_str.empty())
            return_val += ((char)binary_to_decimal(Binary(tmp_str)) + '0');


        return string(return_val.rbegin(), return_val.rend());
    }

    // Binary >> all --End
    string decimal_to_binary(Decimal number){
        string return_val;
        while(number.get()!=0){
            return_val += (char)((number.get()%2)+'0');
            number.set(number.get()/2);
        }
        return return_val;
    }


};