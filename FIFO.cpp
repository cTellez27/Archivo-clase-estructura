#include<iostream>
#include<malloc.h>

using namespace std;

struct alumno{
	int val=0;
	int codigo;
	char nombre[30];
	alumno *sig;
};
alumno *ap , *aux, *aux2;
int codigo;

int Registrar(){
	if (ap == NULL){
		ap = (struct alumno*) malloc (sizeof(struct alumno));
		cout<<"Digite su documento: ";
		cin>>ap->codigo;
		ap->sig = NULL;
		
		cout<<"Digite el nombre: ";
		cin>>ap->nombre;
		ap->sig = NULL;

		ap->val=1;
		ap->sig = NULL;

			system("cls");
		
	}else{
		aux = (struct alumno*) malloc (sizeof(struct alumno));
		cout<<"Digite su documento: "<<endl;
		cin>>aux->codigo;
		aux->sig = NULL;
		
		cout<<"Digite el nombre: "<<endl;
		cin>>aux->nombre;
		aux->sig = NULL;
		
		aux->val=2;
		aux->sig = NULL;
		aux2 = ap;
		while(aux2->sig != NULL){
			aux2 = aux2->sig;
		}
		aux2->sig = aux;
		aux2 = aux = NULL;
	
		free(aux);
		free(aux2);

			system("cls");
	}
	
	return 0;
}

int Mostrar(){
	for (aux = ap; aux!=NULL; aux=aux->sig){
		cout<<aux->val<<"  "<<aux->codigo<<"  "<<aux->nombre<<endl;
	}
	
		system("cls");
		
	return 0;
}

int main(){
	int opc = 0;


	do{
		cout<<"1. Registrar usuario."<<endl;
		cout<<"2.  Mostrar usuarios registrados"<<endl;
		cout<<"3.  Salir "<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
				Registrar();
			}break;
			case 2:{
				Mostrar();
			}break;
			default: cout<<"error de opcion";
		}
		
	}while(opc != 3);
	
	return 0;
}
