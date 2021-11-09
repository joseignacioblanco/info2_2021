

	//       TRABAJO PRACTICO OBLIGATORIO Nº: 7 (JOSE BLANCO-83621-1R7)
	//       ---------------------------------------------------------


	// CONJUNTO DE DIRECTIVAS DE PREPROCESADOR.-(archivos cabecera)
#include <stdio.h>   // Biblioteca estandar imput-output.-
#include <stdlib.h>  // Esta biblioteca es para poder usar el rand y el system (cls).-
#include <time.h>    // Esta biblioteca me ayuda con time(NULL) semilla del rand.-
#include <stdbool.h> // Esta biblioteca me ayuda con los datos de tipo bool.-
#include <math.h> 	 //Esta biblioteca me habilita la potenciacion pow.-



	//Constantes definidas para operar con los switch de la MAIN.-
#define SUMA '1'
#define RESTA '2'
#define MULTIPLICACION '3'
#define ALEATORIO '4'

//------------------------------------------------------------------------------

	// CONJUNTO DE PROTOTIPADO DE LAS FUNCIONES.-
void bienvenida(char *nombre); //prototipo de la funcion bienvenida: Saluda y carga un arreglo de chares.-
char tipo_de_operacion(char *nombre); //prototipo de la funcion tipo de operacion a elegir: (devuelve la opcion en un unsigned).-
unsigned nivel_de_dificultad(void); //prototipo de la fincion nivel de dificultad a elegir: (devuelve el nivel en un unsigned).-
bool operacion_suma(unsigned cant_digitos); //prototipo de la funcion suma aleatoria.-
bool operacion_resta(unsigned cant_digitos); //prototipo de la funcion resta aleatoria.-
bool operacion_multiplicacion(unsigned cant_digitos); //prototipo de la funcion multiplicacion aleatoria.-
void variante_true(char*name); // Tira respuestas de motivacion al azar.-
void variante_false(char *name); //Tira respuestas de aliento al azar-
void conclusion(int *counter_ptr, char *name); //prototipo de la funcion conclusion recibe un puntero const a un unsigned que es el contador de aciertos.-
char reinicio (char *name,char *new_user); //prototipo de la funcion reinicio que cambia el centinela para reiniciar el do while.-
void despedida(void); //prototipo de la funcion de despedida: Saluda y hace tres pitidos como despedida.-

//------------------------------------------------------------------------------

	//FUNCION PRINCIPAL MAIN.-
