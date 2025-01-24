#include <iostream>
using namespace std;

class Caaa
{
private:
    int m, n;

public:
    Caaa(int m1, int n1) : m(m1), n(n1)
    {
    }
    Caaa(const Caaa &obj)
    {
        this->m = obj.m;
        this->n = obj.n;
        cout << "拷貝建構元被呼叫了!" << endl;
    }
    void show()
    {
        cout << "m = " << m << ", n = " << n << endl;
    }
};

int main()
{
    Caaa obj1(10, 20);
    Caaa obj2(obj1);

    obj1.show();
    obj2.show();
    return 0;
}