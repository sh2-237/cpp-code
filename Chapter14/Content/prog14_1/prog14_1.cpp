#include <iostream>
using namespace std;
// �Ѻc��
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
    ~CWin()
    { // �Ѻc�����ǤJ����Ѽ�
        cout << "�غc���Q�I�s�F! Win " << this->id << "�Q�P���F!" << endl;
        system("pause");
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 50, 40);
    CWin win2('B', 40, 50);
    CWin win3('C', 50, 60);
    CWin win4('D', 50, 70);

    win1.show_member();
    win2.show_member();
    return 0;
}