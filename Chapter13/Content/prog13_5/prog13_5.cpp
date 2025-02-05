#include <iostream>
using namespace std;

// 建構元引數的初始值

class CWin
{

private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'D', int w = 100, int h = 100)
    { // 這樣，當我們只給一個引數時，其他引數就會自動初始化成建構元引數吃初始值
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