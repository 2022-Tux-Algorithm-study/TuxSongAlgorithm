#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person{
    public:
    int age;
    string name;
    Person(int a,string n);
};

Person::Person(int a,string n){
   age=a;
   name=n;
}

bool operator<(const Person &a,const Person &b){
    return a.age<b.age;
}
int main(){

    int N;
    cin>>N;

    vector<Person> persons;

    for(int i=0;i<N;i++){

	int a;
	string n;

	cin>>a>>n;

	persons.push_back(Person(a,n));
    }

    stable_sort(persons.begin(),persons.end());

    for(int i=0;i<N;i++){
	cout<<persons[i].age<<" "<<persons[i].name<<'\n';
    }
}
