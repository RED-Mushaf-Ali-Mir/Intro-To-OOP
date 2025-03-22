#include<iostream>
#include<string>

using namespace std;

// class Company{

//     private:
//        int ID;
// const  int salary;
// static int emp_count;
 
//     public:

//     Company():salary(0){
//         ID=0;
//     }

//     Company(int id,int s):salary(s){
//         display();
//         ID=id;
//     }

//     static void display(){
//              cout<<"\nThe current numbers of employee :"<<emp_count;
//              emp_count++;
//     }

//      Company details(){

//         cout<<"The ID os employee is :"<<this->ID;
//         cout<<"\nThe salary of the employee :"<<this->salary;
  
//         return *this;
//     } 
 

// };

// int Company::emp_count=0;

// int main(){

//     Company emp(566,30000);

//    Company ptr=emp.details();

//     ptr.display();
//     emp.display();


//     return 0;
// }

class Rectangle{

    private:
    int length;
    int bredth;

    public:
    Rectangle(){
        length=0;
        bredth=0;
    }
    Rectangle(int l,int b):length(l),bredth(b){}

    Rectangle(Rectangle& custom){
        length=custom.length;
        bredth=custom.bredth;
    }

};

class square:public Rectangle{
    
};