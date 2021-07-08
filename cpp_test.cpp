#include <iostream>

using namespace std;

void testReference(int &a)
{
    a = 1;
}

void testReferenceInCStyle(int * a){
    *a = 2;
}

int main()
{
    int b = 3;
    testReference(b);
    // testReferenceInCStyle(&b);

    cout << b << endl;

    return 0;
}