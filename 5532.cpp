#include <iostream>
#include <cmath>
using namespace std;

int main(){

        int L;
        int A,B;
        int C,D;

        cin>>L>>A>>B>>C>>D;

        double max=((A/(double)C)>(B/(double)D))? (A/(double)C):(B/(double)D);

        cout<<L-ceil(max)<<endl;
}
