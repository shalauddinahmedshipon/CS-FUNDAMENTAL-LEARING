#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       ml.insert(x);
    }

    int day=0; int problems=1;
    while (!ml.empty())
    {
        auto lb=ml.lower_bound(problems);
        if(lb!=ml.end()){
          day++;
          ml.erase(lb);
          problems++;
        }else{
          break;
        }
    }
    
    cout<<day<<endl;
    return 0;
}