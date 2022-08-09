#include <iostream>
using namespace std;
int main(){

    int a,b,c;

    cin>>a>>b>>c;

    if(a+b+c>=100){
        cout<<"OK";
        return 0;
    }else{
        a>b? (b>c? cout<<"Hanyang":cout<<"Korea"):(a>c? cout<<"Hanyang":cout<<"Soongsil");

    }
}
