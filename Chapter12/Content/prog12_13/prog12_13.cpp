#include <iostream>
using namespace std;

class CWIN
{
private:
    char id;
    int width;
    int height;

public:
    int area()
    {
        return width * height; // 在CWIN類內部 可以存取私有成員
    }
    void show_data()
    {
        cout << "Window" << id << "area = " << area();
    }
};

int main()
{
    CWIN win1;

    // win1.id = 'A'; // error CWIN類外部無法直接更改私有成員的內容

    return 0;
}