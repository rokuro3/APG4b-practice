#include <bits/stdc++.h>
using namespace std;

struct MyPair{
    int x;
    string y;
    MyPair() {
        cout << "constructor called" << endl;
    }
    void print(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
//MyPairという構造体を定義
int main(){
    MyPair p;
    p.x = 12345;
    p.y = "hello";
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;
    auto p2 = MyPair();//構造体定義の別の方法
    p2.x = 3525;
    p2.y = "APG4b";
    p2.print();

}