#include <iostream>
using namespace std;
// �غc�����ϥ� -- �N�غc���w�q�b���O�~

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char, int, int); // �ŧi�b���O��

    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

// �w�q�b���O�~���ܻݭn�ϥ� �då�ѪR�B��l �Ӫ��CWin()�غc���O�ݩ�CWin���O��
CWin::CWin(char i, int w, int h)
{
    id = i;
    width = w;
    height = h;
}
int main()
{

    CWin win1('A', 50, 60);
    CWin win2('B', 60, 70);

    win1.show_member();
    win2.show_member();
    return 0;
}