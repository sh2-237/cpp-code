#include <iostream>
using namespace std;

// �غc���޼ƪ���l��

class CWin
{

private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'D', int w = 100, int h = 100)
    { // �o�ˡA��ڭ̥u���@�Ӥ޼ƮɡA��L�޼ƴN�|�۰ʪ�l�Ʀ��غc���޼ƦY��l��
        id = i;
        width = w;
        height = h;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{
    CWin win1('A');
    CWin win2('B', 50, 60);

    win1.show_member();
    win2.show_member();
    return 0;
}