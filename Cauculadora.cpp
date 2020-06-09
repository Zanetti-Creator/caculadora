#include <iostream>
using namespace std;

double soma (double numa, double numb) {
	return numa + numb;
}

double subtracao (double numa, double numb) {
	return numa - numb;
}

double multiplicacao (double numa, double numb) {
	return numa * numb;
}

double divisao (double numa, double numb) {
	return numa / numb;
}

double exponenciacao (double numa, double numb) {
	double numc, result;
	numc = 1;
	if (numb == 0){
		return numc;
	}
	else {
		result = numa;
		while (numc < numb) {
			result = result * numa;
			numc = numc + 1;
			}
		return result;}
}

int main() {
	double num1, num2;
	char operacao;
	cout << "Calculadora" << endl;
	cout << "Digite o 1� n�mero: "; cin >> num1;
	cout << "(+) Adi��o" << endl;
	cout << "(-) Subtra��o" << endl;
	cout << "(*) Multiplica��o" << endl;
	cout << "(/) Divis�o" << endl;
	cout << "(^) Exponencia��o (Pot�ncia)" << endl;
	cout << "Digite a opera��o matem�tica que deseja fazer: ";
	cin >> operacao;
	cout << "Digite o 2� n�mero: ";
	cin >> num2;
	switch (operacao) {
			case '+': {cout << num1; cout << " + "; cout << num2; cout << " = ";  cout << soma(num1, num2);}
				break;
			case '-': {cout << num1; cout << " - "; cout << num2; cout << " = ";  cout << subtracao (num1, num2);}
				break;
			case '*': {cout << num1; cout << " * "; cout << num2; cout << " = ";  cout << multiplicacao (num1, num2);}
				break;
			case '/':
				if (num2 != 0) {cout << num1; cout << " / "; cout << num2; cout << " = ";  cout << divisao (num1, num2);}
				else cout << "Opera��o Inv�lida";
				break;
			case '^': {cout << num1; cout << " ^ "; cout << num2; cout << " = ";  cout << exponenciacao (num1, num2);}
				break;
			default: cout << "Opera�ao inv�lida!!";}
	return 0;
}
