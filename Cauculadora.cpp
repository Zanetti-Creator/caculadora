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
	cout << "Digite o 1º número: "; cin >> num1;
	cout << "(+) Adição" << endl;
	cout << "(-) Subtração" << endl;
	cout << "(*) Multiplicação" << endl;
	cout << "(/) Divisão" << endl;
	cout << "(^) Exponenciação (Potência)" << endl;
	cout << "Digite a operação matemática que deseja fazer: ";
	cin >> operacao;
	cout << "Digite o 2º número: ";
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
				else cout << "Operação Inválida";
				break;
			case '^': {cout << num1; cout << " ^ "; cout << num2; cout << " = ";  cout << exponenciacao (num1, num2);}
				break;
			default: cout << "Operaçao inválida!!";}
	return 0;
}
