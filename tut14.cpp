// #include<iostream>
// using namespace std;
// union money
// {
//     int rice;
//     char 'c';
//     float pounda;
// };

// int main(){ 
//     nadeem
//     // struct employee nadeem;
//     // nadeem.eid = 15;
//     // nadeem.salary = 50000000;
//     // nadeem.favchar = 'H';
//     // cout<<"This is the value of "<<nadeem.eid<<endl;
//     // cout<<"This is the value of "<<nadeem.favchar<<endl;
//     // cout<<"This is the value of "<<nadeem.salary<<endl;
//     // cout<<"NASA is Hacked";

// union money m1;
// m1.rice 34;
// m1.car = 'c';
// cout<<m1.rice;

// return 0;
// }
#include<iostream>
using namespace std;
union money
{
 int rice;
 float pounds;
 char car;
};

int main(){ 
    enum meal {breakfast,lunch,dinner};
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
    cout<<m2;
    // cout<<"how can i help you sir "<<endl;
    // cin<<"which food is like sir "<<endl;
//  union money m1;
//  m1.rice = 34;
//  m1.car = 'c';
//  cout<<m1.car<<endl;
//  cout<<m1.rice<<endl;

return 0;
}