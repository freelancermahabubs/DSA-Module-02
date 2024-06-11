#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, 2, 3, 4, 5, 6, 7};
    vector<int>v2={500, 600, 700};
    v.insert(v.begin()+2, v2.begin(), v2.end());
    // v.insert(v.begin()+2, 10);
    for (int x: v)
    {
    cout<<x<<" ";
    }
    
    return 0;
}