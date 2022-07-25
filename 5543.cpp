#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> menu;

    for(int i=0;i<3;i++){
        int tmp;
        cin>>tmp;
        menu.push_back(tmp);
    }

    sort(menu.begin(),menu.end());
    int min=menu[0];
    menu.clear();
    for(int i=0;i<2;i++){
        int tmp;
        cin>>tmp;
        menu.push_back(tmp);
    }
    sort(menu.begin(),menu.end());
    min+=menu[0]-50;

    cout<<min<<'\n';
}