int main(void) {
	
	//DEFINICION DE VARIABLES LOCALES AL MAIN.-
	char nuevo_usuario ='a';     //me guarda la opcion de 'c' continuar, 'n' nuevo usuario o 's' salir.-
	char nombre_del_usuario[20]; //cadena de caracteres para almacenar el nombre del usuario.-
	char type_selected = '0';    //variable que va a guardar el tipo de operacion elegido.-
	unsigned level_selected;     //variable que va a guardar el nivel de dificultad elegido.-
	
	do{ //reinicio del loop para un nuevo usuario.-
		
		bienvenida(nombre_del_usuario);//saluda y toma el apodo: le estoy enviando el identificador del arreglo que pasa como direccion de mem. de la primera posicion del arreglo.-
		
		printf("\n\n ¡¡HOLA %s, VAMOS A APRENDER MATEMATICAS!!\n\n",nombre_del_usuario); //fin de la bienvenida personalizada.-
		
		
		
		do{	//reinicio del loop del programa con el mismo user.-
			
			printf("\n");
			
			type_selected = tipo_de_operacion(nombre_del_usuario); /*le mando un puntero
			a nombre_del_usuario para que personalice el menu y guarda la opcion en la variable type_selected*/
			
			system("cls");
			
			puts("");
			
			srand(time(NULL)); //semilla del rand.-
			
			int contador=0; //cuenta los aciertos del usuario.-
			
			
			switch(type_selected){	//suma - resta - multiplicacion  - aleatorio; segun cual elija el usuario.-
				
				case SUMA:
					//la proxima linea me indica que opciones elegi de los menues.-
					printf("\n -INGRESASTE LA OPCION %c, Y EL NIVEL: %u. \n\n", type_selected, level_selected = nivel_de_dificultad());
					
					for(unsigned i=0 ; i<10 ; i++){/*bulce para hacer las 10 preguntas correspondientes.
						como son todos los bucles iguales, podria reemplazarlos por una funcion_operacion
						y adentro meterle ifes para que diga suma, resta, etc... igual para los signos y 
						las respectivas operaciones... pero salio asi y funciona piola nomas...*/
						printf(" %uº ",i+1); //numero de pregunta correspondiente.-
						if(operacion_suma(level_selected)== 0){ /*aqui evalua el booleano que me retorna la
							funcion, y creo que si es 0 es falso y si es otra cosa (por ejemplo 1) es verdero.
							pero yo lo hice para que funcione alrevez que si e 0 es true y si es 1 es false.
							se podria corregir para una proxima version.-*/
							variante_true(nombre_del_usuario);// responde que esta bien la respuesta.-
							contador++;//si la respuesta es correcta, el contador incrementa. sino, nada.-
						}
						else
							variante_false(nombre_del_usuario);//responde que esta mal la respuesta.-
					}	
					int *counter_ptr = &contador; /* me define un puntero a entero para apuntar el contador*/
					
					conclusion(counter_ptr, nombre_del_usuario); /*le manda el contenido del contador a la
					conclusion para que determine si aprobo o reprobo, el nombre de usuario se manda para personalizar la respuesta*/
				break;
				
				case RESTA: //ver los comentarios del case suma, son analogos.-
					
					printf("\n -INGRESASTE LA OPCION %c, Y EL NIVEL: %u. \n\n", type_selected, level_selected = nivel_de_dificultad());
					
					for(unsigned i=0 ; i<10 ; i++){
						
						printf(" %uº ",i+1);
						
						if(operacion_resta(level_selected)== 0){
							variante_true(nombre_del_usuario);
							contador++;
						}
						else
						   variante_false(nombre_del_usuario);
					}
					
					counter_ptr = &contador;
					
					conclusion(counter_ptr, nombre_del_usuario);
					
					
				break;
				
				case MULTIPLICACION: //ver los comentarios del case suma, son analogos.-
					
					printf("\n -INGRESASTE LA OPCION %c, Y EL NIVEL: %u. \n\n", type_selected, level_selected = nivel_de_dificultad());
					
					for(unsigned i=0 ; i<10 ; i++){
						
						printf(" %uº ",i+1);
						
						if(operacion_multiplicacion(level_selected)== 0){
							variante_true(nombre_del_usuario);
							contador++;
						}
						else
						   variante_false(nombre_del_usuario);
					}
					
					counter_ptr = &contador;
					
					conclusion(counter_ptr, nombre_del_usuario);
					
				break;	
				
				case ALEATORIO:
					
					
					printf("\n -INGRESASTE LA OPCION %c, Y EL NIVEL: %u. \n\n", type_selected, level_selected = nivel_de_dificultad());
					
					for(unsigned i=0 ; i<10 ; i++){ //para que haga las 10 preguntas.-
						
						printf(" %uº ",i+1);
						
						switch (rand()%3){ /* un switch controlado por el rand para que sea aleatoria
							la llamada a cada una de las operaciones disponibles. pero siempre con el 
							nivel de dificultad elegido al principio. El rand solo devuelve 0, 1 o 2*/
							
							case 0:
								
								if(operacion_suma(level_selected)== 0){
									variante_true(nombre_del_usuario);
									contador++;
								}
								else
								   variante_false(nombre_del_usuario);
								
							break;
							
							case 1:
								
								if(operacion_resta(level_selected)== 0){
									variante_true(nombre_del_usuario);
									contador++;
								}
								else
								   variante_false(nombre_del_usuario);
								
							break;	
							
							case 2:
								
								if(operacion_multiplicacion(level_selected)== 0){
									variante_true(nombre_del_usuario);
									contador++;
								}
								else
								   variante_false(nombre_del_usuario);
								
							break;
							
						}
						
					}	
					counter_ptr = &contador;
					
					conclusion(counter_ptr, nombre_del_usuario);
					
				break;
			}
		}
		while(reinicio(nombre_del_usuario, &nuevo_usuario) != 'n' && nuevo_usuario == 'c'); /* Este while
		siempre es falso excepto cuando elijo la opcion "c" de continuar con el mismo usuario: Entonces
		se queda dentro del loop y sigue como el mismo usuario.-*/
	}
	while(nuevo_usuario == 'n'); /* Este while siempre es falso excepto cuando elijo la opcion "n" (nuevo usuario):
	en este caso se queda en el loop y reinicia pidiendo un nuevo usuario.
	En el caso de haber elegido la opcion "s", los dos whiles son falsos y sale de ambos para continuar con la siguiente linea*/
	
	despedida(); //me muestra un mensaje de despedida y tres pitidos de alarma.-
	
	return 0; //este es el return del main.-
}
//	fin de la funcion MAIN.-



