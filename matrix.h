#ifndef MOD_H
#define MOD_H

class Matrix {
public:
    Matrix(int x);
    ~Matrix();
    int get_size();
    void get_values();

protected:
    int size;
    double* values;

private:
    int test;
};

#endif
