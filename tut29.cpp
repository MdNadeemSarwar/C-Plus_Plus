// Constructor exampel or withoud consructer exampel

#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    // complex(void); >>> constructor me ye lagana hai 
    void printnumber(){
        cout<<"Your number is "<<a<< "+"<<b<<"i"<<endl;
    }
};
// complex::complex(void){ >>> or ye lagana hai 
//     a = 10;
//     b = 0;
// } 
int main(){ 
 complex baklol;
 baklol.printnumber();

return 0;
}
---------------------------------------------------
#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
 complex(void){
        cout<<"This is the void lol : "<<a<<"+"<<b<<endl;
    }
complex::complex(void){
     a = 5;
     b = 10;

}
};
int main(){ 
complex spacex;
spacex.career();
spacex.career();
return 0;
}
---------------------------------------------------------------