#include<iostream>
#include"Definition.h"
using namespace std;

int Student::NoofStu=0;

Student :: Student(){
    RollNumber=0;
    Class=0;
}

Student::Student(int r,int c){
    RollNumber=r;
    Class=c;
}

void Student::check_validity(int r){
    if(r==RollNumber)
       cout<<"\n\tValid Student.";
       NoofStu++;
}
void Student::Class_back(){
    cout<<"\n\nThe Class Is :5 C"<<Class;
}

Student Student::copyobj(){
    return *this;
}

void Student :: display(){
    cout<<RollNumber<<" "<<Class<<"\n";
}

