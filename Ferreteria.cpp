#include <iostream>
using namespace std;

int main() {
	float B, H = 0, Pintura, Pared, Cubetas;
	int Figura = 0, Error = 0;

	while (Error == 0) {
		cout << "Ingresa 1 (cuadrado) o 2 (rectangulo): " << endl;
		cin >> Figura;
		
		if (Figura == 1 || Figura == 2){
			Error = 1;
		} else {
			Figura = 0;
			cout << "Figura no valida." << endl;
			Error = 0;
		}
	}

	switch(Figura) {
	case 1: 
		cout << "Ingresa el lado: ";
		cin >> B;
		if (B <= 0) {
			cout << "Valores no validos.";
			return 1;
		}
		Pared = B * B;
		break;
		
		case 2:
		cout << "Ingresa la base: ";
		cin >> B;
		cout << "Ingresa la altura: ";
		cin >> H;
		if (B <= 0 || H <= 0) {
			cout << "Valores no validos";
			return 1;
		}
		Pared = B * H;
		break;
		
		default:
		cout << "Figura no valida";
		return 1;
	
		
}

	Pintura = Pared / 4;

	if (Pintura < 20) {
		cout << "Necesitas " << Pintura << " L de pintura.";
	}
	else {
		Cubetas = Pintura / 20;
		cout << "Necesitas " << Pintura << " L de pintura, mejor compra "
			<< Cubetas << " cubeta(s).";
	}

	return 0;
}