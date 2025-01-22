#include <iostream>
using namespace std;
class CTemp
{
public:
    void CtoF(double c)
    {
        double f = c / 0.37;
        cout << "After traslating : " << f << endl;
    }
};
int main()
{
    CTemp ct;
    ct.CtoF(37.2);
    return 0;
}