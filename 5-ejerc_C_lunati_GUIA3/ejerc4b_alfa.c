

/*4-b. Valiéndose de la función del punto anterior, escribir una función que
calcule la longitud total de un segmento de n puntos bidimensionales, respondiendo
al siguiente prototipo: double longitud_segmento(double puntos[][2], size_t n);*/




#include<stdio.h>
#include<math.h> /*recordar construir enlazando con -lm*/

#define DIM 2 /*coordenadas en el plano*/
#define CANT 100 /*cantidad maxima de puntos a ingresar*/

 double dist_plano(double[], double[]); /*prototipo de la funcion distancia entre dos puntos en el plano*/
 double long_segm(double puntos[][2], size_t n_points);

int main(void){

 int i, n_points = 0;
 double puntos[CANT][2] = {0};

 printf("\n Ingrese la cantidad de puntos que desea ingresar: ");
 scanf("%d",&n_points);

 for(i = 0; i < n_points; i++){   /*este for carga todos los puntos que ingresa el usuario en una matriz de (n_points x 2)*/
     printf("\n Ingrese el punto numero %d (x,y): ",i+1);
     scanf(" %lf %lf", &puntos[i][0], &puntos[i][1]);
 }

 printf("\n Los puntos ingresados son:\n");
 for(i = 0; i < n_points; i++)
 printf(" p%d = (%.2lf ; %.2lf)\n", i+1, puntos[i][0] ,puntos[i][1]);

 printf("\n\n La longitud de arco total es: %.2lf\n\n",long_segm(puntos, n_points));

 puts("FIN DEL PROGRAMA\n");

 return 0;
}



 double long_segm(double puntos[][2], size_t n_points){
   unsigned int i;
   double longitud_arco = 0;

    for(i=1; i < n_points; i++){

       longitud_arco += dist_plano(puntos[i-1], puntos[i]);

       printf("\n La distancia entre p%u y p%u es: %.2lf",i , i+1, dist_plano(puntos[i-1], puntos[i]));
    }
   return longitud_arco;
 }



double dist_plano(double p1[], double p2[])
 {
  return (sqrt(pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2)));
 }

