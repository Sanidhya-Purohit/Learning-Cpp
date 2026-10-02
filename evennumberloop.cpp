#include<iostream>
using namespace std;
int main(){
int n{};
	cout << " Input a number till which you want to print all even numbers " << endl;
	cin>> n;
	int i=0;
	for(i=0;i<=n;i=i+2){
		cout << i << endl;
	}
	return 0;
}