//------------------------------------------------------------------------------
//                          DEFINICION DE FUNCIONES
//                          -----------------------

	/*DEFINICION DE LA FUNCION DE BIENVEIDA: Saluda y carga el arreglo de
chares: nombre_del_usuario[20]. Recibe como parametro el identificador del
arreglo: nombre_del_usuario, que pasa como direccion de memoria de la primera
posicion del arreglo (esto equivale a pasarle un puntero que apunta al arreglo).
Tener en cuenta que la muncion modifica directamente el arreglo de chares y no una compia de este.-
*/
void bienvenida(char *nombre){ //*nombre es un puntero a char que apunta al arreglo nombre_del_usuario.-
	
	
	printf("\n\n");	//inicio de bienvenida.-
	
	printf("                *****************************\n");
	printf("                *                           *\n");
	printf("                *  Bienvenido al programa   *\n");
	printf("                *   INSTRUCCION ASISTIDA    *\n");
	printf("                *      POR COMPUTADORA      *\n");
	printf("                *                           *\n");
	printf("                *****************************\n");
	
	printf("\n\n");	//fin de la bienvenida.-
	
	puts(" -->  INGRESE SU NOMBRE Y PRESIONE \"ENTER\" PARA CONTINUAR CON EL PROGRAMA");
	/*fflush(stdin); ---> Esta instrucción me lipia el buffer standard input podria ir en
	lugar del espacio que esa antes del %s de la linea siguiente, pero es mucha polvora
	para lo que se desea.-*/
	scanf("%[^\n]s", nombre); /*no lleva &nombre porque es un arreglo de char,
	el identificador del arreglo ya es la direccion de memoria del primer elemento del arreglo.-
	Fijarse en la expresion regular que me lee todo salvo los \n  y se escribe [^\n].-
	Ver tambien que antes del %s va un espacio para que no se llene el estring con el
	ultimo enter anterior porque si este no esta, sucede que queda basura en el buffer
	y causa que el scanf pase de largo porque ya tiene metido un enter basura.-*/
	system("cls"); //me limpia la pantalla para dar lugar al opcionario.-
}
//fin de la definicion de la funcion BIENVENIDA.-



//------------------------------------------------------------------------------



