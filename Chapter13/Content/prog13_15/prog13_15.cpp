#include <iostream>
using namespace std;

class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
    }
    void compare(CWin *win)
    {
        if (this->area() > win->area())
        {
            cout << "Window " << this->id << " is larger" << endl;
        }
        else
        {
            cout << "Window " << win->id << " is larger" << endl;
        }
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

    CWin *ptr1 = &win1;
    CWin *ptr2 = &win2;

    ptr1->compare(ptr2);
    return 0;
}