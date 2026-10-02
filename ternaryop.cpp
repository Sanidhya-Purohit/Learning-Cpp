#include <iostream>
using namespace std;
int main(){
	cout << " Enter two numbers " << endl;
	int a{}, b{};
	cin>> a >> b;
	int max= (a>=b)?a:b;
	cout << " The largest number that you entered is " << max << endl;
	return 0;
	
}
