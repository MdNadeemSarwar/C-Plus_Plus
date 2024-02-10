#include<iostream>
using namespace std;


class complex;

class calculater{
    public:
    int add(int a, int b){
        return (a + b);
    }
   int sumrealcomplex(complex , complex);  
};
class complex{
    int a,b;
    friend int calculater::sumrealcomplex(complex 01, complex 02);
    public: 
    void setnumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }

};
int calculater:: sumrealcomplex(complex 01, complex 02){
    return (01.a + 02.a);
   }  
int main(){ 


return 0;
}