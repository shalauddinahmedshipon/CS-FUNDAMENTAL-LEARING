#include<bits/stdc++.h>;
using namespace std;

int main(){
    int k; cin>>k;
    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        cin>>b[i];
    }

    if(b.size()==1){
        if(b[0]==9){
            cout<<b[0]<<endl;
        }else{
            cout<<-1<<endl;
        }
        
        
    }else{

     sort(b.begin(),b.end());
    if(b[k-1]!=9) cout<<-1<<endl;
    else cout<<b[0]<<endl;
    }


    
    return 0;
}