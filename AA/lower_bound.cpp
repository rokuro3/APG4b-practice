#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {0, 10, 11, 13, 14, 20};
    cout << *lower_bound(a.begin(), a.end(), 12) << endl;//12以上の最小の要素を求める
    cout << *upper_bound(a.begin(), a.end(), 10) << endl;// 10を超える最小の要素
}