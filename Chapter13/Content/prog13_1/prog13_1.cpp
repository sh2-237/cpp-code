#include <iostream>
#include <cstdlib>
using namespace std;

// �غc�����ϥ� -- �N�غc���w�q�b���O��
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
        cout << "CWin �غc���Q�I�s�F" << endl;
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
    CWin win2('B', 60, 50);

    win1.show_member();
    win2.show_member();

    return 0;
}