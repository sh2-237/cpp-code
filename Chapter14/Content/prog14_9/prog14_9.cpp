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
        cout << "建構元被呼叫了!" << endl;
        title = new char[strlen((text) + 1)];
        strcpy(title, text);
    }

    CWin(const CWin &win)
    {
        cout << "拷貝建構元被呼叫了!" << endl;
        id = win.id;
        // 在拷貝函數中也使用動態記憶體配置 可以避免指向win1的物件刪除後，win2的title也跟著刪除的問題
        // 如果要使用動態記憶體配置，就盡量自己撰寫拷貝建構元

        title = new char[strlen(win.title) + 1];
        strcpy(title, win.title);
    }
    ~CWin()
    {
        delete[] title;
    }
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
};
int main()
{
    CWin *ptr1 = new CWin('A', "Main Window");
    CWin *ptr2 = new CWin(*ptr1);

    ptr1->show();
    ptr2->show();

    delete ptr1;
    cout << "將ptr1所指向的物件刪除後" << endl;
    ptr2->show();
    delete ptr2;
    return 0;
}