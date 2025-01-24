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
        title = new char[50];
        strcpy(title, text);
    }
    void set_data(char i, const char *text)
    {
        id = i;
        strcpy(title, text);
    }
    CWin &operator=(const CWin &win)
    {
        id = win.id;
        strcpy(this->title, win.title);
        return *this;
    }
    void show()
    {
        cout << "Window" << id << ": " << title << endl;
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
    CWin win1('A', "Main Window");
    CWin win2('B', "Big Window");
    CWin win3;

    win1.show();
    win2.show();
    win3.show();

    win1 = win2 = win3;
    win1.set_data('A', "Hello Window");

    cout << "After setting win1= win2 = win3.." << endl;

    win1.show();
    win2.show();
    win3.show();

    return 0;
}