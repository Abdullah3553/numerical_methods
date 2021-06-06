
#include "Number_operations.h"
#include <iostream>

using namespace std;

class curve_fitting{
protected:
    const int max_table_size=100;
    int table_size;
    double table[2][table_size], searing_val;
public:
    curve_fitting(){
        cout << "How many x's do you want ? (Maximum is " << max_table_size << ") ";
        cin >> table_size;
        cout << "Enter x's : \n";
        for(int i=0;i<table_size;i++)
            cin >> table[0][i];

        cout << "Enter f(x) : \n";
        for(int i=0;i<table_size;i++)
            cin >> table[1][i];

        cout << "Enter the value you want to check : ";
        cin >> searing_val;

    }
    double apply_method(){
        double x_sum=0, y_sum=0, xMuly_sum=0, xMulx_sum,=0;
        for(int i=0;i<table_size;i++){
            x_sum += table[0][i];
            y_sum += table[1][i];
            xMulx_sum += (x*x);
            xMuly_sum += (x*y);
        }

    };
};

class interpolation : public curve_fitting{

public:
    interpolation() : curve_fitting(){}
    double apply_method(){
        // this is the interpolation version
    }

};