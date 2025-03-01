#ifndef Def_H
#define Def_H

class Student{
    private:
      int RollNumber;
      int Class;
    
    public:

    Student(int r=0000,int c=0);
    
    int check_validity(int r);

    void Class_back();
};

#endif