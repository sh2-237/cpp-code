#include <iostream>
using namespace std;
// 拷貝建構元 -- 目的 : 為了使用其他的物件來當作初始化
class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h) : id(i), width(w), height(h)
    {
        cout << "建構元被呼叫了!" << endl;
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
    // 在沒有定義拷貝建構元的情況下，編譯器會自動提供。拷貝建構元可以用來拷貝一個已存在的物件的成員給新物件 ( 簡單說就是把已存在的物件中成員的值賦給新創建的物件)
    CWin win2(win1);

    win1.show_member();
    win2.show_member();
    // 只有輸出一次建構元被呼叫了 因為CWin(char i,int w,int h); 只有調用一次
    return 0;
}