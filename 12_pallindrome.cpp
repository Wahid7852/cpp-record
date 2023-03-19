#include <iostream>
using namespace std;
class pallindrome{
    int n,num,rev_num,r;
    public:
    void getval(){
        cout<<"enter value: ";
        cin>>n;
        num=n;
    }
    void reverse();
    void check();
};
void pallindrome::reverse(){
    rev_num=0;
     while(n!=0){
            r=n%10;
            rev_num=rev_num*10+r;
            n/=10;
        }
}
void pallindrome::check(){
    //checking if n and reversed n are same or not
    if(num==rev_num)
        cout<<"is pallindrome";
    else
        cout<<"not pallindrome";
}
int main(){
    pallindrome s;
    s.getval();
    s.reverse();
    s.check();
    return 0;
}