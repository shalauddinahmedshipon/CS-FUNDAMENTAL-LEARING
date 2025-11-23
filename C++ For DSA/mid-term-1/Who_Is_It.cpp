
#include<bits/stdc++.h>;
using namespace std;

class Student{
public:
int id;
char name[100];
char section;
int marks;
};



int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

   int max_marks=-1;
   Student topper;

   for(int i=1;i<=3;i++){
    Student temp_student;
    cin>>temp_student.id>>temp_student.name>>temp_student.section>>temp_student.marks;
    if(max_marks<temp_student.marks){
        topper=temp_student;
        max_marks=temp_student.marks;
    }
    else if(max_marks==temp_student.marks){
        if(topper.id>temp_student.id){
         topper=temp_student;
        }
    }
   }


cout<<topper.id<<" "<<topper.name<<" "<<topper.section<<" "<<topper.marks<<endl;

    }
    return 0;
}