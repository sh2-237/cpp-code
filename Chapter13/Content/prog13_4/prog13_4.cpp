#include <iostream>
using namespace std;

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
    }
    CWin(int w, int h)
    {
        id = 'Z';
        width = w;
        height = h;
    }
    CWin(char i)
    {
        id = i;
    }
    // 如果自己定義了建構元，可能會導致沒有賦值的物件會報錯
    // 因此如果自己定義建構元，最好自己還是定義一個無參的建構元 (預設建構元)
    CWin()
    {
        id = 'D';
        width = 100;
        height = 100;
        cout << "預設建構元被呼叫了!!" << endl;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{

    CWin win1('A', 40, 50);
    CWin win2(80, 120);
    CWin win3; // 沒有初始化就會自動調用預設建構元，不能寫成win3();

    win1.show_member();
    win2.show_member();
    win3.show_member();

    return 0;
}