#include<iostream>
using namespace std;
int main(){
	int age{};
	cout << " Enter your age " << endl;
	cin >> age;
	if(age<20&& age>=0){
		cout <<  " You belong to the age group of Child " << endl ;
	}
	else if(age>=20&&age<60){
		cout << " You belong to the age group of Adult " << endl;
	}
	else if(age>=60&&age<=200){
		cout << " You belong to the age group Retired " << endl;
	}
	else{
		cout<< " Invalid age entered " << endl;
	}
	return 0;
}
