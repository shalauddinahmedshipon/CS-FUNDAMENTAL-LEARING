#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long int n;
       cin>>n;
     long long int nl=n-2;
     long long int sum1=0;
       for (int i = 0; i < nl; i++)
       {
       long long int x;
        cin>>x;
        sum1+=x;
       }
      long long int sum2;
       cin>>sum2;

       cout<<sum2-sum1+1<<endl;
    }
    
    return 0;
}