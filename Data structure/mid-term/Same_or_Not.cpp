#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,m;
    cin>>n>>m;
    int val1,val2; 
    stack<int> a;
    queue<int> b;
    bool isSame= true;
    if(n==m){
       for(int i=0;i<n;i++){
          cin>>val1;
        a.push(val1);
       }    
        
       for(int i=0;i<m;i++){
        cin>>val2;
        b.push(val2);
       }   
        
        while(!a.empty()){

            if(a.top() != b.front()){
                isSame=false;
                break;
            }
            a.pop();
            b.pop();
        }
        
    }else{
        isSame=false;
    }
   
    isSame? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
    return 0;
}
