#include <iostream>
#include <cstring>
using namespace std;
// 如何在子類中存取父類成員

class CWin
{
private:
    char id;

public:
    CWin(char i) : id(i) {}
};

class CTextWin : public CWin
{
private:
    char text[20];

public:
    CTextWin(char i, const char *tx) : CWin(i)
    {
        strcpy(text, tx);
    }
};

int main()
{

    return 0;
}