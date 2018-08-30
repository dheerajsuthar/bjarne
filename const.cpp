#include "person.h"
#include <iostream>
using namespace std;
void playName(const Person &p)
{
     cout << p.getName() << endl;
}

main(int argc, char const *argv[])
{
    Person p;
    p.setName("Dheeraj");
    playName(p);
    return 0;
}
