#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	private : int codigo_empleado;
	private : string puesto;
		
	public:
			Empleado(){
		}	
	
	Empleado(string nom, string ape, string dir, string tel, string fe_na, string pto, int code)
		: Persona (nom, ape, dir, tel, fe_na){
			codigo_empleado=code;
			puesto=pto;
	}

};
	

