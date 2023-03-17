#include <iostream>
using namespace std;
class prime{
    int i,n,flag;
    public:
    prime(){
        int n;
        cout<<"enter no. to check prime: ";
        cin>>n;
        flag=0;
    for(i=2;i<=n/2;i++){
     if(n%i==0)
        flag=1;
    }
     if(flag==0)
        cout<<n<<" is prime";
     else
        cout<<n<<" is not prime";
    }
};
int main(){
    prime s;
    return 0;
}