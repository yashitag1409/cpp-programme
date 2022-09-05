#include<iostream>
using namespace std;


class Temp {
	public:
	float fahr,cent;
	
	void fahren(){
		cout << "Enter Fahrenheit degree : ";
		cin >> fahr;		
	}
	void centi(){
		cent = ((fahr - 32) * 5)/9;
		
		cout << cent << "°C";
	}
	
};
int main(){
	Temp temp;
	temp.fahren();
	temp.centi();
	
	return 0;
}
