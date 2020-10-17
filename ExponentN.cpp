#include <iostream>

using namespace std;

void Exponent1(int a, int b){
	int sum = a*b;
	std:cout<< sum <<'\n';
}

void Exponent2(int a, int b){
	int sum = 0;
	for (int i = 0; i <= b; i++){
		sum = i * b;
	}
std:cout << sum << '\n';
}

void Exponent3(int a, int b){
	int sum = 0;
	for (int i = 0; i <= a; i++){
		for (int j = 0; j <= b; j++)
			sum = i * j;
	}
	std:cout << sum << '\n';	
}

void main(){
	int num;
	std:cout << "n번 곱할 숫자를 입력하세요 : ";
	cin >> num;
	int num2 = num;
	Exponent1(num, num2);
	Exponent2(num, num2);
	Exponent3(num, num2);
}