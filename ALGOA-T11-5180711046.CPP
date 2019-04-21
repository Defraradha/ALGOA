#include <iostream>

using namespace::std;

int main(){
 int bil,n,hasil,i;
   cout<<"masukan bilangan = ";
   cin>>hasil;
   cout<<"masukan pangakat = ";
   cin>>n;
    if(n==0) cout<<"hasil1=1"<<endl;
       else{
          bil=hasil;
        for(i=1;i<n;i++){
         hasil=hasil*bil;
           }
            }
            cout<<"X pangkat Y = "<<hasil;
}
