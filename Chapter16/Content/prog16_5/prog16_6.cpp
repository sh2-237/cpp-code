#include <iostream>
#include <cstring>
using namespace std;
// �p��b�l�����s����������

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