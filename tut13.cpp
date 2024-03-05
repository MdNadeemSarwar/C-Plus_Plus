#include <iostream>
using namespace std;
int main()
{
    int Marks[4] = {23, 45, 56, 94};
    int Mathmarks[4];
    Mathmarks[0] = 425;
    Mathmarks[1] = 555;
    Mathmarks[2] = 545;
    Mathmarks[3] = 480;
    cout << "These are the math marks";
    cout << Marks[0] << endl;
    cout << Marks[1] << endl;
    cout << Marks[2] << endl;
    cout << Marks[3] << endl;
    cout << Mathmarks[0] << endl;
    cout << Mathmarks[1] << endl;
    cout << Mathmarks[2] << endl;
    cout << Mathmarks[3] << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){ 
int Marks[4] = {20,40,550,60};
int Mathmarks[5] = {500,450,370,200,350};
cout<<"Your maths Marks";
cout<<Mathmarks[0]<<endl;
cout<<Mathmarks[1]<<endl;
cout<<Mathmarks[2]<<endl;
cout<<Mathmarks[3]<<endl;
cout<<Mathmarks[4]<<endl;
cout<<Mathmarks[5]<<endl;
cout<<Marks[0]<<endl;
cout<<Marks[1]<<endl;
Marks[2]=445;
cout<<Marks[2]<<endl;
cout<<Marks[3]<<endl;
cout<<Marks[4]<<endl;
for (int i = 0; i < 4; i++)
{
cout<<"The value of marks is "[i]<<Marks[i]<<endl;
}
while (int i = 0 i <4; i++)
{
    cout<<"Tyhe marks is "[i] is <<Marks[i]<<endl;
}

return 0;
}
#include<iostream>
using namespace std;
int main(){
    int Age [] = {0,10,20,30,40,50};
    int camera[] {10,50,100,150,200};
    int *C = camera;
    cout<<*C<<endl;
    cout<<*(C+1)<<endl;
    cout<<*(C+2)<<endl;
    cout<<*(C+3)<<endl;
    cout<<*(C+4)<<endl;
    cout<<*(C+5)<<endl;
    cout<<*(C+6)<<endl;
    cout<<Age;
    cout<<Age[0]<<endl;
    cout<<Age[1]<<endl;
    cout<<Age[2]<<endl;
    cout<<Age[3]<<endl;
    cout<<Age[4]<<endl;
    cout<<Age[5]<<endl;
    cout<<Age[6]<<endl; 
    int *p = Age;
    cout<<"tHE VALUE OF MARKS IS "<<*p<<endl;  
    cout<<"tHE VALUE OF MARKS IS "<<*(p+1)<<endl;  
    cout<<"tHE VALUE OF MARKS IS "<<*(p+2)<<endl;  
    cout<<"tHE VALUE OF MARKS IS "<<*(p+3)<<endl;  
    int A=3;
    int* B=&A;
    cout<<B;  
    int a = 3;
    int*b = &a;
    cout<<"The addresss of a is "<<a<<endl;
    cout<<"The address of b is "<<b<<endl;
int* b = &a;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of b is "<<b<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main (){
    int age [] ={0,50,25,15,10,05};
    int *A = age;
    cout<<*(A+1)<<endl;
    cout<<*(A+2)<<endl;
    cout<<*(A+3)<<endl;
    cout<<*(A+4)<<endl;
    int camera[] {10,50,100,150,200};
    int *C = camera;
    cout<<*C<<endl;
    cout<<*(C+1)<<endl;
    cout<<*(C+2)<<endl;
    cout<<*(C+3)<<endl;
    cout<<*(C+4)<<endl;
    cout<<*(C+5)<<endl;
    cout<<*(C+6)<<endl;
    for (int i = 0; i < 200; i++)
    {
     cout<<i<<endl;
     i= 50; break;
    }
    #include<iostream>
    using namespace std;
    int main(){
        int college[] {500,450,445,554,420};
        int *A = college;
    }
    return 0;
    }
    #include<iostream>
    using namespace std;
    int main(){ 
    int college[] {450,451,470,475,520};
    int *A = college;
    cout<<A;
    cout<<*(A+1)<<endl;
    cout<<*(A+2)<<endl;
    cout<<*(A+3)<<endl;
    cout<<*(A+4)<<endl;
    cout<<*(A+5)<<endl;
    return 0;
    }
#include<iostream>
using namespace std;
int main(){ 
int career[] {50,60,40,70,80,60};
int*P = career;
cout<<*P<<endl;
cout<<*(P+1)<<endl;
cout<<*(P+2)<<endl;
cout<<*(P+3)<<endl;
cout<<*(P+4)<<endl;
cout<<*(P+5)<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main(){ 
int career[] {50,60,50,2,5};
int*A = career;
cout<<*A<<endl;
cout<<*(A++);
cout<<(*++A);
cout<<*(A+1)<<endl;
cout<<*(A+2)<<endl;
cout<<*(A+3)<<endl;
cout<<*(A+4)<<endl;
return 0;
}
