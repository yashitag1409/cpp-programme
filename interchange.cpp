#include<iostream>
using namespace std;

int main(){
	int c,d ;
	cin >> c;
	cin >> d;
	
	c = d + c;
	d = c - d;
	c = c - d ;
	
	cout << "InterChange Value of C :" << c << endl;
	cout << "Intechange Value of D : " << d << endl;
	
	return 0;
}
