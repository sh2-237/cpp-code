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
        return width * height; // �bCWIN������ �i�H�s���p������
    }
    void show_data()
    {
        cout << "Window" << id << "area = " << area();
    }
};

int main()
{
    CWIN win1;

    // win1.id = 'A'; // error CWIN���~���L�k�������p�����������e

    return 0;
}