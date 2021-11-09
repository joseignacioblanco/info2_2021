//             TRABAJO PRACTICO Nº10 - JOSE BLANCO - 83621
//            --------------------------------------------
//             INFORMATICA I - PROFESOR ING. MARTIN NIEVAS

//------------------------------------------------------------------------------

//Directivas de preprocesador.-

#include <stdio.h> //biblioteca de funciones estandar de entrada y salida.-
#include <stdlib.h> //biblioteca para usar el system(cls)por ejemplo.-
#define LARGOR 30 //para la el arreglo de char que guarda el nombre de la herramienta.

// fin de las directivas de preprocesador.-

//------------------------------------------------------------------------------

// Definición de estructuras.-

struct registro{ //esta estructura de tipo registro es para guardar cada registro de herramienta con sus respectivos miembros.-
	int identificacion; //almacena el numero de identificacion de la herramienta. (un entero).
	char nombre[LARGOR]; // almacena el nombre de la herramienta (un puntero que apunta a una variable de tipo char).
	int unidades; // almacena la cantidad de ejemplares de la herramienta en cuestion.
	double precio; //almacena el precio de la herramienta.
	};
//fin de definicion de estructuras.-

//------------------------------------------------------------------------------

//Prototipado de funciones.-

void bienvenida(void);
int menu_principal(void);// despliega 4 opciones.
void mostrar_stock(FILE *ptr_archivo_en_disco,struct registro commodity);
void actualizar_registro(FILE *ptr_archivo_en_disco,struct registro articulo);
void eliminar_registro(FILE *ptr_archivo_en_disco,struct registro articulo);
void despedida(void);

//fin del prototipado de funciones.-

//------------------------------------------------------------------------------

// Aqui comienza el main con su magia.-

int main(void) {
	
	//declaracion de variables y estructuras que viven en el main.-
	
	int centinella = 1;//este centinellas me va a servir para los bucles del menu.
	int troupper = 1;// tambien me sirve para el reinicio al menu de la upcion 1.
	
	struct registro articulo = {0, "", 0, 0.0}; /*declaro una estructura de tipo
	registro que: ya definida arriba linea 19. Y ademas la inicializa
	como registro en blanco.*/
	
	FILE * ptr_archivo_en_disco; /* declaro un puntero que apunta a una estructura de tipo FILE
	para despues asignarle el puntero del archivo jarlguar.dat.-*/
	
	if((ptr_archivo_en_disco = fopen("hardware.dat","a+b")) == NULL)/*pregunto si puedo abrir
		el archivo en modo: ab+. en caso afirmativo lo abre o lo crea*/
		printf("ERROR!!: al intentar abrir el archivo hardware.dat");
	else{
		
		//......................................................................
		/* En esta partecita genero mi archivo en disco jarlguar.dat*/
		
		for(int i=0;i<100;i++){/*este for me escribe 100 registros en blanco dentro 
			del archivo en disco hardware.dat*/
			
			fwrite(&articulo,sizeof(struct registro),1,ptr_archivo_en_disco); /*fijate
			que la estructura "articulo" de tipo registro estaba inicializada "en blanco" */
		}
		
		//listo, mi archivo en disco jarlguar.dat ya esta creado, o no!!!.-
		//......................................................................
		
		fclose(ptr_archivo_en_disco);//cierra el archivo porque ya no lo necesito en modo ab+
	}
	
	bienvenida();//cartelito de presentacion del programa nomas.

	do{
		
		switch (menu_principal()){/*llamo a la fucion menu_principal para que maneje
			el switch: esta devolverá un entero del cero al tres que corresponde a cada caso*/
			
			//------------------------------------------------------------------
			
			case 1: //opcion uno: para listar stock de las herramientas.-
				
				mostrar_stock(ptr_archivo_en_disco, articulo);//lo manejo con la funcion que muestra el stock.
				
				printf(" *INGRESE 0 para volver al menu principal\n -->?"); //si no pone cero no vuelve al menu.
				
				do{
				scanf("%d",&troupper);
				}while(troupper != 0);		//troupper es el centinella de este bucle.
				if(troupper==0)
				
				
				
			break;
			//------------------------------------------------------------------
			
			case 2://opcion dos: para agregar herramientas.
				
				mostrar_stock(ptr_archivo_en_disco,articulo); //muestra en el encabezado el stock disponible.-
				actualizar_registro(ptr_archivo_en_disco,articulo);// esta funion me edita los registros.-
				
			break;
			//------------------------------------------------------------------
			
			case 3://opcion teres para eliminar un registro de herramienta.
				
				mostrar_stock(ptr_archivo_en_disco,articulo); //muestra en el encabezado el stock disponible.-
				eliminar_registro(ptr_archivo_en_disco,articulo);// esta funcion me elimina un registro especifico.-
				
			break;
			//------------------------------------------------------------------
			
			default:
				
				centinella =0; //me cambia el centinella de cero a uno para salir del programa.
				
			break;
			//------------------------------------------------------------------
		}
		
	}while(centinella!= 0); //condicion para salir del programa y despedirse.
	
	
	
	fclose(ptr_archivo_en_disco); //cierra el archivo porque ya no lo necesita.
	
	
	despedida(); //cartelito de despedida nomas.
	
	
	return 0;
}
//fin del main.-

