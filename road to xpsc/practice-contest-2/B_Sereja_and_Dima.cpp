#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a;
    int sumA=0;

    vector<int> b;
    int sumB=0;

    list<int> ls;

    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       ls.push_back(x);
    }
    
    while (!ls.empty())
    {
       //a
       if(ls.front()>=ls.back()){
          a.push_back(ls.front());
          ls.pop_front();
       }
       else{
           a.push_back(ls.back());
           ls.pop_back();
       }

       //b
      if(!ls.empty()){
         if(ls.front()>=ls.back()){
          b.push_back(ls.front());
          ls.pop_front();
       }
       else{
           b.push_back(ls.back());
           ls.pop_back();
       }
      }else{
        break;
      }


      
    }

    for (int i = 0; i <a.size(); i++)
      {
        sumA+=a[i];
      }

      for (int i = 0; i <b.size(); i++)
      {
        sumB+=b[i];
      }
      

     cout<<sumA<<" "<<sumB;

    
    
    return 0;
}