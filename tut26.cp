#include<iostream>
using namespace std;
class complex{
       int a, b;
       public:
       void setnumber(int n1,int n2){
        a = n1;
        b = n2;
       }
       void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
       }
};
int main(){ 
    complex c1, c2;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);
    c1.printnumber();
    c2.printnumber();

return 0;
}