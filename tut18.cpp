// // #include<iostream>
// // using namespace std;
// // int factorial(int n){ 
// //     if (n<=1) 
// //     {
// //         return 1;
// //     } 
    
// //     return n*factorial(n-1);
// // }
// // int main(){ 
// // int a;
// // cout<<"Enter the number"<<endl;
// // cin>>a;
// // cout<<"The factorial of a is "<<factorial(a)<<endl;
// // return 0;
// // }
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
    
//     return fib(n-2) + fib (n-1);
// }
// int factorial(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
    
//     return n*factorial(n-1);
// }
// int main(){ 
// int a;
// cout<<"Enter teh valueo of a is :";
// cin>>a;
// cout<<"This is the value of a is "<<a<<"is"<<fib(a)<<endl;
// return 0;
// }
// // !n = n(n-1)!
#include<iostream>
using namespace std;
int f(int n){
    if (n<=1)
    {
        return 1;
    }
    
    return n * f(n-1);
}
int main(){ 
int a;
cout<<"Enter The number :"<<endl;
cin>>a;
cout<<"The factorial of a is "<<f(a)<<endl;

return 0;
}