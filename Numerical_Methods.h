
#include "Number_operations.h"
#include <iostream>

using namespace std;

class curve_fitting{
protected:
    const int table_size=100;
    double table[2][table_size], searing_val;
public:
    curve_fitting(){
        int inner_size=0;
        cout << "How many x's do you want ? (Maximum is " << table_size << ") ";
        cin >> inner_size;
        cout << "Enter x's : \n";
        for(int i=0;i<inner_size;i++)
            cin >> table_size[0][i];

        cout << "Enter f(x) : \n";
        for(int i=0;i<inner_size;i++)
            cin >> table_size[1][i];

        cout << "Enter the value you want to check : ";
        cin >> searing_val;

    }
    double apply_method(){
        // the actual function
    };
};

class interpolation : public curve_fitting{

public:
    interpolation() : curve_fitting(){}
    double apply_method(){
        // this is the interpolation version
    }

};