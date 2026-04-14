#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }

    int sereja=0;
    int dima=0;
    int atm=1;
   
    while (!dq.empty())
    {
       int pick=max(dq.front(),dq.back());
       if(atm%2==1){
           sereja+=pick;
       }else{
           dima+=pick;
       }

       if(dq.front()>dq.back()){
          dq.pop_front();
       }else{
        dq.pop_back();
       }

       atm++;
    }
    
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}