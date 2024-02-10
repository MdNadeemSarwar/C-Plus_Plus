#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary = 20000;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"The id of employee is "<<id<<endl;
    }
};
int main(){ 
// employee nadeeem, avishi ,ziya;
// nadeem.setid();
// nadeem.getid():
employee ch[5];
// ch[0].getdata();
// ch[0].setid();
for (int i = 0; i < 5; i++)
{
    ch[i].setid();
    ch[i].getdata();
}

return 0;
}