#include<iostream>
using namespace std;

int main(){
	int sp , profit , cost;
	
	cout << "Enter Selling Price : ";
	cin >> sp;
	
	cout << "\nEnter Profit : ";
	cin >> profit;
	
	cost = (sp-profit)/15;
	
	cout << "Cost of each product : " << cost;
}
