#include <iostream>
using namespace std;

class Persona{
		//codigo de clase
		public :	string nombres, apellidos, direccion, fecha_nacimiento;
			 int telefono;
		
		//constructor
		protected :
			Persona (){
			}
			
			Persona (string nom, string ape, string dir, string fn, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fn;
				telefono = tel;
			}
			//metodos
			void crear();
			void leer();
			void mostrar(	cout<<"Metodo ingresado...";
			);
			void agregar();
			
	
};