#ifndef Def_H
#define Def_H

class Student{
    private:
        int RollNumber;
        int Class;
static  int NoofStu;
    public:

    Student();

    Student(int ,int );
    
    void check_validity(int );

    void Class_back();

    Student copyobj();

    void display();

    
};

#endif