//------------------------------------------------------------------------------

//Inicio de la función Bienvenida.-

void bienvenida(void){
	
	printf("\n\n");	//inicio de bienvenida.-
	
	printf("                ******************************\n");
	printf("                *                            *\n");
	printf("                *  Bienvenido al programa    *\n");
	printf("                * INVENTARIO DE HERRAMIENTAS *\n");
	printf("                *                            *\n");
	printf("                ******************************\n");
	printf("\n\n");
	
	system("pause"); //presione enter para continuar...
}


//fin de la funcion bienvenida.-

//------------------------------------------------------------------------------

//Inicio de la funcion menu_principal.-

int menu_principal(void){
	
	int opcion_seleccionada; //va guardar la opcion elegida para retornarla al swich.
	
	system("cls");
	
	printf("\n\n");
	puts("Este programa le ayudara a mantener actualizado el inventario de herramientas");
	printf("-----------------------------------------------------------------------------\n\n\n\n");
	puts(" *PRESIONE \"1\" Para ver las herramientas en stock.");
	printf("\n\n");
	puts(" *PRESIONE \"2\" Para agregar herramientas o modificar stock.");
	printf("\n\n");
	puts(" *PRESIONE \"3\" Para eliminar un registro.");
	printf("\n\n");
	puts(" *PRESIONE \"0\" Para salir del programa");
	
	
	do{ //para asegurarme que no le made basura al swich.-
		printf("\n\n su opción?-->");
		scanf("%d",&opcion_seleccionada);
	}while((0 > opcion_seleccionada) || (3 < opcion_seleccionada));
	
	system("cls");
	
	return opcion_seleccionada;
}
// fin de la funcion menu principal.

//-----------------------------------------------------------------------------

//Inicio de la funcion mostrar stock.

void mostrar_stock (FILE *ptr_archivo_en_disco,struct registro commodity){
	
	system("cls");
	
	if((ptr_archivo_en_disco = fopen("hardware.dat","rb"))==NULL)//pregunta si puede abrir el archivo binario en modo lectura.
		printf("ERROR!!: al intentar abrir el archivo hardware.dat");//por si no pudo abrirlo.
	else{
		printf("    %-10s%-30s%-10s%-15s\n","Ident","Articulo","Cantidad","Precio");//formatea lo que va a mostrar.
		printf("   ------------------------------------------------------------\n");
		while(!feof(ptr_archivo_en_disco)){//hasta que llegue al final de archivo.
			fread(&commodity,sizeof(struct registro),1,ptr_archivo_en_disco);//levanta la estructura correspondiente del archivo.
			if((commodity.identificacion!=0) && (commodity.nombre!=NULL)){//"si no esta en blanco" la imprime en pantala.
				printf("    %-10u%-30s%-10d%-15.2lf\n",commodity.identificacion,commodity.nombre,commodity.unidades,commodity.precio);
			}                                                                  
		}
		
		printf("\n\n\n");
		
	}fclose(ptr_archivo_en_disco);
}

//fin de la funcion mostrar stock.

//------------------------------------------------------------------------------

//Inicio de la funcion agregar herramientas.-

