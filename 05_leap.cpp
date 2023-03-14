#include<iostream>
using namespace std;
class leap{
    int year;
    public:
    void getyr();
    void chckLeap();
};
void leap :: getyr(){
    cout<<"enter year: ";
    cin>>year;
}
void leap :: chckLeap(){
    getyr();
    if(year%400==0)
        cout<<"leap year";
    else if(year%100==0 || year%4!=0)
        cout<<"not leap year";
    else if(year%4==0)
        cout<<"leap year";
}
int main(){
    leap s;
    s.chckLeap();
    return 0;
}
