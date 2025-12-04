#include<bits/stdc++.h>;
using namespace std;


class Student{
    public:
    string name;
    int roll;
    char section;
    int marks;

};

int main(){
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
       
        cin>>arr[i].name>>arr[i].roll>>arr[i].section>>arr[i].marks;
    }
    char newArr[n];
    for (int i = 0; i < n; i++)
    {
       newArr[i]=arr[i].section;
    }
    reverse(newArr,newArr+n);
    for (int i = 0; i < n; i++)
    {
       
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<newArr[i]<<" "<<arr[i].marks<<endl;
    }
    
    return 0;
}