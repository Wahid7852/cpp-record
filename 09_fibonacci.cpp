#include <iostream>

class fibo{
    int i,n,t1,t2,NT;
    public:
    void getval(){
        cout<<"enter number of terms: ";
        cin>>n;
        t1=0, t2=1, NT=t1+t2;
    }
    void display(){
        getval();
        cout<<t1<<","<<t2;
    for(i=3;i<=n;++i){
        cout<<","<<NT;
        t1=t2;
        t2=NT;
        NT=t1+t2;
    }
    }
};
int main(){
    fibo s;
    s.display();
    return 0;
}
