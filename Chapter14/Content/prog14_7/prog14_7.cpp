#include <iostream>
using namespace std;
// 自己撰寫拷貝建構元
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        cout << "建構元被呼叫了!" << endl;
    }
    CWin(const CWin &win) // 拷貝建構元的格式 類別名稱(const 類別名稱 &)  & -- 引數必須是物件的參照!
    {
        cout << "拷貝建構元被呼叫了!" << endl;
        id = win.id;
        width = win.width;
        height = win.height;
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 60, 50);
    CWin win2(win1);
    win1.show_member();
    win2.show_member();
    return 0;
}