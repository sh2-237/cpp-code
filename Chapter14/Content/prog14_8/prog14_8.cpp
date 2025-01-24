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
        title = win.title;
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