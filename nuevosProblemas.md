# PROBLEMA 1

Supongamos que  una empresa tiene 480 trabajadores que registran ("checan") su  entrada y salida  de la empresa. Cada registro de checada contiene la hora en minutos absolutos, es decir, desde las 00:00 -- si un trabajador checa entrada a las `08:10` y checa salida a las `16:30`, el registro de ese empleado indicará  `490 minutos` al entrar y `990 minutos al salir`. Al final de la jornada se tiene una secuencia de pares que indica a qué hora ha llegado y a qué hora se ha ido cada trabajador.  Los dos últimos datos de la secuencia que se capturan son dos ceros: `0 0`. Se quiere saber el porcentaje que han hecho como mínimo `8 horas = 480 minutos` y la cantidad de minutos extra que se han hecho.  

El programa tiene que ir leyendo los pares (variables enteras de entrada y salida) y calcular el tiempo trabajado por cada empleado. Entonces hay que contabilizar si el trabajador ha hecho como mínimo `480 minutos` o no. Al  mismo tiempo, si el empleado ha trabajado más de 8 horas hay que contar el exceso de minutos.  

## Diagramas
### Flujo de datos
![Flujo de datos](./assets/nuevosProblemas/dfd_p1.jpg)
 
# PROBLEMA 2

Una compañía de componentes electrónicos tiene los datos de las ganancias obtenidas en dos países distintos durante los últimos `N años`. Los datos son pares reales. Se quiere saber qué país ha obtenido mayor ganancia durante más años.  

## Diagramas
### Flujo de datos
![Flujo de datos](./assets/nuevosProblemas/dfd_p2.jpg)

# Notas
1. Realizar un menú (switch-case) para los dos problemas y el menú se debe de repetir hasta que se pulse la opción salir.  
2. Cada problema debe de ser desarrollado en un módulo o función.  


# Código

```c++
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
```
