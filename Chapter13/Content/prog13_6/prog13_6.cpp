#include <iostream>
using namespace std;
// �ĤG�ؤ覡 �b�غc���̪�l�ƪ��ޥ�

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'A', int w = 100, int h = 100) : id(i), width(w), height(h) // �����b�غc������l�ơA�N�i�H�٥h�h�g�w�]�غc���A�o�]�s��l�Ʀ�C
    {
        cout << "�����w�Q��l��" << endl;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 80);
    CWin win2;

    win1.show_member();
    win2.show_member();
    return 0;
}