#include<iostream>

using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
};
int main(){
int fila=0,columna=0;
Estudiante estudiante;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna;	
estudiante.pm_notas = new  int *[fila];
estudiante.codigo = new int [fila];
estudiante.nombre = new string [fila];
for (int i=0;i<fila;i++){
estudiante.pm_notas[i] = new int[columna]; 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"Ingrese Codigo:";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre:";
	getline(cin,estudiante.nombre[i]);
for (int ii=0;ii<columna;ii++){
	cout<<"Ingrese Nota "<<ii<<":";
	cin>>*(*(estudiante.pm_notas+i)+ii);
	cin.ignore();
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"Codigo: "<<estudiante.codigo[i]<<" Nombre:"<<estudiante.nombre[i]<<endl;
	
for (int ii=0;ii<columna;ii++){
	cout<<*(*(estudiante.pm_notas+i)+ii)<<endl;
	}
	cout<<"------------------------------------"<<endl;
}


// Liberar el espacio reservado en memoria
for (int i=0;i<fila;i++){
	delete [] estudiante.pm_notas[i];
}

delete [] estudiante.pm_notas;
delete [] estudiante.codigo;
delete [] estudiante.nombre;



	system("PAUSE");
	return 0;	
}

