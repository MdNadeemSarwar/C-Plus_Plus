#include<iostream>
using namespace std;
class base{

    int a;
    private     :
    int b;

};
class derived: public base{
int d;
int e;

};
derived:base(int d){
int d = 5;
}
int main(){ 
    derived d;
cout<<d;
return 0;
}