#include <iostream>
using namespace std;
// �غc���h��

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
        cout << "CWin(char i, int w, int h) �غc���Q�I�s�F!" << endl;
    }
    CWin(char i)
    {
        id = i;
        cout << "CWin(char i) �غc���Q�I�s�F!" << endl;
    }
    CWin(int w, int h)
    {
        id = 'Z';
        width = w;
        height = h;
        cout << "CWin(int w, int h) �غc���Q�I�s�F!" << endl;
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{
    CWin win1('A', 50, 60);
    CWin win2(50, 60);

    win1.show_member();
    win2.show_member();
    return 0;
}