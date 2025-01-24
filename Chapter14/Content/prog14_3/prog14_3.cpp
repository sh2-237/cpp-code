#include <iostream>
using namespace std;
// �b���O���ʺA�O����t�m
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
        cout << "�Ѻc���Q�I�s�F~" << endl;
        delete[] title; // ����g�b�Ѻc����
    }
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
};
int main()
{
    CWin win1('A', "Main window");
    CWin win2('B');

    win1.show();
    win2.show();

    return 0;
}