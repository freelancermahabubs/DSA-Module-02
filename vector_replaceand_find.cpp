#include<bits/stdc++.h>
using namespace std;
int main(){

   // replace 
   //  vector<int>v = {1, 2, 3, 4, 2, 6, 7, 2, 9, 2};
   //  replace(v.begin(), v.end()-1, 2, 100);
   //  for (int x: v )
   //  {
   //     cout << x << " ";
   //  }

   
    vector<int>v = {1, 2, 3, 4, 2, 6, 7, 2, 9, 2};
   //  vector<int> :: iterator it;

     auto it = find(v.begin(), v.end(), 3);
     if(it == v.end()) cout<<"Not found";
     else cout<<"Found";
   //  cout<<*it;
   
    
   return 0;
}