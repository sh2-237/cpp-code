#include <iostream>
#include <cstring>
using namespace std;

class CWin
{
public:
    char id;
    int width;
    int height;
    string title;

    void set_title(string s)
    {
        title = s;
    }
    void display()
    {
        cout << title << endl;
    }
};

int main()
{

    CWin win1;
    win1.set_title("win1 interface");
    win1.display();

    return 0;
}