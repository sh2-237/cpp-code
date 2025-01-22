#include <iostream>
using namespace std;
// 函數的多載

class CWIN
{
public:
    // 物件成員
    char id;
    int width;
    int height;

    // 物件函數
    int area()
    {
        return width * height;
    }

    void show_data(void)
    {
        cout << "Window" << id << ", area = " << area() << endl;
    }

    void set_data(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }

    void set_data(char i)
    {
        id = i;
    }
    void set_data(int w, int h)
    {
        width = w;
        height = h;
    }
};
int main()
{

    CWIN win1, win2;

    win1.set_data('A', 50, 40);
    win2.set_data('B');
    win2.set_data(40, 10);

    win1.show_data();
    win2.show_data();
    return 0;
}