// #include<iostream>
// using namespace std;
// class student{
//     protected:
//     int facecolor;
//     int browneye;
//     public:
//     int angry;
// };
// class father:public student{
//     int browneye;
//     protected:
//     int angry;
//     int sad;
// };
// class child:public father{
//     int browneye;
// };
// int main(){
//     grandfather nadeem;

// return 0;
// }

/*#include<iostream>
using namespace std;
class student {
    protected:
    int roll_number;
    public:
    void setdata(int);
    void getdata(void);
};
void student::setdata(int r){
    roll_number = r;
}
void student::getdata(void){
    cout<<"This is roll number :"<<roll_number<<endl;
}
class exam :public student{
     protected:
     float maths;
     float physics;
     public:
     void set_marks(float,float);
     void get_marks(void);

};
void exam::set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void exam ::get_marks(){
    cout<<"The marks obteand in physics are :"<<physics;
    cout<<"The marks obtaned in maths are : "<<maths;
}
class results: public exam{
    float percentage;
    public:
    void display(){
        set_marks();
        get_marks();

        cout<<"Your Percentage"<<(maths + physics)/2<<endl;
    }
};
int main(){ 
results nadeem;
nadeem.set_marks()

return 0;
}*/

#include <iostream>
using namespace std;

class Student{ 
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number(){
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student{
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{

    Result nadeem;
    nadeem.set_roll_number(420);
    nadeem.set_marks(96.0, 90.0);
    nadeem.display_results();
    return 0;
}