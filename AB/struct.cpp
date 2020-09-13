#include <bits/stdc++.h>
using namespace std;

struct MyPair{
    int x;
    string y;
};
//MyPairという構造体を定義



int main(){
    MyPair p = {12345, "hello"};
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;
    auto p2 = MyPair();//構造体定義の別の方法
}