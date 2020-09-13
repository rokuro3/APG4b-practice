#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;//priority_queueの定義
    pq.push(10);
    pq.push(1);
    pq.push(6);
    pq.push(3);

    while(!pq.empty()){
        cout << pq.top() <<endl;//最も大きいものを取り出す
        pq.pop(); 
    }
    cout << "最小要素を取り出すpriority_queue" << endl;
    //priority_queueで最小要素を取り出すやり方
    priority_queue<int ,vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(1);
    pq1.push(6);
    pq1.push(3);

    while(!pq1.empty()){
        cout << pq1.top() << endl;
        pq1.pop();
    }
}