#include <iostream>
using namespace std;

class base {
public:
    virtual void show() {
        cout << "\n  Base class show:";
    }

    void display() {
        cout << "\n  Base class display:";
    }
};

class derived : public base {
public:

    void display() {
        cout << "\n  Derived class display:";
    }

    void show() {
        cout << "\n  Derived class show:";
    }
};

int main() {
    base obj1;
    base *p;
    cout << "\n\t P points to base:\n";

    p = &obj1;
    p->display();
    p->show();

    cout << "\n\n\t P points to derived:\n";
    derived obj2;
    p = &obj2;
    p->display();
    p->show();
}
