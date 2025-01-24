#include <iostream>
using namespace std;
// + 多載
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i = 'C', int w = 10, int h = 10) : id(i), width(w), height(h)
    {
    }
    CWin operator+(CWin &win)
    {
        int w, h;
        w = this->width > win.width ? this->width : win.width;
        h = this->height > win.height ? this->height : win.height;
        return CWin('C', w, h); // 調用建構元
    }
    int area()
    {
        return width * height;
    }

    void show_member()
    {
        cout << "Window " << id << ": width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 50, 60);
    CWin win2('B', 50, 70);
    CWin win3;

    win3 = win1 + win2;
    win3.show_member();
    return 0;
}