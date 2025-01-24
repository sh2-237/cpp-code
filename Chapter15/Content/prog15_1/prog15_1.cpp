#include <iostream>
using namespace std;
// 運算子「 > 」 的多載
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
    }
    int operator>(CWin &win)
    {
        return (this->area() > win.area());
    }
    int area()
    {
        return width * height;
    }
};
int main()
{
    CWin win1('A', 50, 60);
    CWin win2('B', 60, 70);
    if (win1 > win2)
    {
        cout << "win1 is larger than win2" << endl;
    }
    else
    {
        cout << "win2 is larger than win1" << endl;
    }
    return 0;
}