#include "Numbers.h"
#include <unordered_map>
class Number_Operations{
    char encoding[16]={'0', '1', '2', '3',
                       '4', '5', '6', '7',
                       '8', '9', 'A', 'B',
                       'C', 'D', 'E', 'F'};
    unordered_map<char, int> decoding = {
            {'0', 0},{'1', 1},{'2', 2},{'3', 3},
            {'4', 4},{'5', 5}, {'6', 6},{'7', 7},
            {'8', 8},{'9', 9},{'A', 10},{'B', 11},
            {'C', 12},{'D', 13},{'E', 14},{'F', 15}
    };
    int pow(int base, int power){
        int return_num=1;
        for(int i=0;i<power;i++)
            return_num*= base;
        return return_num;
    }

    void reverse_string(string &str){
        str=string(str.rbegin(), str.rend());
    }

public:
    // Binary >> all --Begin

    int binary_to_decimal(Binary number){
        int return_num = 0;
        for(int i=(int)number.size()-1, j=0;i>-1;i--,j++){
            if(number[i]=='1')
                return_num += pow(2, j);
        }
        return return_num;
    }

    string binary_to_octal(Binary number){
        string return_val, tmp_str;
        for(int i=(int)number.size()-1;i>-1;i--){
            tmp_str+=number[i];
            if(tmp_str.size()==3) {
                reverse_string(tmp_str);
                return_val += encoding[binary_to_decimal(Binary(tmp_str))];
                tmp_str.clear();
            }
        }
        if(!tmp_str.empty())
            return_val += encoding[binary_to_decimal(Binary(tmp_str))];
        reverse_string(return_val);
        return return_val;
    }

    string binary_to_hexadecimal(Binary number){
        string return_val, tmp_str;
        for(int i=(int)number.size()-1;i>-1;i--){
            tmp_str+=number[i];
            if(tmp_str.size()==4) {
                reverse_string(tmp_str);
                return_val += encoding[binary_to_decimal(Binary(tmp_str))];
                tmp_str.clear();
            }
        }
        if(!tmp_str.empty())
            return_val += encoding[binary_to_decimal(Binary(tmp_str))];
        reverse_string(return_val);
        return return_val;
    }

    // Binary >> all --End
//------------------------------//
    // Decimal >> all --Begin

    string decimal_to_binary(Decimal number){
        string return_val;
        while(number.get()!=0){
            return_val += encoding[number.get()%2];
            number.set(number.get()/2);
        }
        reverse_string(return_val);
        return return_val;
    }

    string decimal_to_octal(Decimal number){
        return binary_to_octal(decimal_to_binary(number));
    }

    string decimal_to_hexadecimal(Decimal number){
        return binary_to_hexadecimal(decimal_to_binary(number));
    }
    // Decimal >> all --End
//------------------------------//
    // Octal >> all --Begin

    int octal_to_decimal(Octal number){
        int return_num=0;
        for(int i=(int)number.size()-1, j=0;i>-1;i--,j++){
            return_num+=(pow(8, j) * decoding[number[i]]);
        }
        return return_num;
    }

    string octal_to_binary(Octal number){
        return decimal_to_binary(octal_to_decimal(number));
    }

    string octal_to_hexadecimal(Octal number){
        return binary_to_hexadecimal(octal_to_binary(number));
    }

    // Octal >> all --End
//------------------------------//
    // Hexadecimal >> all --Begin

    int hexadecimal_to_decimal(Hexadecimal number){
        int return_num=0;
        for(int i=(int)number.size()-1, j=0;i>-1;i--,j++){
            return_num += ( pow(16, j) * decoding[number[i]] );
        }
        return return_num;
    }

    string hexadecimal_to_binary(Hexadecimal number){
        return decimal_to_binary(hexadecimal_to_decimal(number));
    }

    string hexadecimal_to_octal(Hexadecimal number){
        return binary_to_octal(hexadecimal_to_binary(number));
    }

    // Hexadecimal >> all --End

};