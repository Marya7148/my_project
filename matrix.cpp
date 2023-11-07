#include <iostream>
#include "matrix.h"

using namespace std;

int loc_var = 11;

Matrix::Matrix (int size) {
    this->size = size;

    this->values = new double[size, size];

    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            this->values[i,j] = 0;
        }
        this->values[i,i] = 1;
    }

    cout << loc_var;

    cout << " Matrix initialisation: size = " << this->size << endl;
}

Matrix::~Matrix () {
    delete[] this->values;
}

int Matrix::get_size() {
    return size;
}

void Matrix::get_values() {
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            cout << this->values[i,j] << " ";
        }
        cout << endl;
    }

}
