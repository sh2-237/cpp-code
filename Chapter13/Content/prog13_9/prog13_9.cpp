#include <iostream>
#include <cstdlib>
using namespace std;
// �إߪ���}�C

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'D', int w = 100, int h = 100) : id(i), width(w), height(h)
    {
        cout << "�غc���Q�I�s�F!" << endl;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{
    CWin win1('A', 50, 60);
    CWin my_win[3];

    win1.show_member();
    my_win[2].show_member();

    return 0;
}