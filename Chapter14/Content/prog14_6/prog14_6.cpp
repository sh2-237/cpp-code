#include <iostream>
using namespace std;
// �����غc�� -- �ت� : ���F�ϥΨ�L������ӷ�@��l��
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        cout << "�غc���Q�I�s�F!" << endl;
    }
    void show_member(void)
    {
        cout << "Window" << id << ":";
        cout << "width = " << width << ", height = " << height << endl;
    }
};
int main()
{
    CWin win1('A', 50, 60);
    // �b�S���w�q�����غc�������p�U�A�sĶ���|�۰ʴ��ѡC�����غc���i�H�Ψӫ����@�Ӥw�s�b�����󪺦������s���� ( ²�满�N�O��w�s�b�����󤤦������Ƚᵹ�s�Ыت�����)
    CWin win2(win1);

    win1.show_member();
    win2.show_member();
    // �u����X�@���غc���Q�I�s�F �]��CWin(char i,int w,int h); �u���եΤ@��
    return 0;
}