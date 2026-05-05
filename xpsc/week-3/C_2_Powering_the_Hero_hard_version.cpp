#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long int n;
       cin>>n;
       vector<long long int> input;
       stack<long long int> duck;
       multiset<long long int> bonus;

       long long int power=0;

       for(long long int i=0;i<n;i++){
        long long int x;
        cin>>x;
        input.push_back(x);
       }

       reverse(input.begin(),input.end());

       for(long long int i=0;i<n;i++){
        duck.push(input[i]);
       }

       while(!duck.empty()){
           long long int top=duck.top();
           duck.pop();
          
          if(top>0){
            bonus.insert(top);
          }else{
            if(!bonus.empty()){
               auto it = bonus.end();
               --it;
               power+=*it;
               bonus.erase(it);
               
            }
          }
       }

       cout<<power<<endl;

    }
    
    return 0;
}