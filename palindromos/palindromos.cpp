#include <iostream>
#include <string.h>
#define noAlumnos 2
using namespace std;
class palindromo{
	private: 
		char palabra[100];
		int tamanio;
		

	public:
		palindromo() {// constructor
			int x;
			for(x=0;x<100;x++){
				palabra[x]='\0';		
			}
			tamanio = 0;
		}
		~palindromo(){} // destructor
		void ingresacadena();
		bool verificar(); // verifica si la palabra es un palindromo 
		
		

};


class alumno{
	private: 
		string nombre;
		float calificaciones[8];
		float promedio;
		bool aprobado;
		

	public:
		alumno() {// constructor

			int xx;
			for(xx=0;xx<8;xx++){
				calificaciones[xx] = 0.0;		
			}
			promedio = 0.0;
			aprobado = false;
		}
		~alumno(){} // destructor
		void ingresaCalificaciones(int );
		void muestraCalificaciones(int );
		float calculaPromedioInd();
 
		
		

};


int main(){
	// se crean los objetos
	palindromo p;
	alumno a[noAlumnos];
	float promedioGrupal=0.0;
	int aprobados=0;

	char opc ='\0';
	cout << "INGRESE OPCION";
	cin >> opc;


	switch(opc){
		case 'p':

			p.ingresacadena();
			p.verificar();
			break;

		case 'a':
			int numAlumno;

			for(numAlumno=0; numAlumno<noAlumnos; numAlumno++){ // capturar datos
				cout << "\nIngrese calificaciones de alumno"<<numAlumno;
				a[numAlumno].ingresaCalificaciones(numAlumno);
				a[numAlumno].muestraCalificaciones(numAlumno);
				cout << "\n(Promedio individual"<<a[numAlumno].calculaPromedioInd()<<")";
				if(a[numAlumno].calculaPromedioInd()>=6){
					aprobados++;
				}
				promedioGrupal = promedioGrupal + a[numAlumno].calculaPromedioInd();
				

			}
			
			 
			cout << "\nPromedio Grupal: " << promedioGrupal/noAlumnos;
 			cout << "\n Aprobados:"<< aprobados<< "\nReprobados:"<<noAlumnos - aprobados;
		break;

		default:
		break;
	}












return 0;

}

void palindromo::ingresacadena(){
cout << "Ingrese palabra";
cin >> palabra;
cout << "Palabra a analizar: \t"<<palabra<<  "\n";


}

bool palindromo::verificar(){
	tamanio = strlen(palabra);
	cout << "La palabra mide "<< tamanio << "caracteres. \n";
	char auxiliar[tamanio];
	int x;
	for(x=0;x<tamanio+1;x++){ // inciializar cadena auxiliar con nulos
		auxiliar[x]='\0';
	}

	int y=0;

	for(x=tamanio-1; x>-1; x--){
		auxiliar[y]=palabra[x];
		y++;
	}
	if(strcmp(auxiliar, palabra)==0){
		cout << "PALINDROMO";
	}else{
		cout << "No es palindromo";	
}
}



void alumno::ingresaCalificaciones(int numAlumno){

	int cal;
	for(cal=0;cal<8;cal++){
		cout << "\nIngrese calificacion"<<cal+1<< " para alumno "<<numAlumno<< ">> \t";
		cin >> calificaciones[cal];
	}
}


void alumno::muestraCalificaciones(int numAlumno){
	cout << "Mostrando calificaciones";
	int cal;
	for(cal=0;cal<8;cal++){
		cout << "\nAlumno["<<numAlumno<<"], Calificación "<< cal+1<<":"<< calificaciones[cal];
	}
}






float alumno::calculaPromedioInd(){
	float promedio=0.0;
	int cal; 
	for(cal=0;cal<8;cal++){
		promedio = promedio + calificaciones[cal];
	}
	promedio = promedio /8;
 
	return promedio;
}















