#include <iostream>
using namespace std;

void update(int **p2){

    // NOTE:
    // p2 is passed by value.
    // A COPY of p2 is created.

    // -------------------------------------------------

    // p2 = p2 + 1;
    // ❌ Changes only the local copy.
    // NO change in main().

    // -------------------------------------------------

    // *p2 = *p2 + 1;
    // ✅ Changes p1 (because *p2 == p1).
    // Change is visible in main().

    // -------------------------------------------------

    **p2 = **p2 + 1;
    // ✅ Changes i (because **p2 == i).
    // Change is visible in main().
}

int main(){

    int i = 555;

    int *p1 = &i;

    int **p2 = &p1;

    cout << "Before" << endl;
    cout << "i  = " << i << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;

    update(p2);

    cout << "\nAfter" << endl;
    cout << "i  = " << i << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
}