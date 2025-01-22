#include <iostream>
using namespace std;
class Calculator
{
public:
    int num1;
    int num2;

    void add(int a, int b)
    {
        num1 = a;
        num2 = b;
        cout << num1 + num2 << endl;
    }
    void sub(int a, int b)
    {
        num1 = a;
        num2 = b;
        cout << num1 - num2 << endl;
    }
    void mul(int a, int b)
    {
        num1 = a;
        num2 = b;
        cout << num1 * num2 << endl;
    }
    void div(int a, int b)
    {
        num1 = a;
        num2 = b;
        cout << num1 / num2 << endl;
    }
};
int main()
{
    Calculator cal;
    cal.add(5, 4);
    cal.sub(5, 4);
    cal.mul(5, 4);
    cal.div(5, 4);
    return 0;
}