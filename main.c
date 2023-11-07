#include <iostream>
#include <stdio.h>

using namespace std;

struct mystruct {
    int i;
    double d;
};

class myclass {
    int *p;
public:
    myclass(int);
    ~myclass();

    int getval() { return *p; };
};

myclass::myclass(int i) {
    p = new int;
    if (!p) exit(1);
    *p = i;
};


myclass::~myclass() { delete p; }

void display (myclass &obj) { cout << obj.getval() << endl; }

int main() {
   // mystruct s;
   // s.i = 1;
   // s = {.d = 0.5};
   // // s = 0 0.5
   // cout << "s = " << s.i << " " << s.d << endl;

   myclass a(10);
   display(a);
   return 0;
}