void actualizar_registro(FILE *ptr_archivo_en_disco,struct registro commodity){

	unsigned counter = 0;//me maneja los errores de ingreso de basura.
	
printf("\n\n\n  MODO: EDICION DE REGISTROS\n ");
printf(" --------------------------\n\n ");

	do{
		if(counter !=0)//para que la primera vez que ingrese dato no lo bolacee.
			puts("\n	ERROR DE INGRESO!  Ponga mas voluntad por favor.");
		counter++;
		
		printf("\n  Ingrese el numero de identificacion del producto a registrar (entre 1 y 100)\n\n  Ingrese '0' para salir del MODO EDICION:\n\n -->? ");
		scanf("%d",&commodity.identificacion);//pide el registro a cargar.
		
	}while(commodity.identificacion<0 || commodity.identificacion>100); //se asegura que no entre basura.

	while(commodity.identificacion != 0){ //condicion para que no entre si eligió salir.
		//este guail me prepara la estructura para luego meterla en el archivo.
		printf("\n   Introduce el nombre del producto: ");
		scanf(" %[^\n]s",commodity.nombre);
		printf("\n   Introduce la cantidad del producto: ");
		scanf("%d",&commodity.unidades);
		printf("\n   Introduce el precio del producto: ");
		scanf("%lf",&commodity.precio);						
		
		if((ptr_archivo_en_disco = fopen("hardware.dat","rb+"))==NULL){//pregunto si puedo abrirlo en modo lectura y escritura
			puts("  El archivo hardware.dat no pudo abrirse");
		}else{
			
			fseek(ptr_archivo_en_disco,(commodity.identificacion-1)*sizeof(struct registro),SEEK_SET);/* posiciona el 
			puntero que indica la posicion del offset en el lugar que elige el usuario*/
			fwrite(&commodity,sizeof(struct registro),1,ptr_archivo_en_disco);//lo escribe sin mas remedio.
			
		}fclose(ptr_archivo_en_disco);
		
		system("cls");
		
		mostrar_stock (ptr_archivo_en_disco,commodity);//actualia en pantalla lo que se agregO.
		
		printf("\n\n\n  MODO: EDICION DE REGISTROS\n "); //tiene que volver a mostrar el encabezado porque ya esta dentro del bloque guail
		printf(" --------------------------\n\n ");
		
		counter = 0;// reinicia la bolaciada.-
		
		do{//este guail prepara la bolaciada en caso de meter basura.
			if(counter !=0)
				puts("\n	ERROR DE INGRESO!  Ponga mas voluntad por favor.");
			counter++;
			
			printf("\n  Ingrese el numero de identificacion del producto (entre 1 y 100)\n\n  Ingrese '0' para salir del MODO EDICION:\n\n -->? ");
			scanf("%d",&commodity.identificacion);
			
		}while(commodity.identificacion<0 || commodity.identificacion>100);// controla si metiO basura el usuario.
		
	}


}
// fin de la funcion agregar herramientas.-


//------------------------------------------------------------------------------

//Inicio de la funcion eliminar_registro.- ver comentarios de la definicion de la funcion anterior.

void eliminar_registro(FILE *ptr_archivo_en_disco,struct registro commodity){
	
	unsigned counter = 0;//me maneja los errores de ingreso de basura.
	
	printf("\n\n\n  MODO: ELIMINAR REGISTROS (PRECAUCION!!!)\n ");
	printf(" ----------------------------------------\n\n ");
	
	do{
		if(counter !=0)
			puts("\n	ERROR DE INGRESO!  Ponga mas voluntad por favor.");
		counter++;
		
		printf("\n  Ingrese el numero de identificacion del producto a eliminar (entre 1 y 100)\n\n  Ingrese '0' para salir del MODO ELIMINAR REGISTRO:\n\n -->? ");
		scanf("%d",&commodity.identificacion);// pregunta por el archivo a eliminar.
		
	}while(commodity.identificacion<0 || commodity.identificacion>100);
	
	while(commodity.identificacion != 0){
		
		if((ptr_archivo_en_disco = fopen("hardware.dat","rb+"))==NULL){//pregunto si puedo abrirlo en modo lectura y escritura
			puts("  El archivo hardware.dat no pudo abrirse");
		}else{
			
			fseek(ptr_archivo_en_disco,(commodity.identificacion-1)*sizeof(struct registro),SEEK_SET);//posiciona el apuntador de offset donde el usuario.
			commodity.identificacion = 0;// me pone "en blanco" el identificador de herramienta para que no la imprima ya y quede "eliminada".
			fwrite(&commodity,sizeof(struct registro),1,ptr_archivo_en_disco);//aparte de poner en blanco el identificador, tambien pone "en blanco" sus atributos.
			
		}fclose(ptr_archivo_en_disco);
		
		system("cls");
		
		mostrar_stock (ptr_archivo_en_disco,commodity);//actualia en pantalla.
		
		printf("\n\n\n  MODO: ELIMINAR REGISTROS (PRECAUCION!!!)\n ");//ver comentarios de la funcion anterior.
		printf(" ----------------------------------------\n\n ");
		
		counter = 0;
		
		do{
			if(counter !=0)
				puts("\n	ERROR DE INGRESO!  Ponga mas voluntad por favor.");//bolaciada.
			counter++;
			
			printf("\n  Ingrese el numero de identificacion del producto a eliminar (entre 1 y 100)\n\n  Ingrese '0' para salir del MODO ELIMINAR REGISTRO:\n\n -->? ");
			scanf("%d",&commodity.identificacion);
			
		}while(commodity.identificacion<0 || commodity.identificacion>100);
		
	}
	
}

//fin de la funcion eliminar_registro.-

//------------------------------------------------------------------------------

//Inicio de la función Despedida.-

void despedida(void){
	
	system("cls");
	printf("\n\n");	//inicio de bienvenida.-
	
	printf("                ******************************\n");
	printf("                *                            *\n");
	printf("                *  Ha cerrado el programa    *\n");
	printf("                * INVENTARIO DE HERRAMIENTAS *\n");
	printf("                *        hasta luego...      *\n");
	printf("                ******************************\n");
	printf("\n\n");
}


//fin de la funcion despedida.-

//------------------------------------------------------------------------------


