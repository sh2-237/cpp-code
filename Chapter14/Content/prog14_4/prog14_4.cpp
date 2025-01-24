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
        cout << "�Ѻc���Q�I�s�F~" << endl;
        delete[] title; // ����g�b�Ѻc����
    }
    void show()
    {
        cout << "Window " << id << ": " << title << endl;
    }
};
// �ϥΰʺA�O����t�m�ӫإߪ���
int main()
{
    CWin win1('A', "Main Window");
    CWin *ptr;
    ptr = new CWin('B');
    win1.show();
    ptr->show();

    delete ptr; // �p�G�S������ptr �Ѻc�����|�۰ʳQ�ե�!
    return 0;
}