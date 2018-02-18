#include "CALCULATOR.h" 

int main() {
	double a, b, c;
	cout << "Введите переменные " << endl;
	cin >> a >> b;
	cout << "Выберите операцию: +, -, *, / " << endl;
	char op = ' ';
	cin >> op;
	switch (op) {
	case '+': {
		c = add(a, b);
	}
			  break;
	case '-': {
		c = substract(a, b);
	}
			  break;
	case '*': {
		c = multiply(a, b);
	}
			  break;
	case '/': {
		
			c = devide(a, b);
	}
			  break;
	default: {
		cout << "Wrong operation";
	}
			 break;
	}
	printresult(c);
	system("pause");
}
