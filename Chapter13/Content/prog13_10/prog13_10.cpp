#include <iostream>

using namespace std;
// 傳遞物件陣列到函數中
class CWin
{
private:
    char id;
    int width, height;

public:
    void set_member(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }
    int area()
    {
        return width * height;
    }
    friend void largest(CWin[], int);
};
void largest(CWin win[], int n)
{
    int max = 0, iw;
    for (int i = 0; i < n; i++)
    {
        if (win[i].area() > max)
        {
            iw = i;
            max = win[i].area();
        }
    }
    cout << "largest window = " << win[iw].id << endl;
}
int main()
{
    CWin win[3];
    win[0].set_member('A', 60, 70);
    win[1].set_member('B', 50, 60);
    win[2].set_member('C', 60, 80);

    largest(win, 3);

    return 0;
}