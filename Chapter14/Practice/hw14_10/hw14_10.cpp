#include <iostream>
using namespace std;
class Caaa
{
private:
    int total;
    int *ptr;

public:
    Caaa(int num) : total(num)
    {
        ptr = new int[total];
        for (int i = 0; i < total; i++)
        {
            ptr[i] = 0;
        }
        cout << "Caaa�غc���w�g��l��" << endl;
    }
    Caaa(const Caaa &obj)
    {
        this->total = obj.total;
        this->ptr = obj.ptr;
    }
    ~Caaa()
    {
        cout << "�Ѻc���Q�I�s!" << endl;
        delete[] ptr;
    }
    void show()
    {
        cout << total << endl;
        for (int i = 0; i < total; i++)
        {
            cout << *(ptr + i) << endl;
        }
    }
};
int main()
{
    Caaa obj1(5);
    Caaa obj2(obj1);

    obj1.show();
    obj2.show();
    return 0;
}