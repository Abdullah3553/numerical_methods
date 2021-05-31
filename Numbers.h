#include<string>

using namespace std;


class str_num{
protected :
    string number;
public:
    str_num(){}
    str_num(string &value){
        number = value;
    }
    void set(string value){
        number = value;
    }
    string get() {
        return number;
    }
    unsigned int size(){
        return number.size();
    }
    char operator [](int index){
        return number[index];
    }
};

class Decimal {
    int number;
public:
    Decimal(){number = 0;}

    Decimal(int value){
        number = value;
    }

    void set(int value){
        number = value ;
    }
    int get(){
        return number;
    }

};

class Binary : public str_num{
public:
    Binary(){
        number="00000000";
    }
    Binary(string value) : str_num(value){}

};

class Octal : public str_num{
public:
    Octal(){
        number="000";
    }
    Octal(string value): str_num(value){}
};

class Hexadecimal : public str_num{
public:
    Hexadecimal(){
        number="00";
    }
    Hexadecimal(string value): str_num(value){}

};