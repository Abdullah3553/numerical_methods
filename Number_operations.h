#include "Numbers.h"
#include <map>
class Number_Operations{
    static const int encoding_size = 16;

    int pow(int base, int power){
        int return_num=1;
        for(int i=0;i<power;i++)
            return_num*= base;
        return return_num;
    }

//    int decoding(char encoded_character){
//        int return_num=0;
//        for(int i=0;i<encoding_size;i++){
//            if(encoding[i]==encoded_character){
//                return_num=i;
//                break;
//            }
//        }
//        return return_num;
//    }

    char encoding[encoding_size]={'0', '1', '2', '3', '4', '5',
                          '6', '7', '8', '9', 'A', 'B',
                          'C', 'D', 'E', 'F'};
    map<char, int> decoding = {
            {'0', 0},{'1', 1},{'2', 2},{'3', 3},
            {'4', 4},{'5', 5}, {'6', 6},{'7', 7},
            {'8', 8},{'9', 9},{'A', 10},{'B', 11},
            {'C', 12},{'D', 13},{'E', 14},{'F', 15}
    };
public:
    // Binary >> all --Begin

    int binary_to_decimal(Binary number){
        int return_num = 0;
        for(int i=number.size()-1, j=0;i>-1;i--,j++){
            if(number[i]=='1')
                return_num += pow(2, j);
        }
        return return_num;
    }

    string binary_to_octal(Binary number){
        string return_val, tmp_str;

        for(int i=0;i<number.size();i++){
            tmp_str+=number[i];
            if(tmp_str.size()==3) {
                return_val += encoding[binary_to_decimal(Binary(tmp_str))];
                tmp_str.clear();
            }
        }

        if(!tmp_str.empty())
            return_val += encoding[binary_to_decimal(Binary(tmp_str))];


        return string(return_val.rbegin(), return_val.rend());
    }

    string binary_to_hexadecimal(Binary number){
        string return_val, tmp_str;
        for(int i=0;i<number.size();i++){
            tmp_str+=number[i];
            if(tmp_str.size()==4) {
                return_val += encoding[binary_to_decimal(Binary(tmp_str))];
                tmp_str.clear();
            }
        }

        if(!tmp_str.empty())
            return_val += encoding[binary_to_decimal(Binary(tmp_str))];


        return string(return_val.rbegin(), return_val.rend());
    }

    // Binary >> all --End
//------------------------------//
    // Decimal >> all --Begin

    string decimal_to_binary(Decimal number){
        string return_val;
        while(number.get()!=0){
            return_val += (char)((number.get()%2)+'0');
            number.set(number.get()/2);
        }
        return string(return_val.rbegin(), return_val.rend());
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

    string octal_to_binary(Octal number){
        return decimal_to_binary(octal_to_decimal(number));
    }

    int octal_to_decimal(Octal number){
        int return_num=0;
        for(int i=number.size()-1, j=0;i>-1;i--,j++){
            return_num+=(pow(8, j) * decoding[number[i]]);
        }
        return return_num;
    }

    string octal_to_hexadecimal(Octal number){
        return binary_to_hexadecimal(octal_to_binary(number));
    }

    // Octal >> all --End
//------------------------------//


};