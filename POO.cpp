#include <iostream>
using namespace std;
class Persona {
		//atributos
	protected :
		string nombres,apellidos,direccion,fn;
		int telefono;

		//
	protected :
		//Constructor

		Persona(string nom,string ape,string dir,int tel,string f) {
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fn = f;
		}
		//Metodos
		void mostrar();
		void agregar();
		void modificar();
		void eliminar();

};

