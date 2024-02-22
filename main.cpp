#include <iostream>
#include "Cliente.cpp"
using namespace std;

main(){
	string nit,nombres,apellidos,dirreccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: "
	cin>>nombres;
	cout<<"Ingresar Apellidos: "
	cin>>apellidos;
	cout<<"Ingresar Direccion: "
	cin>>direccion;
	cout<<"Ingresar Telefono: "
	cin>>telefono;
	//intanciar un objeto
	Clinte obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	
	cout<<"Datos del cliente"<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<","<<endl;
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
}
