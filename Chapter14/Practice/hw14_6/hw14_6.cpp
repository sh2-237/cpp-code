#include <iostream>
using namespace std;
class Caaa
{
public:
    Caaa()
    {
        cout << "Constructor called" << endl;
    }
    ~Caaa()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{

    Caaa *obj_p;
    obj_p = new Caaa();

    delete obj_p;
    return 0;
}