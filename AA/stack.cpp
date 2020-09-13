#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;//stackの定義　使い方はqueueとほぼ同じ
    s.push(10);
    s.push(1);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    };
}