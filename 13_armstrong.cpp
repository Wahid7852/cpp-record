#include<iostream>
#include<cmath>
using namespace std;
class arms{
    int count,n,n1,n2,result,digit ;
    public:
    void getval(){
        cin>>n;
    n1=n2=n;
    }
    void chckdigits(){
        count=0;
    while(n1!=0){
        digit=n1%10;
        count++;
        n1/=10;
    }
    }
    void calc(){
        result=0;
    while(n2!=0){
        digit=n2%10;
        result=result+pow(digit,count);
        n2/=10;
    }
    
    }
    void checkAS(){
        //check n==aS or not
    if(result==n)
     cout<<" is an armstrong number";
    else 
     cout<<" is not armstrong number";
    }
};
int main(){
    arms s;
    s.getval();
    s.chckdigits();
    s.calc();
    s.checkAS();
    return 0;
}
