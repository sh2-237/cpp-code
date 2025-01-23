#include <iostream>
using namespace std;

class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }
    CWin(int w, int h)
    {
        id = 'Z';
        width = w;
        height = h;
    }
    CWin(char i)
    {
        id = i;
    }
    // �p�G�ۤv�w�q�F�غc���A�i��|�ɭP�S����Ȫ�����|����
    // �]���p�G�ۤv�w�q�غc���A�̦n�ۤv�٬O�w�q�@�ӵL�Ѫ��غc�� (�w�]�غc��)
    CWin()
    {
        id = 'D';
        width = 100;
        height = 100;
        cout << "�w�]�غc���Q�I�s�F!!" << endl;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{

    CWin win1('A', 40, 50);
    CWin win2(80, 120);
    CWin win3; // �S����l�ƴN�|�۰ʽեιw�]�غc���A����g��win3();

    win1.show_member();
    win2.show_member();
    win3.show_member();

    return 0;
}