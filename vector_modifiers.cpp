#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> x= {12, 14, 16, 40};
    x.pop_back();
    x.pop_back();

    for (int i = 0; i < x.size(); i++)
    {
       cout << x[i] <<" ";
    }
    
    // vector<int> v = {1, 2, 3};
    // v = x; // O(1)


    // for (int i = 0; i < v.size(); i++)
    // {
    //  cout<<v[i]<<" ";
    // }
    
    return 0;
}