#include<iostream>
using namespace std;

int main(){
	float gross,rs,da,hra;
	cout <<"Enter user salary : ";
	cin >> rs;
	cout << "\n";
	da = 0.4*rs;
	hra = 0.2*rs;
	gross = rs + da + hra;
	
	cout << "Your Gross Salary : " << gross;
	return 0;
}
