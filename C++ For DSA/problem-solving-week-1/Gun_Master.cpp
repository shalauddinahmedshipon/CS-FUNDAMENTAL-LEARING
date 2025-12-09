#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int nt,d;
        cin>>nt>>d;
        int arr[nt];
        for (int i = 0; i < nt; i++)
        {
            cin>>arr[i];
        }
       int count=0;
         for (int i = 0; i < nt; i++)
        {
            if(arr[i]<=d){
               if(i>0&&arr[i-1]>d){
                count++;
               }
            }else{
              if(i==0&&arr[i]>d){
                count++;
              }
              if(i>0&&arr[i-1]<=d){
                count++;
              }
            }
        }

        cout<<count<<endl;

        
    }
    
    return 0;
}