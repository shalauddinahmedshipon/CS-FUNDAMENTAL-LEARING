#include<bits/stdc++.h>;
using namespace std;


class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int engMarks;

};

bool cmp(Student a,Student b){
    if(a.engMarks==b.engMarks){
       if(a.mathMarks==b.mathMarks){
         return a.id<b.id;
       }else{
        return a.mathMarks>b.mathMarks;
       }
    }else{
        return a.engMarks>b.engMarks;
    }
}


int main(){
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
       
        cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id>>arr[i].mathMarks>>arr[i].engMarks;
    }
   
   sort(arr,arr+n,cmp);

    for (int i = 0; i < n; i++)
    {
       
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id<<" "<<arr[i].mathMarks<<" "<<arr[i].engMarks<<endl;
    }
    
    return 0;
}