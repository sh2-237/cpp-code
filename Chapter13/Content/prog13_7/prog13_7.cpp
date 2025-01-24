#include <iostream>
#include <cstdlib>

using namespace std;
// 傳遞物件到函數中
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
    }
    void compare(CWin win)
    {
        if (this->area() > win.area())
        {
            cout << "Window" << this->id << " is larger " << endl; // this代表的是呼叫compare這個函數的物件
        }
        else
        {
            cout << "Window" << win.id << " is larger " << endl;
        }
    }

    int area()
    {
        return width * height;
    }
};

int main()
{
    CWin win1('A', 70, 80);
    CWin win2('B', 60, 90);

    win1.compare(win2);

    return 0;
}