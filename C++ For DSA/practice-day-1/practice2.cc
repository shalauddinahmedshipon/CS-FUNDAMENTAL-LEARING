#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    int *A= new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int m;
    cin>>m;
    int *B= new int[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    int *C=new int[m];
    for(int i=0;i<m;i++){
        C[i]=B[i];
    }

    for(int i=0;i<n;i++){
        B[i]=A[i];
    }
    
    for(int i=0;i<m;i++){
        B[n+i]=C[i];
    }
    delete[] A;
   
    for(int i=0;i<m;i++){
        cout<<B[i]<<" ";
    }
       

    return 0;
}