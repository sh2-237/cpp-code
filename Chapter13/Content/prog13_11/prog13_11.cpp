#include <iostream>
using namespace std;
class CWin
{
private:
    char id;
    int width;
    int hegiht;

public:
    static int num; // 將靜態資料成員宣告為public
    CWin(char i, int w, int h) : id(i), width(w), hegiht(h)
    {
        num++;
    }
    CWin()
    {
        num++;
    }
};
int CWin::num = 0;
int main()
{
    CWin win1('A', 50, 40);
    CWin win2('B', 60, 70);
    cout << "已建立" << CWin::num << "個物件了" << endl;
    CWin my_win[4];
    cout << "已建立" << CWin::num << "個物件了" << endl;
    return 0;
}