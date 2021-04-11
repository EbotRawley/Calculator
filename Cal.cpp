#include<iostream>

using namespace std;


int main(){
	int a, b;
	float ans;
	char oper;
	cout << endl;
	cout << "Enter a number : ";
	cin >> a;
	cout << "Enter an operator : ";
	cin >> oper;
	cout << "Enter another number : ";
	cin >> b;
	switch (oper){
	case  '+' :
	{
		ans = a + b;
		break;
	}
	case '-' :{
		ans = a - b;
		break;
	}
	case '*' :{
		ans = a * b;
		break;
	}
	case '/':{
		ans = a / b;
		break;
	}
}
	cout << "Ans : " << a << " " << oper << " " << b << " = " << ans;
	return 0;
}
