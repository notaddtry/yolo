#include "CALCULATOR.h" 

int main() {
	double a, b, c;
	cout << "Enter variables " << endl;
	cin >> a >> b;
	cout << "Choose operation: +, -, *, / " << endl;
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
