#include<iostream>
using namespace std;
class tables{
    int n,i;
    public:
    void getval();
    void diplaytab(){
        i=1;
        while(i<=10){
            cout<<n<<"x"<<i<<"="<<n*i<<endl;
            i++;
        }
    } 
};
void tables :: getval(){
    cout<<"Enter no. to display table: ";
    cin>>n;
}
int main(){
    tables a;
    a.getval();
    a.diplaytab();
    return 0;
}