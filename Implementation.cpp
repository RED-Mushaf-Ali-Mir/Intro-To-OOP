#include<iostream>
#include"Definition.h"
using namespace std;

Student::Student(int r=0,int c=0){

    RollNumber=r;
    Class=c;
}

void Student::check_validity(int r){
    if(r==RollNumber)
       cout<<"\n\tValid Student.";
}
void Student::Class_back(){
    cout<<"\n\nThe Class Is :5 C"<<Class;
}