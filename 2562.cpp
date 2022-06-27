#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int arr[10];

	for(int i=0;i<9;i++){
		cin>>arr[i];
	}

	cout<<*max_element(arr,arr+9)<<endl;
	cout<<(max_element(arr,(arr+9))-arr)+1<<endl;



}
