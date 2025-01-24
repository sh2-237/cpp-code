#include <iostream>
using namespace std;

// 篶じま计﹍

class CWin
{

private:
    char id;
    int width;
    int height;

public:
    CWin(char i = 'D', int w = 100, int h = 100)
    { // 硂妓讽и倒ま计ㄤま计碞穦笆﹍てΘ篶じま计﹍
        id = i;
        width = w;
        height = h;
    }
    void show_member(void)
    {
        cout << "Window " << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};

int main()
{
    CWin win1('A');
    CWin win2('B', 50, 60);

    win1.show_member();
    win2.show_member();
    return 0;
}