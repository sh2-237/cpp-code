#include <iostream>
using namespace std;
class CRect
{
public:
    int width;
    int height;
    int weight;

    void set(double wg)
    {
        weight = wg;
    }
    void set(int w, int h)
    {
        width = w;
        height = h;
    }
    void set(double wg, int w, int h)
    {
        weight = wg;
        width = w;
        height = h;
    }
    void show_data()
    {
        cout << "weight = " << weight << ", width = " << width << ", height = " << height << endl;
    }
};

int main()
{
    CRect rect;
    rect.set(5);
    rect.set(10, 20);
    rect.set(10, 20, 30);
    rect.show_data();
    return 0;
}