#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int cntMap=0, cntPie=0,cntMapPie=0;
       
        for (int i = 0; i < n-2; i++)
        {
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){
                cntMap++;
                i+=2;
            }

          
        }


        for (int i = 0; i < n-2; i++)
        {
          

            if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'){
                cntPie++;
                i+=2;
            }
        }


        for (int i = 0; i < n-4; i++)
        {
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e'){
                cntMapPie++;
                i+=4;
            }

        }



        cout<<cntPie+cntMap-cntMapPie<<endl;
        
    }
    return 0;
}