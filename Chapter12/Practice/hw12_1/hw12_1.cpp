#include <iostream>
using namespace std;
class Caaa
{
public:
    int a;
    int b;
    int c;

    void add()
    {
        cout << a + b << endl;
    }
    void show_data()
    {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};
int main()
{

    Caaa obj;

    obj.a = 1;
    obj.b = 3;
    obj.c = 5;

    obj.add();
    obj.show_data();
    return 0;
}