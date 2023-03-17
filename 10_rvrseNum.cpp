#include<iostream>
using namespace std;
class rev{
    int num, rev_num, remainder;
    public:
    void getnum(){
        rev_num=0;
        cout<<"enter number: ";
        cin>>num;
    }
    void reverse(){
        while(num!=0){
            remainder=num%10;
            rev_num=rev_num*10+remainder;
            num/=10;
        }
        cout<<"reversed num is: "<<rev_num;
    }
};
int main(){
    rev s;
    s.getnum();
    s.reverse();
    return 0;
}