/*DEFINICION DE LA FUNCION TIPO DE OPERACION: recibe como argumento un puntero a char
que apunta al nombre del usuario para poder personalizar el menú y pide ingrsar el 
tipo de operaciones con el que va a practicar. devuelve en forma de char la opcion elegida*/
char tipo_de_operacion(char *nombre){

	char opcion=0;
	do{
	printf("%s: ELIGE CON QUE TIPO DE OPERACIONES VAS A PRACTICAR:\n\n\n",nombre);
	puts("* SUMA SOLAMENTE: ---------------------------------> INGRESA 1.\n");
	puts("* RESTA SOLAMENTE: --------------------------------> INGRESA 2.\n");
	puts("* MULTIPLICACION SOLAMENTE: -----------------------> INGRESA 3.\n");
	puts("* UNA MEZCLA ALEATORIA DE TODOS LOS ANTERIORES: ---> INGRESA 4.\n");
	
	scanf("%c", &opcion);
	system("cls");
	}
	while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4');  /* Este loop
	me limita a elegir la opcion correcta y en caso de ingresar una opcion incorrecta 
	sigue insistiendo. Pordria haber puesto tambien que sean los mayores a '0' y
	los menores a '5' en la condicion del whille y funcionaria analogamente*/
		
	return opcion; //retorna al main la opcion de operacion que eligio el usuario.-
}
// fin de la funcion TIPO_DE_OPERACION.-



//------------------------------------------------------------------------------



/*DEFINICION DE LA FUNCION NIVEL DE DIFICULTAD: No recibe paremetros pero si me 
devueve un unsigned con la opcion elegida (nivel) para cargarla luego en (level_selected)
y poder operar con los digitos deseados.-*/
unsigned nivel_de_dificultad(void){
	
	unsigned nivel=1; // Lo inicializo en 1 para que el if que sigue sea falso la primera vez.
	
	do{
		
		if(nivel!= 1 && nivel!= 2 && nivel!= 3 && nivel!= 4 && nivel!= 5)
			printf("\n\n La funcion rand solo me permite generar nuemeros de hasta 5 digitos \n\n");
		
		puts("\n -AHORA ELIGE UN NIVEL DE DIFICULTAD:\n\n");
		puts("ES DECIR: ingresa la cantidad de digitos con las que quieres operar.\n\n");
		puts("Por ejemplo:\n");
		puts("*PARA OPERAR CON 1 DIGITO: ------> INGRESA 1.\n");
		puts("*PARA OPERAR CON 2 DIGITOS: -----> INGRESA 2.\n");
		puts("*PARA OPERAR CON 3 DIGITOS: -----> INGRESA 3.\n");
		puts("*PARA OPERAR CON 4 DIGITOS: -----> INGRESA 4.\n");
		puts("*PARA OPERAR CON 5 DIGITOS: -----> INGRESA 5.\n");
		
		
		scanf("%u",&nivel);
		
		system("cls");
	}	
	while(nivel!= 1 && nivel!= 2 && nivel!= 3 && nivel!= 4 && nivel!= 5);/* Este loop
	me controla que ingrese la opcion correcta de '1' a '5' e insiste si no es alguna
	de estas. podria haber puesto tambien en la condicion que evalua el while que nivel
	sea macor a cero y menor a 6 y funcionaria analogamente.-*/
	
	
	
	return nivel; //retorna al main la cantidad de digitos con la que elige orerar el usuario.-
}
// fin de la funcion NIVEL_DE_DIFICULTAD.-



//------------------------------------------------------------------------------



/*DEFINICION DE LA OPERACION SUMA: Recibe como parametros la cantidad de digitos 
con la que se debe hacer la operacion suma (en tipo unsigned) y devuelve
verdadero o falso en forma de booleano para luego contar cuantas respuestas fueron true*/
bool operacion_suma (unsigned cant_digitos){
	
int respuesta; //guarda el resultado de la operacion suma.-
int n1, n2; //son los sumandos.-
	

printf("Cuanto es %d + %d:  ", n1=rand() %(int)pow(10,cant_digitos), n2=rand() %(int)pow(10,cant_digitos));
/* Imprime la operacion a resolver y limita los digitos a 1, 2, 3, 4 o 5 segun defina el usuario
y lo hace a travez de limitar al rand aleatorio a que tire un numero entre 0 y 9, 0 y 99, 0 y 999, etc
hasta el  caso de 10^5 que es 99999 pero igual el rand solo llega hasta 36mil y pico creo.
Fijarse tambien que hay que hacer un casting a entero porque pow creo que devueve un float*/

scanf("%d",&respuesta); //se limita a pedir la respuesta.-


return respuesta == n1+n2 ? 0 : 1;//operador ternario que analiza si el resultado es verdadero o falso.-
}
// fin de la funcion OPERACION-SUMA.-



