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
    Caaa ca;

    cout << sizeof(ca) << endl;
    return 0;
}