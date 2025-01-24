#include <iostream>
using namespace std;
// 解構元
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        cout << "建構元被呼叫了!" << endl;
    }
    ~CWin()
    { // 解構元不傳入任何參數
        cout << "建構元被呼叫了! Win " << this->id << "被銷毀了!" << endl;
        system("pause");
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 50, 40);
    CWin win2('B', 40, 50);
    CWin win3('C', 50, 60);
    CWin win4('D', 50, 70);

    win1.show_member();
    win2.show_member();
    return 0;
}