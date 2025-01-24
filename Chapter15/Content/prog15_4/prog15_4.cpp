#include <iostream>
#include <cstring>
using namespace std;
// �B��l �u = �v ���h��
class CWin
{
private:
    char id, *title;

public:
    CWin(char i = 'D', const char *text = "Default window") : id(i)
    {
        title = new char[50];
        strcpy(title, text);
    }
    void set_data(char i, const char *text)
    {
        id = i;
        strcpy(title, text);
    }
    void operator=(const CWin &win) // �p�G�S���ۤv���g�B��� �|�ɭP�ק�win1����ƫ� win2����Ƥ]�@�֭ק諸���D
    {
        id = win.id;
        strcpy(this->title, win.title);
    }
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
    ~CWin()
    {
        delete[] title;
    }
    CWin(const CWin &win)
    {
        id = win.id;
        strcpy(title, win.title);
    }
};
int main()
{
    CWin win1('A', "Main window");
    CWin win2;

    win1.show();
    win2.show();

    win1 = win2;
    cout << endl
         << "After setting win1 = win2.." << endl;
    win1.show();
    win2.show();

    win1.set_data('B', "Hello Window");
    cout << endl
         << "After altering the data membeer of win1.." << endl;
    win1.show();
    win2.show();
    return 0;
}