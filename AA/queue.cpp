#include <bits/stdc++.h>
using namespace std;

int main(){
    //queueの使い方
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(6);
    q.push(1);//pushで追加
    cout << q.size() << endl;//sizeの取得
    for(int i=0;i<10;i++) cout << "-" ;
    cout << endl;
    while(!q.empty()){//空かを判定
        cout << q.front() << endl;//先頭要素へのアクセス
        q.pop();//先頭要素を削除
    }

    
}