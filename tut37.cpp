// #include<iostream>
// using namespace std;
// class employee{
//     private:
//     public:
//     int id;
//     float salary;
//     // employee(int inpid){
//     //     id = inpid;
//     //     salary = 34.0;
//     // }
//     employee(int inpid){
//         id = inpid;
//         salary = 34.0;
//     }
//     employee(){}
// };
// class programmer:employee{
//     public:
//     programmer(int inpid){
//         id = inpid;
//     }
//     int languagecode = 9;
//     void getdata(){
//         cout<<id<<endl;
//     }
// };
// int main(){
//     employee nadeem(1), raheem(2);
//     cout<<nadeem.salary<<endl;
//     cout<<raheem.salary<<endl;
//     programmer skillf(10);
//     cout<<skillf.languagecode<<endl;
//     skillf.getdata();
// return 0;
// }
// ------------------------------------
#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(int inpuid){
        id = inpuid;
        salary = 35.0;
    }
    employee(){}
};
class programming : employee{
    public:
    programming (int inpuid){
        id = inpuid;
    }
    int languagecode = 9;
};
int main(){
    employee nadeem(1),raheem(2);
    cout<<nadeem.salary<<endl;
    cout<<raheem.salary<<endl;
    return 0;
}