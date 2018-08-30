#include <iostream>
#include "resource.h"
#include <memory>
using namespace std;

/**
 * A robust class using shared pointer instead of following the "Rule of Three"
 * 
 * No need for checks for copy, assignment and re-assignment for the
 * dynamic resources. 
 * To verify with valgrind: 
 * valgrind --tool=memcheck --leak-check=full ./a.out
 */
class Owner
{
    string name;
    shared_ptr<Resource> resource;

  public:
    Owner()
    {
        cout << "Creating owner!" << endl;
        name = "";
    }

    void setName(const string pName)
    {
        name = pName;
    }

    string getName() const { return name; }
    void addResource()
    {
        //delete **only** current object's resource and set it to nullptr.
        resource.reset();

        //add new shared resource. In case of copy/assignment, forks from the original object.
        resource = make_shared<Resource>(name);
    }

    const shared_ptr<Resource>& getResource() const { return resource; }
};
