#include <iostream>
using namespace std;
// �R�A�������
class CWin
{
private:
    char id;
    int width;
    int height;
    static int num;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        num++;
    }
    CWin()
    {
        num++;
    }
    static void count()
    {
        cout << "�w�إ�" << num << "�Ӫ���" << endl;
    }
};
int CWin::num = 0;
int main()
{
    CWin::count();
    CWin win[5];
    CWin::count();
    return 0;
}