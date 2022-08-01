#include <iostream>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    map<string,float> scores={{"A+",4.3f},{"A0",4.0f},{"A-",3.7f},
    {"B+",3.3f},{"B0",3.0f},{"B-",2.7f},{"C+",2.3f},{"C0",2.0f},
    {"C-",1.7f},{"D+",1.3f},{"D0",1.0f},{"D-",0.7},{"F",0.0}};
    
    int N;
    cin>>N;
    
    float total=0.0;
    int credits=0;
    for(int i=0;i<N;i++){
        string tmp;
        int credit;
        string score;
        
        cin>>tmp>>credit>>score;
        
        total+=(credit*scores[score]);
        credits+=credit;
    }
    
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout<<round(total/credits*100)/100<<"\n";
}
