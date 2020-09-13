#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    s.insert(3);
    s.insert(7);
    s.insert(8);
    s.insert(10);

    s.insert(3);//この操作は無視される

    cout << "size:" << s.size() << endl;

    if(s.count(7)){
        cout << "found 7" << endl;
    }
    s.erase(3);
    cout << "max value:" << *begin(s) << endl; //最大値の取得
    cout << "min value:" << *s.rbegin() << endl;//最小値
    for (auto value: s){
        cout << value << endl;
    }

}