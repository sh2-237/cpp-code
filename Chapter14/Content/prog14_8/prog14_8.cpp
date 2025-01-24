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
        cout << "�غc���Q�I�s�F!" << endl;
        title = new char[strlen((text) + 1)];
        strcpy(title, text);
    }

    CWin(const CWin &win)
    {
        cout << "�����غc���Q�I�s�F!" << endl;
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
    cout << "�Nptr1�ҫ��V������R����" << endl;
    ptr2->show();
    delete ptr2;
    return 0;
}