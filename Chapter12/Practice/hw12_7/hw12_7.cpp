#include <iostream>
using namespace std;

class CBox
{

public:
    int length;
    int width;
    int height;
    void volume()
    {
        cout << height * width * height << endl;
    }
    void surfaceArea()
    {
        cout << width * height << endl;
    }
};
int main()
{
    CBox cb;
    cb.width = 20;
    cb.height = 2;
    cb.length = 3;
    cb.volume();
    cb.surfaceArea();
    return 0;
}