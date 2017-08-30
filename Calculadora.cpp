#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{

	void nada(){
	return 0;
	}
	nada;
	
 int l1,l2,op,s=0;
 int ar, pe;
 char noseusa;
 printf("Area y Perimetro de las figuras\n");
 printf("1 Triangulo\n");
 printf("2 Cuadrado\n");
 printf("3 Rectangulo\n");
 printf("4 Circulo\n");
 printf("5 Salir\n");
 printf("Escoja una opcion: ");
 scanf("%d",&op);
 switch(op)
 {
 case 1:
  {
   
   printf("Ingrese medida de la base: ");
   scanf("%d", &l1);
   printf("Ingrse medida de la altura: ");
   scanf("%d", &l2);
   ar=( l1 * l2 )/2;
   pe=(l1*2)+l2;
   printf("El Area es: %d y el perimetro es: %d",ar,pe); 
    break;
    break;
    
  }
  
 case 2:
  {
  
   printf("ingrese la medida de un lado: ");
   scanf("%d",&l1);
   ar=l1*l1;
   pe=l1*4;
   printf("El Area es: %d y el perimetro es: %d",ar,pe); 
   break;
  }
 case 3:
  {
   
   printf("ingresa la medida de la base: ");
   scanf("%d",&l1);
   printf("ingrese la medida de la altura: ");
   scanf("%d",&l2);
   ar=l1*l2;
   pe=(l1*2)+(l2*2);
   printf("El Area es: %d y el perimetro es: %d",ar,pe); 
   break;
  }
 case 4:
  {
   
   printf("ingrese la medida del radio: ");
   scanf("%d",&l1);
   ar=3.1416*l1;
   pe=(3.1416*2)*l1;
  printf("El Area es: %d y el perimetro es: %d",ar,pe); 
   break;
  }
  case 5:
   s=1;
		 
   
 }
}

