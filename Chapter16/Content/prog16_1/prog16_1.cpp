#include <iostream>
#include <cstring>
using namespace std;
// �~��
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i = 'D', int w = 10, int h = 10) : id(i), width(10), height(h)
    {
        cout << "�غc���Q�I�s�F!" << endl;
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

class CTextWin : public CWin
{
private:
    char text[20];

public:
    CTextWin(char *tx)
    {
        cout << "CTextWin()�غc���Q�I�s�F!" << endl;
        strcpy(text, tx);
    }
    void show_text()
    {
        cout << "text = " << text << endl;
    }
};

int main()
{
    CWin win('A', 50, 60);
    CTextWin txt("Hello C++");

    win.show_member();
    txt.show_member();
    txt.show_text();

    cout << "win ����e�F" << sizeof(win) << "bytes" << endl;
    cout << "txt ����e�F" << sizeof(txt) << "bytes" << endl;

    return 0;
    /*
    ��X:

    �غc���Q�I�s�F!
    �غc���Q�I�s�F! //�|���եΤ������L�޼ƫغc�������l������l�ƪ��ʧ@
    CTextWin()�غc���Q�I�s�F! // �M��~�եΤl�����غc��
    WindowA:width = 10, height = 60
    WindowD:width = 10, height = 10
    text = Hello C++
    win ����e�F12bytes
    txt ����e�F32bytes


    */
}