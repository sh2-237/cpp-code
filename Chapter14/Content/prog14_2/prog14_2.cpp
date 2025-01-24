#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin
{
private:
    char id, title[20];

public:
    CWin(char i = 'D', const char *text = "Default window") : id(i)
    {
        strcpy(title, text);
    }
    ~CWin()
    {
        cout << "解構元被呼叫了! Win " << this->id << "被銷毀了" << endl;
        system("pause");
    }
    void show()
    {
        cout << "Window " << this->id << ": " << title << endl;
    }
};
int main()
{
    CWin win1;
    CWin win2('B');

    win1.show();
    win2.show();

    return 0;
}