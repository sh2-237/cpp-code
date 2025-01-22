#include <iostream>
using namespace std;

class CWIN
{
private:
    char id;
    int width;
    int height;
    int area()
    {
        return width * height;
    }

public:
    void show_data()
    {
        cout << "Window" << id << " area = " << area() << endl;
    }
    void set_data(char i, int w, int h)
    {
        id = i;
        if (w > 0 && h > 0)
        {
            width = w;
            height = h;
        }
        else
        {
            cout << "Enter error" << endl;
        }
    }
};

int main()
{
    CWIN win1;

    win1.set_data('A', 50, 40);
    win1.show_data();

    return 0;
}