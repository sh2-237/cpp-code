#include <iostream>
#include <cstring>
using namespace std;
// 繼承
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i = 'D', int w = 10, int h = 10) : id(i), width(10), height(h)
    {
        cout << "建構元被呼叫了!" << endl;
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
        cout << "CTextWin()建構元被呼叫了!" << endl;
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

    cout << "win 物件占了" << sizeof(win) << "bytes" << endl;
    cout << "txt 物件占了" << sizeof(txt) << "bytes" << endl;

    return 0;
    /*
    輸出:

    建構元被呼叫了!
    建構元被呼叫了! //會先調用父類的無引數建構元來幫子類做初始化的動作
    CTextWin()建構元被呼叫了! // 然後才調用子類的建構元
    WindowA:width = 10, height = 60
    WindowD:width = 10, height = 10
    text = Hello C++
    win 物件占了12bytes
    txt 物件占了32bytes


    */
}