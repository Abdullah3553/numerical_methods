#include<string>

using namespace std;


class Decimal{
    int number;

public:
    Decimal(){number = 0;}

    Decimal(int value){
        number = value;
    }

    void set(double value){
        number = value ;
    }
    int get(){
        return number;
    }
};

class Binary{
    string number;

public:
    Binary(){
        number="00000000";
    }
    Binary(string value){
        number = value;
    }
    void set(string value){
        number = value;
    }
    string get(){
        return number;
    }
    unsigned int size(){
        return number.size();
    }
    char operator [](int index){
        return number[index];
    }
};

class Octal{
    string number;

public:
    Octal(){
        number="000";
    }
    Octal(string value){
        number = value;
    }
    void set(string value){
        number = value;
    }
    string get(){
        return number;
    }
    unsigned int size(){
        return number.size();
    }
};

class Hexadecimal{
    string number;

public:
    Hexadecimal(){
        number="00";
    }
    Hexadecimal(string value){
        number = value;
    }
    void set(string value){
        number = value;
    }
    string get(){
        return number;
    }
    unsigned int size(){
        return number.size();
    }
};