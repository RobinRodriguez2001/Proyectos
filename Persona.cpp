#include <iostream>

using namespace std;


class Persona {
	//atrivutos
	protected :	string nombres, apellidos, direccion, telefono, fecha_nacimiento;
		
		//constructor
		protected :
			Persona(){
			}
			Persona(string nom, string ape, string dir, string tel, string fe_na){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefonos = tel;
				fecha_nacimiento = fe_na;
			}
	
	//metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();
		
};
