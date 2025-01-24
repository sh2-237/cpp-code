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
        cout << "�Ѻc���Q�I�s�F! Win " << this->id << "�Q�P���F" << endl;
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