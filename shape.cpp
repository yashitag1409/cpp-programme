#include<iostream>
using namespace std;

class Circle{
	public:
	float radius , area, circum;
	
	void Area {
		cin >> radius;	
		area = 3.14 * radius * radius;
		cout << area;
	} 
	void Circum {
		cin >> radius;
		cirum = 4 * 3.14 * radius;
		cout << circum;
	}
};

int main(){
	
	Circle cir;
	Rectangle rect ;
	char shape;
	cout << "Enter shape : (circle,rectangle)" 
	cin >> shape;
	
	switch(circle)
	{
		case 'circle':
			{
				cout << "Enter Radius of Circle : ";
				
				cir.Area();
				cir.Circum();
				break;
			}
			default :
				cout << "Plz ";
	}
	return 0;
}

