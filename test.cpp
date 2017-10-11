#include <iostream>
using namespace std;

void checador(int); //prototipo de funcion de checador 
void ganancias(int);

int main(void){

	checador(3); // se manda a llamar checador con 5 empleados
	ganancias(5); // ganancias de los ultimos 5 años
	return 0;
}

void checador(int noEmpleados){
	
	int x, h_entrada,h_salida, minExtraGlobales =0;
	float promedio; //todos flotan
	
	for(x=0; x<noEmpleados;x++){
		cout << "Ingrese horas de entrada y salida:\n";
		cin >> h_entrada >> h_salida;
		cout << "Tiempo trabajado por empleado "<< x+1 << ":\t" <<h_salida-h_entrada<< "\t" << "Min. extra:"<<h_salida-h_entrada-480 << "\n" ;		
		minExtraGlobales = minExtraGlobales + (h_salida - h_entrada-480);
		
		
	}

	cout << "Minutos Extra Globales" << minExtraGlobales;
}

void ganancias(int n){
	int x,acp1=0, acp2=0;
	float gananciasp1,gananciasp2;
	for(x=0; x<n;x++){
		cout << "Ingrese ganancias de pais 1 del anio" << x+1 << "\t";
		cin >> gananciasp1;
		cout << "Ingrese ganancias de pais 2 del anio" << x+1 << "\t";
		cin >> gananciasp2; 
		if(gananciasp1>gananciasp2) acp1++;
		else acp2++;
	}
	if (gananciasp1>gananciasp2) cout << "El pais 1 gano mas\n";
	else if( gananciasp1 == gananciasp2) cout << "Los paises empataron\n";
	else cout << "El pais 2 gano";

}
