#include<stdlib.h>
#include<stdio.h>

//Declaracion de la estructura

struct Detalles{
	char ciudad[20];
	char empleo[20];
	double salario;
	
};

struct Info_usuario{
	char nombre[20];
	struct Detalles det_usuario;
	char apellido[20];
	int edad;
	char pais[20];
}usuarios[4];

//Prototipado de las funciones
void Obtener();
void Mostrar();
void BuscarEdad();
void BuscarNombre();
void Salir();
void Menu();

int main(){
	Menu();
	system("pause");
	
	return 0;
}

void Obtener(){ //LLenamos los arreglos del usuario con los datos solicitados
	for(int i=0; i<4; i++){
		fflush(stdin);
		printf("Ingrese el nombre del usuario #%d: ", i+1);
		gets(usuarios[i].nombre);
		fflush(stdin);
		printf("Ingrese el apellido del usuario #%d: ", i+1);
		gets(usuarios[i].apellido);
		fflush(stdin);
		printf("Ingrese la edad del usuario #%d: ", i+1);
		scanf("%d", &usuarios[i].edad);
		fflush(stdin);
		printf("Ingrese el pais del usuario #%d: ", i+1);
		gets(usuarios[i].pais);
		fflush(stdin);
		printf("Ingrese la ciudad de residencia del usuario #%d: ", i+1);
		gets(usuarios[i].det_usuario.ciudad);
		fflush(stdin);
		printf("Ingrese el empleo del usuario #%d: ", i+1);
		gets(usuarios[i].det_usuario.empleo);
		fflush(stdin);
		printf("Ingrese el salario del usuario #%d: ", i+1);
		scanf("%lf", &usuarios[i].det_usuario.salario);
		fflush(stdin);
		system("cls");
	}
};


void Mostrar(){ //Mostrando los datos almacenados en cada uno de los arreglos 
	
	for(int i=0; i<4; i++){
		
		printf("_____________________________\n");
		printf("Usuario #%d\n", i+1);
		printf("Nombre: %s\n", usuarios[i].nombre);
		printf("Apellido: %s\n", usuarios[i].apellido);
		printf("Edad: %d\n", usuarios[i].edad);
		printf("Pais: %s\n", usuarios[i].pais);
		printf("Ciudad: %s\n", usuarios[i].det_usuario.ciudad);
		printf("Empleo: %s\n", usuarios[i].det_usuario.empleo);
		printf("Salario: %lf\n", usuarios[i].det_usuario.salario);
	}
};

void BuscarEdad(){ //Sistema de busqueda de usuarios por la edad registrada
	
	int edades, encontrado = 1;
	
	printf("__________________________\n");
	printf("Ingrese la edad a buscar: ");
	scanf("%d", &edades);
	printf("__________________________\n");
	
	for(int i=0; i<4; i++){
		if(usuarios[i].edad== edades){
			encontrado = 1;
			printf("__________________________\n");
			printf("Usuario #%d", i+1);
			printf("Nombre: %s\n", usuarios[i].nombre);
			printf("Apellido: %s\n", usuarios[i].apellido);
			printf("Edad: %d\n", usuarios[i].edad);
			printf("Pais: %s\n", usuarios[i].pais);
			printf("Ciudad: %s\n", usuarios[i].det_usuario.ciudad);
			printf("Empleo: %s\n", usuarios[i].det_usuario.empleo);
			printf("Salario: %lf\n", usuarios[i].det_usuario.salario);
		}
	};
	
	if(encontrado == 0){
		
	printf("__________________________\n");
	printf("No hay usuarios con la edad de %d", edades);
	printf("__________________________\n");	
	};
};

void Salir(){//Texto mostrado al terminar el programa
	
	printf("Gracias! Que tenga un lindo dia B)!");
	
};

void Menu(){//Menu de opciones del programa
	
	int opc;
	
	do{
	
	printf("\t\tMENU\n\n");
	printf("1.Obtener datos de los usuarios.\n2.Mostrar datos de los usuarios.\n3.Buscar usuario por la edad.\n4.Salir.\n");
	printf("Seleccione una opcion: ");
	scanf("%d", &opc);
	
	system("cls");
	
	switch(opc){
		
		case 1: Obtener();
		break;
		
		case 2: Mostrar();
		break;
		
		case 3: BuscarEdad();
		break;
		
		case 4: Salir();
		break;
		
		default: printf("Opcion invalida, intente de nuevo.");
	}
	
}while(opc != 4); //Condicion para que se deje de repetir el programa
	
};
