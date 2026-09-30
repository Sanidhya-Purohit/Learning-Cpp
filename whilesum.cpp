#include<iostream>
using namespace std;
int main(){
int n{};
int i=1;
	cout << " Enter the number till which you want to print all natural numbers" << endl;
	cin >> n;
	while(i<=n){
		cout << i << endl;
		i++;
	}
	return 0;
}
