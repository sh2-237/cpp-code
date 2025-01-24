#include <iostream>
using namespace std;
// 靜態成員函數
class CWin
{
private:
    char id;
    int width;
    int height;
    static int num;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        num++;
    }
    CWin()
    {
        num++;
    }
    static void count()
    {
        cout << "已建立" << num << "個物件" << endl;
    }
};
int CWin::num = 0;
int main()
{
    CWin::count();
    CWin win[5];
    CWin::count();
    return 0;
}