#include <iostream>
#include "Numbers.h"

using namespace std;

int main(){
    Decimal num;

    num.set(10);

    cout << num.get() << endl;
    return 0;
}
