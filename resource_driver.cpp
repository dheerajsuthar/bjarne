#include "owner.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Owner owner1;
    Owner owner3;
    owner3.setName("userC");
    owner3.addResource();
    owner1.setName("userA");
    owner1.addResource();
    Owner owner2 = owner1;
    cout << (owner1.getResource())->getMessage() << endl;
    owner1.setName("userB");
    //replace resource
    owner1.addResource();
    owner3 = owner1;
    return 0;
}