//------------------------------------------------------------------------------



/*DEFINICION DE LA OPERACION RESTA: Recibe como parametros la cantidad de digitos 
con la que se debe hacer la operacion resta (en tipo unsigned) y devuelve
verdadero o falso en forma de booleano para luego contar cuantas respuestas fueron true*/
bool operacion_resta (unsigned cant_digitos){
	
	int respuesta; //guarda el resultado de la operacion resta
	int minuendo, sustraendo;
	
	
	printf("Cuanto es %d - %d:  ", minuendo=rand() %(int)pow(10,cant_digitos), sustraendo=rand() %(int)pow(10,cant_digitos));
	/* Imprime la operacion a resolver y limita los digitos a 1, 2, 3, 4 o 5 segun defina el usuario
	y lo hace a travez de limitar al rand aleatorio a que tire un numero entre 0 y 9, 0 y 99, 0 y 999, etc
	hasta el  caso de 10^5 que es 99999 pero igual el rand solo llega hasta 36mil y pico creo.
	Fijarse tambien que hay que hacer un casting a entero porque pow creo que devueve un float*/
	
	scanf("%d",&respuesta); //solo pide la respuesta del usuario.-
	
	
	return respuesta == minuendo - sustraendo ? 0 : 1;//operador ternario que analiza si el resultado es verdadero o falso.-
}
// fin de la funcion OPERACION_RESTA.- 



//------------------------------------------------------------------------------



/*DEFINICION DE LA OPERACION MULLTIPLICACION: Recibe como parametros la cantidad de digitos 
con la que se debe hacer la operacion prducto (en tipo unsigned) y devuelve
verdadero o falso en forma de booleano para luego contar cuantas respuestas fueron true*/
bool operacion_multiplicacion (unsigned cant_digitos){
	
	int respuesta; //guarda el resutado del producto.-
	int factor_1, factor_2;
	
	
	printf("Cuanto es %d * %d:  ", factor_1= rand() %(int)pow(10,cant_digitos), factor_2= rand() %(int)pow(10,cant_digitos));
	/* Imprime la operacion a resolver y limita los digitos a 1, 2, 3, 4 o 5 segun defina el usuario
	y lo hace a travez de limitar al rand aleatorio a que tire un numero entre 0 y 9, 0 y 99, 0 y 999, etc
	hasta el  caso de 10^5 que es 99999 pero igual el rand solo llega hasta 36mil y pico creo.
	Fijarse tambien que hay que hacer un casting a entero porque pow creo que devueve un float*/
	
	scanf("%d",&respuesta); //solo pide la respuesta del usuario.-
	
	
	return respuesta == factor_1 * factor_2 ? 0 : 1;//operador ternario que analiza si el resultado es verdadero o falso.-
}
//fin de la funcion OPERACION_MULTIPLICACION.-



//------------------------------------------------------------------------------



/*DEFINICION DE FUNCION VARIANTE TRUE: Recibe como parametro el puntero al nombre 
que cargo el usuario para poder personalizar la respuesta y no devuelve nada. Consta
de un rand que me tira aleatoriamente un numero del 0 al 3 y que son las cuatro 
respuestas posibles de acierto*/
void variante_true(char *name){
	
	
	switch(rand()%4){
		
		case 0:
			
			printf("MUY BIEN %s!!!\n\n",name);
			
		break;
			
		case 1:
			
			puts("CORRECTO!!!\n");
			
		break;	
		case 2:
			
			puts("POLEEEEENTA!!!\n");
			
		break;	
		case 3:
			
			puts("GENIO!!!\n");
			
		break;
	}
}
//fin de la fincion VARIANTE_TRUE.-



//------------------------------------------------------------------------------



