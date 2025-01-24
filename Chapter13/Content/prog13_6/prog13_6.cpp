#include <iostream>
using namespace std;
// 第二種方式 在建構元裡初始化的技巧

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'A', int w = 100, int h = 100) : id(i), width(w), height(h) // 直接在建構元中初始化，就可以省去多寫預設建構元，這也叫初始化串列
    {
        cout << "成員已被初始化" << endl;
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