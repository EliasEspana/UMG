#include <iostream>
using namespace std;
class Persona{
	//Atributos, los atributos son las caracteristicas de un objeto
	protected : string nombres, apellidos, direccion;
	int	telefono;
	//Costructor
	protected :
		Persona(){
		}
		Persona(string nom,string ape,string dir, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
		
	//metodo
	void mostrar();
};
