// 221117.cpp : Defines the entry point for the console application.
//

 
#include <iostream>
#include <string>

using namespace std;


class PERRO{
	public:
		//PERRO(string, string, string);

		void ladrar();
		void morder();
	private:
		string cola;
		string colorOjos;
		string tamanio;
};

class chihuahua :public PERRO {
	private:
		string colorpelaje;
		string tipo = "CHIHUAHUA";
	public:
		void ladrarEnChihuahua();

	
};





class doberman :public PERRO {
	private:
		string agresivo="SI";
	public:
		void matarALV();
};


class pastoraleman :public PERRO {
	private:
		string color;
	public:
		void Detector();
};

/*PERRO::PERRO(string cola, string tamanio, string colorOjos) {
	cola = ' ';
	tamanio = ' ';
	colorOjos = ' ';

} */




int main(){

	cout << "Perro: ";

	chihuahua Aquiles;
	doberman Sparky;
	pastoraleman Zeus;



	Aquiles.ladrarEnChihuahua();
	Sparky.matarALV();
	Zeus.Detector();

    return 0;
}

void PERRO::ladrar() {
	cout << "Guau";

}



void PERRO::morder() {
	cout << "GRRR";

}

void pastoraleman::Detector() {

	cout << "Huelo algo  ";

}
void doberman::matarALV(){
	cout <<"Kills you in doberman";

}

void chihuahua::ladrarEnChihuahua(){
	cout<< " CHIHAHAHAHAH";
}




