#include <iostream>
#include "resource.h"
using namespace std;

/**
 * A robust class following the "Rule of Three"
 * 
 * Does all the necessary checks for copy, assignment and re-assignment for the
 * dynamic resources. 
 * To verify with valgrind: 
 * valgrind --tool=memcheck --leak-check=full ./a.out
 */
class Owner
{
    string name;
    Resource *resource;

  public:
    Owner()
    {
        cout << "Creating owner!" << endl;
        name = "";
        resource = nullptr;
    }

    //for fixing double deletion of resource copy
    Owner(const Owner &owner) : name(owner.name)
    {
        cout << "Creating owner!" << endl;
        if (owner.getResource())
        {
            this->resource = new Resource(owner.name);
        }
        else
        {
            this->resource = nullptr;
        }
    }

    void setName(const string pName)
    {
        name = pName;
    }

    string getName() const { return name; }
    void addResource()
    {
        //fix for readdition of resouce
        delete resource;

        resource = new Resource(name);
    }

    Resource *getResource() const { return resource; }
    ~Owner()
    {
        cout << "Destroying owner!" << endl;
        delete resource;
    }

    // fix for assignment operator
    void  operator=(const Owner &owner)
    {
        //deleting existing resource on self
        delete resource;
        this->name = owner.getName();
        if (owner.getResource())
        {
            this->resource = new Resource(owner.getName());
        }
        else
        {
            this->resource = nullptr;
        }
    }
};
