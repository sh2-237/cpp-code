#include <iostream>
#include <cstring>
using namespace std;
// 在類別中動態記憶體配置
class CWin
{
private:
    char id, *title;

public:
    CWin(char, const char *);
    ~CWin();
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
};
CWin::CWin(char i = 'D', const char *text = "Default window") : id(i)
{
    title = new char[strlen(text) + 1];
    strcpy(title, text);
}
CWin::~CWin()
{
    cout << "解構元被呼叫了~" << endl;
    delete[] title; // 釋放寫在解構元中
}
int main()
{
    CWin win1('A', "Main window");
    CWin win2('B');

    win1.show();
    win2.show();

    return 0;
}