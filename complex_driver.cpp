#include "complex.h"
#include "collection.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Complex a(5.5,6.5), b(3.3, 5.4);
    Collection<Complex> coll;
    coll.add(a);
    cout << coll.remove() << endl;
    /* code */
    return 0;
}

