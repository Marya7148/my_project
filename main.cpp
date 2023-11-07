#include <iostream>
#include <stdio.h>
#include "matrix.h"

using namespace std;

int main () {
    Matrix a(5);
    cout << a.get_size() << endl;
    a.get_values();
    return 0;
}
