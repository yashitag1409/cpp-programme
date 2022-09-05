#include<iostream>
using namespace std;

int main(){
	float marks,maths,ip,chem,phy,eng ;
	cout << "Enter Maths Marks : ";
	cin >> maths;
	cout << "\nEnter IP Marks : ";
	cin >> ip;
	cout << "\nEnter Chemistry Marks : ";
	cin >> chem;
	cout << "\nEnter Physics Marks : ";
	cin >> phy;
	cout << "\nEnter English Marks : ";
	cin >> eng;
	
	marks = ip + eng + chem + phy + maths ;
	
	cout << "Total Marks : " << marks;
	
	return 0;
	
}
