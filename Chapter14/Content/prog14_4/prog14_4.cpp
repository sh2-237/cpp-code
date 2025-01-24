#include <iostream>
#include <cstring>

using namespace std;

class CWin
{
private:
    char id, *title;

public:
    CWin(char i = 'D', const char *text = "Default window") : id(i)
    {
        title = new char[strlen(text) + 1];
        strcpy(title, text);
    }
    ~CWin()
    {
        cout << "解構元被呼叫了~" << endl;
        delete[] title; // 釋放寫在解構元中
    }
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
};
// 使用動態記憶體配置來建立物件
int main()
{
    CWin win1('A', "Main Window");
    CWin *ptr;
    ptr = new CWin('B');
    win1.show();
    ptr->show();

    delete ptr; // 如果沒有釋放ptr 解構元不會自動被調用!
    return 0;
}