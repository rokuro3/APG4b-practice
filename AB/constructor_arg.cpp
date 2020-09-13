#include <bits/stdc++.h>
using namespace std;

struct NumString{
    int length;
    string s;
    NumString(int num) {//constructorに引数を与える
        cout << "constructor called" << endl;
        s = to_string(num);
        length = s.size();
    }
    NumString(int num, string y){
        cout << "initialize x and y" << endl;
        s = y;
        length = num;
    }
};
//MyPairという構造体を定義
int main(){
    NumString num(12345);
    cout << "num.s = " << num.s << endl;
    cout << "num.length =" << num.length << endl;
    NumString num2(12345, "fjio");
    cout << "num.s = " << num2.s << endl;
    cout << "num.length =" << num2.length << endl;
    
}