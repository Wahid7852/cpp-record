#include<iostream>
using namespace std;
class factorial{
    int i=1,n,f=1ll;
    public:
    void getval();
    void giveFact();
    };
    void factorial :: getval(){
        cout<<"enter value: "<<endl;
    cin>>n;
    }
    void factorial ::giveFact(){
    while(i<=n){
        f*=i;
        i++;
    }
    cout<<f;
    }
int main(){
    factorial s;
    s.getval();
    s.giveFact();
    return 0;
}