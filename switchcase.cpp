#include <iostream>
using namespace std;
int main(){
	int roomtype{} ,nights{},n{} ;
	cout << " Choose the type of room you want to book " << endl << " Available Room types: " << endl << " 1.Standard Non AC ( ₹1000/ night)" << endl ;
	cout << " 2.Standard AC ( ₹1250 / night)" << endl << " 3.Delux Non AC ( ₹1500/ night)" << endl << " 4.Delux AC (₹2000/ night)" << endl;
	cout << " Enter your choice (1-4) " << endl;
	cin >> roomtype;
	cout << " How many nights are you goint to stay ?" << endl;
	cin >> nights;
	cout << " How many rooms do you want to book ?" << endl;
	cin >> n;
	switch(roomtype){
		case 1:
		cout << " The total cost for your stay is ₹" << n*nights*1000 << endl;
		break;
		case 2:
		cout<< " The total cost for your stay is ₹" << n*nights*1250<< endl;
		break;
		case 3:
		cout<< " The total cost for your stay is ₹" << n*nights*1500<< endl;
		break;
		case 4:
		cout << " The total cost for your stay is ₹" << n*nights*2000 << endl;
		break;
		default :
		cout<< " Error. Please try booking again."<< endl;
	}
	return 0;
}
