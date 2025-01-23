#include <iostream>
#include <cstdlib>
using namespace std;

// 建構元的使用 -- 將建構元定義在類別中
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
        cout << "CWin 建構元被呼叫了" << endl;
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