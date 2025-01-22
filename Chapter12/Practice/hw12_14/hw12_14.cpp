#include <iostream>
using namespace std;

class CWin
{
public:
    void set_data(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }

private:
    char id;
    int width;
    int height;
    friend void show_member(CWin w)
    {
        cout << "Window " << w.id;
        cout << ": width = " << w.width;
        cout << ": height = " << w.height << endl;
    }
    /*
    �ͽ˨�ƥi�H�b���O�~�s���p������
     */
};

int main()
{
    CWin win1, win2;
    win1.set_data('A', 50, 40);
    win2.set_data('B', 60, 20);

    show_member(win1);
    show_member(win2);

    return 0;
}