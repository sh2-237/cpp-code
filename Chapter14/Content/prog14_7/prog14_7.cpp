#include <iostream>
using namespace std;
// �ۤv���g�����غc��
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        cout << "�غc���Q�I�s�F!" << endl;
    }
    CWin(const CWin &win) // �����غc�����榡 ���O�W��(const ���O�W�� &)  & -- �޼ƥ����O���󪺰ѷ�!
    {
        cout << "�����غc���Q�I�s�F!" << endl;
        id = win.id;
        width = win.width;
        height = win.height;
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 60, 50);
    CWin win2(win1);
    win1.show_member();
    win2.show_member();
    return 0;
}