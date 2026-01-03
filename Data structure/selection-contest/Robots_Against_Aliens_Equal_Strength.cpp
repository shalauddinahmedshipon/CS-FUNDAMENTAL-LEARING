#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        cin>>arr[i][j];
       }
       
    }
   
    int na[r]={0};

    if(r==1){
        cout<<"YES";
    }

    for (int i = 0; i < r; i++)
    {
     
    
       for (int j = 0; j < c; j++)
       {
        na[i]=na[i]+arr[i][j];
       }

 
       
    }

   

    for (int i = 0; i < r; i++)
    {
        
       cout<<na[i]<<" ";
    }
    
    
    return 0;
}