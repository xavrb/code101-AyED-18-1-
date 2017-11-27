#include <iostream>
#include <string.h>

using namespace std;
class palindromo{
	private: 
		char palabra[100];
		int tamanio;
		bool espalindromo;

	public:
		void ingresacadena();
		bool verificar(); // verifica si la palabra es un palindromo 

		

};
 


int main(){



palindromo p;
p.ingresacadena();
p.verificar();






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

