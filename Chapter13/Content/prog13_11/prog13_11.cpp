#include <iostream>
using namespace std;
class CWin
{
private:
    char id;
    int width;
    int hegiht;

public:
    static int num; // �N�R�A��Ʀ����ŧi��public
    CWin(char i, int w, int h) : id(i), width(w), hegiht(h)
    {
        num++;
    }
    CWin()
    {
        num++;
    }
};
int CWin::num = 0;
int main()
{
    CWin win1('A', 50, 40);
    CWin win2('B', 60, 70);
    cout << "�w�إ�" << CWin::num << "�Ӫ���F" << endl;
    CWin my_win[4];
    cout << "�w�إ�" << CWin::num << "�Ӫ���F" << endl;
    return 0;
}