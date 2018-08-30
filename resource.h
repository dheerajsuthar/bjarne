#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Resource
{
    string name;

  public:
    Resource(string pName)
    {
        cout << "Creating resource!" << endl;
        name = pName;
    }
    string getMessage()
    {
        return "Hello " + name + ". Welcome to the Matrix!";
    }
    ~Resource()
    {
        cout << "Destroying resource!" << endl;
    }
};