/*DEFINICION DE FUNCION VARIANTE FALSE: Recibe como parametro el puntero al nombre 
que cargo el usuario para poder personalizar la respuesta y no devuelve nada. Consta
de un rand que me tira aleatoriamente un numero del 0 al 3 y que son las cuatro 
respuestas posibles de desacierto*/
void variante_false(char *name){
	
	switch(rand()%4){
		
	case 0:
		
		puts("INCORRECTO :(\n");
		
		break;
		
	case 1:
		
		puts("INTENTA NUEVAMENTE\n");
		
		break;	
	case 2:
		
		printf("NO %s, SIGUE INTENTANDO\n\n",name);
		
		break;	
	case 3:
		
		puts("AVER...\n");
		
		break;
	}
}
//fin de la definicion de la funcion variante_false



//------------------------------------------------------------------------------



/*DEFINICION DE FUNCION CONCLUSION: Recibe como parametros un puntero de char al nombre 
que cargo el usuario para personalizar la conclusion y otro puntero a entero que 
apunta al contenido del contador de la cantidad de aciertos*/
void conclusion(int *counter_ptr,char *name){
	
	if(*counter_ptr *100/10 >= 75) //es verdadero si las respuestas correctas son mas de 7.-
		printf("\n -FELICITAIONES %s!!! Esta listo para pasar al siguiente nivel.\n\n\n Respuestas correctas %d%%\n\n\n", name, *counter_ptr*100/10);
	else
		printf("\n -%s pedile ayuda adicional al maestro.\n\n\n Respuestas correctas %d%%\n\n\n", name, *counter_ptr*100/10);
	
	system("pause"); //pone una pausa en el programa para poder visualizar mejor la conclusion.-
	system ("cls");
}
// fin de la funcion CONCLUSION.-



//------------------------------------------------------------------------------



/*DEFINICION DE LA FUNCION DE REINICIO: Recibe un puntero a char que apunta al
nombre_del_usuario para asi poder peronalizar el menu de reinicio y otro puntero
a char que apunta a nuevo_usuario para poder comparar la condicion de salida de 
los bucles de reinicio: si elige 'c' reinicia con el mismo usuario, si elige 'n'
reinicia para pedir un nuevo usuario y si elige 's' sale de ambos loops.
Fijarse que el retorno es doble: uno a travez del return y otro atravez de modificar
la variable nuevo_usuario por medio del puntero *new_user porque despues se evalua
dos veces la condicion y no alcanza con un solo return.-*/
char reinicio(char *name, char *new_user){
	
	char centinela_del_while;
	
	do{
		printf("\n\n\n\n\n");
		
		printf("\t# SI DESEA CONTINUAR COMO %s INGRESE \"c\" \n\n", name);
		printf("\t# SI DESEA REINICIAR CON UN NUEVO USUARIO INGRESE \"n\"\n\n");
		printf("\t# SI DESEA SALIR DEL PROGRAMA INGRESE \"s\" \n ");
		
		printf("\n");
		
		scanf(" %c", &centinela_del_while);
		
		system("cls");
		
		if(centinela_del_while == 'c')
			break;
		if(centinela_del_while == 'n')
			break;
	}	
	
	while(centinela_del_while != 's');
	
	return *new_user = centinela_del_while; //retorna al while la decision de reiniciar o salir.-
}
//fin de la funcion REINICIO.-



//------------------------------------------------------------------------------



//DEFINICION DE LA FUNCION DESPEDIDA: Solo muestra el mensaje de despedida.-
void despedida(void){
	
	system("cls");
	
	printf("\n\n");
	
	printf("                    +++++++++++++++++++++++++++\n");
	printf("                    +                         +\n");
	printf("                    +     FIN DEL PROGRAMA!   +\n");
	printf("                    +     ENTER PARA SALIR!   +\n");
	printf("                    +      \a\a\a                   +\n");
	printf("                    +++++++++++++++++++++++++++\n");
	// los \a\a\a me tiran un trio de alarma para avisar que el programa finalizo.-
}
//fin de la funcion DESPEDIDA.-
