#include<iostream>
using namespace std;

int main(){
	int number, i , n, num,  sum = 0 , count = 0;
	
	cout << "Enter Number : ";
	cin >> number;
	num = number;
	while(num != 0){
		num /= 10;
		count += 1;
	}
	for(i = count ; i < count ; i++){
		n = number % 10;
		number = number/10;
		sum = sum + n;
	}
	cout << "Sum of Given Digits : " << sum <<endl;
}
