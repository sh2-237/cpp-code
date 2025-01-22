#include <iostream>
using namespace std;

class CWIN
{
public:
    char id;
    int width;
    int height;

    int area()
    {
        return width * height;
    }
    void set_data(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }
};
void show_data(CWIN win)
{
    cout << "Window " << win.id << ", area = " << win.area() << endl;
}

int main()
{
    CWIN win1; // 設定物件的實體

    win1.set_data('B', 50, 40);

    show_data(win1);

    return 0;
}