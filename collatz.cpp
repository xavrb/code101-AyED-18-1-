#include <iostream>

int collatzSeries(int);

int main(void){
	if(collatzSeries(500000000)) std::cout <<"Cálculo exitoso"; // se manda a llamar a la funcion de collatz
	return 0;
}

int collatzSeries(int an){
	if(!an){ // an es 0, es el caso trivial -- no se hace nada.
		std::cout <<"Caso trivial, saliendo...\n";
		return 0;
		}
	else{	//an es mayor = 1
		std::cout << "\n Serie de collatz para " << an<< " \n";
		int a_n_1 = an;
		while(an>1){
			std::cout<<an<<"\t";
			if((a_n_1%2)==0){ // Es par
				an=a_n_1/2;
	 
			}else{		// Es impar
				an=(3*a_n_1)+1;
			}		
			a_n_1=an;
		}
		std::cout << an << "\n";
	return 1;
	}
}
