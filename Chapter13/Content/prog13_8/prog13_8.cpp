#include <iostream>
using namespace std;

// �Ѩ�ƶǦ^���O�������ܼ�

class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
    }
    CWin compare(CWin w)
    {
        if (this->area() > w.area())
        {
            return *this;
        }
        else
        {
            return w;
        }
    }

    int area()
    {
        return height * width;
    }
    char get_id(void)
    {
        return id;
    }
};

int main()
{
    CWin win1('A', 60, 70);
    CWin win2('B', 50, 60);

    cout << "Window " << (win1.compare(win2)).get_id() << " is larger" << endl;

    return 0;
}