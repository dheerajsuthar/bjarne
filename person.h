#include <iostream>
using std::string;

class Person
{
    string name;

  public:
    string getName() const
    {
        return name;
    }
    void setName(string name)
    {
        name = name;
    }
};
