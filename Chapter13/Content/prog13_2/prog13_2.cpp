#include <iostream>
using namespace std;
// 建構元的使用 -- 將建構元定義在類別外

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    CWin(char, int, int); // 宣告在類別中

    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

// 定義在類別外的話需要使用 範疇解析運算子 來表示CWin()建構元是屬於CWin類別的
CWin::CWin(char i, int w, int h)
{
    id = i;
    width = w;
    height = h;
}
int main()
{

    CWin win1('A', 50, 60);
    CWin win2('B', 60, 70);

    win1.show_member();
    win2.show_member();
    return 0;
}