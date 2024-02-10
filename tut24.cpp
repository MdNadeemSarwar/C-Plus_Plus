// #include<iostream>
// using namespace std;
// class employee{
//     int khana;
//     static int daru;
//     public:
//     void setdeta(void){
//         cin>>khana;
//     }
//     void getdata(void){
//         cout<<khana;
//     }
// };
// int employee::daru;

// int main(){
// //  nadeem.id = 1; do  not use because this is in the private folder so you cant have acces to use them 
// //  nadeem.counter = 2;)'
// cout<<nadeem.daru;
// // cout<<ziya.counter;
// return 0;
// }
#include<iostream>
using namespace std;
class petpuja{
    private:
    int khana;
    static int daru;
    public:
    void setdata(void){
        cout<<"pene me kya hai mama"<<endl;
        cin>>daru;
        khana++;
    }
    void display(void){
        cout<<"pene me kya hai mama"<<daru<<endl;
    }
    // int khana;
    // cout<<"khane me kya hai mama"<<endl;
    // cin>>khana;

};

int petpuja:: daru;
int main(){ 
    petpuja nadeem,avishi,ziya;
    nadeem.setdata();
    nadeem.display();
    avishi.setdata();
    avishi.display();
    ziya.setdata();
    ziya.display();

return 0;
}