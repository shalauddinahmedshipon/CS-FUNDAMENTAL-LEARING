#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n),b(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int l_idx=-1,r_idx=n;

    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]){
            l_idx=i;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]!=b[i]){
            r_idx=i;
            break;
        }
    }

   
    if(l_idx==-1 && r_idx==n){
        cout<<"Yes"<<endl;
    }else{

    
        vector<int> target,raw;

    for (int i = l_idx; i <= r_idx; i++)
    {
        raw.push_back(a[i]);
        target.push_back(b[i]);
    }

   

    vector<int> lcy,rcy;  
    //left cyclic
    for (int i = 1; i <raw.size(); i++)
    {
        lcy.push_back(raw[i]);
    }

    lcy.push_back(raw[0]);
    


    //right cyclic
    rcy.push_back(raw[raw.size()-1]);
    for (int i = 0; i < raw.size()-1; i++)
    {
        rcy.push_back(raw[i]);
    }


    if(target==lcy){
        cout<<"Yes"<<endl;
    }
    else if(target==rcy){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    

    }

   

    
   
    


    
    
    return 0;
}