#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <iostream>
#include<list>
using namespace std;
void triangulo ();
void ingles();
void juego();
void OcultarCursor();
void tablas();
float cambio=0,PI=3.141592654,nrads;
int i,x=79;
float DIF,DIF2;
float L1,L2,L3;
float A1,A2=90,A3;
float s,c,t;

void triangulo_medidas ();
void gotoxy (int x,int y);
void presentacion ();
void geometria ();
void lectura ();
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
int main ()
{
	int opcion;
	do
	{

	system ("color 70	");
	presentacion ();
	gotoxy(0,7);
	printf("by: MARIO Y ABRAHAM");
	gotoxy(27,7);
	printf("%cQu%c prueba desea ejecutar?\n",168,130);
	gotoxy(30,8);
	printf("1.- GEOMETRIA\n");
	gotoxy(30,9);
	printf("2.- INGLES\n");
	gotoxy(30,10);
	printf("3.- LECTURA\n");
	gotoxy(30,11);
	printf("4.- JUEGO\n");
	gotoxy(30,12);
	printf("5.- SALIR\n");
	gotoxy(30,13);
	scanf("%d",&opcion);
	system("cls");
	switch(opcion)
	{
		case 1:
			geometria ();
			gotoxy(1,30);
			system("pause");
			system("cls");
			break;
		case 2:
			ingles();
			gotoxy(1,30);
			system("pause");
			system("cls");
			break;
		case 3:
			lectura ();
			gotoxy(1,30);
			system("pause");
			system("cls");
			break;
		case 4:
			juego();
			gotoxy(1,30);
			system("pause");
			system("cls");
			break;
	}

	}
	while(opcion<5);
	
	gotoxy(11,5);
	return 0;
}
void ingles()
{
	int puntos=0;
	char letra='c',nombre[15],objeto[15],animal[15],comida[15],ciudad[15];
	
	printf("BIENVENIDO A LA PRUEBA DE INGLES\n");
	printf("\n");
	printf("Juego de BASTA!!!\n");
	printf("Instrucciones: El juego consiste escribir en cada uno de los campos\n");
	printf("las palabras que sepas que inician con la letra asignada\n");
	printf("*ojo*:todas las palabras tienen que ser escritas correctamente en ingles\n");
	printf("\n");
	
	printf("!!!Comencemos!!!\n");
	tablas();
	
	gotoxy(5,14);
	printf("%c",letra);
	
	gotoxy(14,14);
	cin>>nombre;	
	if(nombre[0]=='c')
	{
		
		puntos=puntos+10;
		gotoxy(110,14);
		printf("%d",puntos);
	}
	if(nombre[0]!='c')
	{
		gotoxy(110,14);
		printf("%d",puntos);
	}
	gotoxy(34,14);
	cin>>objeto;
	if(objeto[0]=='c')
	{
		
		puntos=puntos+10;
		gotoxy(110,14);
		printf("%d",puntos);
	}
	if(objeto[0]!='c')
	{
		gotoxy(110,14);
		printf("%d",puntos);
	}
	gotoxy(54,14);
	cin>>animal;
	if(animal[0]=='c')
	{
		
		puntos=puntos+10;
		gotoxy(110,14);
		printf("%d",puntos);
	}
	if(animal[0]!='c')
	{
		gotoxy(110,14);
		printf("%d",puntos);
	}
	gotoxy(73,14);
	cin>>comida;
	if(comida[0]=='c')
	{
		
		puntos=puntos+10;
		gotoxy(110,14);
		printf("%d",puntos);
	}
	if(comida[0]!='c')
	{
		gotoxy(110,14);
		printf("%d",puntos);
	}
	gotoxy(92,14);
	cin>>ciudad;
	if(ciudad[0]=='c')
	{
		
		puntos=puntos+10;
		gotoxy(110,14);
		printf("%d",puntos);
	}
	if(ciudad[0]!='c')
	{
		gotoxy(110,14);
		printf("%d",puntos);
	}
}

void gotoxy(int x, int y)
{
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	
	SetConsoleCursorPosition(hCon, dwPos);
	
}
void tablas()
{
	int i;
	for(i=10;i<20;i++)
	{
		gotoxy(10,i);
		printf("*");
		
	}
	for(i=10;i<20;i++)
	{
		gotoxy(30,i);
		printf("*");
		
	}
	for(i=10;i<20;i++)
	{
		gotoxy(50,i);
		printf("*");
		
	}
	for(i=10;i<20;i++)
	{
		gotoxy(70,i);
		printf("*");
		
	}
	for(i=10;i<20;i++)
	{
		gotoxy(90,i);
		printf("*");
		
	}
	for(i=10;i<20;i++)
	{
		gotoxy(105,i);
		printf("*");
	}
	for(i=10;i<20;i++)
	{
		gotoxy(118,i);
		printf("*");
	}
		for(i=10;i<20;i++)
	{
		gotoxy(0,i);
		printf("*");
	}
	
	for(i=0;i<119;i++)
	{
		gotoxy(i,9);
		printf("*");
		gotoxy(i,20);
		printf("*");
		Sleep(50);
		
	}	
	gotoxy(3,10);
	printf("Letter");
	Sleep(30);
	
	gotoxy(18,10);
	printf("Name");
	Sleep(30);
	
	gotoxy(37,10);
	printf("Object");
	Sleep(30);
	
	gotoxy(58,10);
	printf("Animal");
	Sleep(30);
	
	gotoxy(79,10);
	printf("Food");
	Sleep(30);
	
	gotoxy(92,10);
	printf("City/Country");
	Sleep(30);
	
	gotoxy(109,10);
	printf("Puntos");
	Sleep(30);
}


void pintar_limites()
{
	for(int i = 2; i<78 ; i++)
	{
		gotoxy(i,3); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	for(int i=4 ; i< 33 ; i++)
	{
		gotoxy(2,i); printf("%c",186);
		gotoxy(77,i); printf("%c",186);
	}
	gotoxy(2,3); printf("%c",201);
	gotoxy(2,33);printf("%c",200);
	gotoxy(77,3);printf("%c",187);
	gotoxy(77,33);printf("%c",188);
}


void presentacion ()
	{
		int i,m,x;
		for(i=5;i>0;i--)
	{
			
		gotoxy(i,1);
		printf("*");
		Sleep(50);
	}
	for(i=1;i<6;i++)
	{
		gotoxy(1,i);
		printf("*");
		Sleep(50);
	}
	for(i=1;i<6;i++)
	{
		gotoxy(i,5);
		printf("*");
		Sleep(50);
	}

	for(i=1;i<6;i++)
	{
		gotoxy(7,i);
		printf("*");
		Sleep(50);
	}



	for(i=1;i<6;i++)
	{
		gotoxy(7,i);
		printf("*");
		Sleep(50);
	}


	for(i=8;i<10;i++)
	{
		gotoxy(i,3);
		printf("*");
		Sleep(50);
	}

		gotoxy(8,1);
		printf("*");
		Sleep(50);
		
		gotoxy(9,1);
		printf("*");
		Sleep(50);
		
		gotoxy(10,2);
		printf("*");
		Sleep(50);
		
		
		gotoxy(8,5);
		printf("*");
		Sleep(50);
		
		gotoxy(9,5);
		printf("*");
		Sleep(50);
		
		gotoxy(10,4);
		printf("*");
		Sleep(50);
		
		for(i=12;i<17;i++)
		{
		gotoxy(i,1);
		printf("*");
		Sleep(50);
		}
		for(i=1;i<6;i++)
		{
		gotoxy(14,i);
		printf("*");
		Sleep(50);
		}
		
		for(i=3;i<6;i++)
		{
		gotoxy(18,i);
		printf("*");
		Sleep(50);
		}
		gotoxy(18,1);
		printf("*");
		Sleep(50);
		
		for(i=21;i<25;i++)
		{
		gotoxy(i,1);
		printf("*");
		Sleep(50);
		}
		for(i=2;i<3;i++)
		{
		gotoxy(20,i);
		printf("*");
		Sleep(50);	
		}		
		for(i=21;i<25;i++)
		{
		gotoxy(i,3);
		printf("*");
		Sleep(50);
		}
		gotoxy(25,4);
		printf("*");
		Sleep(50);
		for(i=21;i<25;i++)
		{
		gotoxy(i,5);
		printf("*");
		Sleep(50);
		}
		x=32;
		for(i=5;i>0;i--)
		{
				
			gotoxy(x,i);
			printf("*");
			Sleep(50);
			x=x+1;
		}
		x=36;
		for(i=5;i>0;i--)
		{
				
			gotoxy(x,i);
			printf("*");
			Sleep(50);
			x=x+1;
		}
		gotoxy(33,2);
		printf("*");
		Sleep(50);
		gotoxy(31,4);
		printf("*");
		Sleep(50);
		gotoxy(41,2);
		printf("*");
		Sleep(50);
		gotoxy(37,2);
		printf("*");
		Sleep(50);
		gotoxy(35,4);
		printf("*");
		Sleep(50);
		gotoxy(39,4);
		printf("*");
		Sleep(50);
		
		for(i=1;i<6;i++)
		{
			gotoxy(49,i);
			printf("*");
			Sleep(50);
		}
			x=46;
			for(i=3;i>0;i--)
		{
				
			gotoxy(x,i);
			printf("*");
			Sleep(50);
			x=x+1;
		}
		for(i=46;i<51;i++)
		{
			gotoxy(i,3);
			printf("*");
			Sleep(50);
		}
		gotoxy(54,2);
		printf("*");
		Sleep(50);
		for(i=55;i<59;i++)
		{
			gotoxy(i,1);
			printf("*");
			Sleep(50);
		}
		gotoxy(59,2);
		printf("*");
		Sleep(50);
		x=59;
		for(i=2;i<6;i++)
		{
				
			gotoxy(x,i);
			printf("*");
			Sleep(50);
			x=x-1;
		}
		for(i=56;i<60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(50);
		}
		
	}
void geometria ()
{
	system("cls");
 	/*Convertir los radianes a grados
    NumGrados=Radianes*(180/PI)*/
    /*Convertir los grados a radianes
    NumRadianes=Grados*(PI/180)*/
	gotoxy(0,1);
	printf("---hola BIENVENIDO---");
	triangulo();
	gotoxy(0,2);
	printf("\n");


	gotoxy(0,3);
	printf("EN ALGUNAS OCACIONES NO SERA POSIBLE RESOLVER TU TRIANGULO");
	Sleep(500);
	gotoxy(0,3);
	printf("                                                           ");
	gotoxy(0,3);
	printf("EN ALGUNAS OCACIONES NO SERA POSIBLE RESOLVER TU TRIANGULO");
	gotoxy(0,5);
	printf("%cCu%cles medidas son las que sabes sobre tu triangulo\n",168,160);
	printf("\n");
	printf("Selecciona la primera medida ");
	scanf("%f",&DIF);
	printf("Seleccione tu segunda medida ");
	scanf("%f",&DIF2);

	if((DIF==4)&&(DIF2==5))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 4\n");
		printf("-dame la medida de ese lado ");
		scanf("%f",&L1);
		printf("Tambi%cn has escogido 5\n",130);
		printf("Dame la medida de ese lado ");
		scanf("%f",&L2);
		L3=sqrt((L1*L1)+(L2*L2));
		t=L1/L2;
		A3=atan(t);
		A3=A3*(180/PI);
		A1=180-(A3+A2);
		triangulo_medidas();	
	}	
	
	
	if((DIF==5)&&(DIF2==4))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 5\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L2);
		printf("Tambi%cn has escogido 4\n",130);
		printf("-dame la medida de ese lado ");
		scanf("%f",&L1);
		L3=sqrt((L1*L1)+(L2*L2));
		t=L1/L2;
		A3=atan(t);
		A3=A3*(180/PI);
		A1=180-(A3+A2);
		triangulo_medidas();
	}
	
	
	if((DIF==4)&&(DIF2==1))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 4\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		printf("Tambi%cn has escogido 1\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		A3=180-(A1+A2);
		A1=A1*(PI/180);
		t=tan(A1);
		L2=t*(L1);
		L3=sqrt((L1*L1)+(L2*L2));
		A1=A1*(180/PI);
		triangulo_medidas();    
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	if((DIF==1)&&(DIF2==4))
	{
			/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 1\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		printf("Tambi%cn Has escogido 4\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		A3=180-(A1+A2);
		A1=A1*(PI/180);
		t=tan(A1);
		L2=t*(L1);
		L3=sqrt((L1*L1)+(L2*L2));
		A1=A1*(180/PI);
		triangulo_medidas();    
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	if((DIF==1)&&(DIF2==5))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 1\n");
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		printf("Tambi%cn Has escogido 5\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L2);
		/*A3*/
		A3=180-(A1+A2);	
		/*L1*/
		A1=A1*(PI/180);
		t=tan(A1);
		L1=L2/(t);
		A1=A1*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	
	if((DIF==5)&&(DIF2==1))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 5\n");
		printf("-dame la medida de ese lado ");
		scanf("%f",&L2);
		printf("Tambi%cn has escogido 1\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		
		
		
		/*A3*/
		A3=180-(A1+A2);	
		/*L1*/
		A1=A1*(PI/180);
		t=tan(A1);
		L1=L2/(t);
		A1=A1*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	if((DIF==1)&&(DIF2==6))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 1\n");
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		printf("Tambi%cn Has escogido 6n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L3);
		/*A3*/
		A3=180-(A1+A2);	
		/*L1*/
		A1=A1*(PI/180);
		s=sin(A1);
		L1=L3*(s);
		A1=A1*(180/PI);
		/*L3*/
		L2=sqrt((L3*L3)-(L1*L1));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
		if((DIF==6)&&(DIF2==1))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 6n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L3);
		printf("Tambi%cnHas escogido 1\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A1);
		/*A3*/
		A3=180-(A1+A2);	
		/*L1*/
		A1=A1*(PI/180);
		s=sin(A1);
		L1=L3*(s);
		A1=A1*(180/PI);
		/*L3*/
		L2=sqrt((L3*L3)-(L1*L1));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==3)&&(DIF2==4))
	{
		
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 3\n");
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		printf("Tambi%cn has escogido 4\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		/*A1*/
		A1=180-(A2+A3);	
		/*L2*/
		A3=A3*(PI/180);
		t=tan(A3);
		L2=L1/(t);
		A3=A3*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==4)&&(DIF2==3))
	{
			
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Hashas escogido 4\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		printf("Tambi%cn escogido 3\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		/*A1*/
		A1=180-(A2+A3);	
		/*L2*/
		A3=A3*(PI/180);
		t=tan(A3);
		L2=L1/(t);
		A3=A3*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	if((DIF==3)&&(DIF2==5))
	{
			/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 3\n");
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		printf("Tambi%cn has escogido 5\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L2);
		/*A1*/
		A1=180-(A2+A3);	
		/*L1*/
		A3=A3*(PI/180);
		t=tan(A3);
		L1=L2*(t);
		A3=A3*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==5)&&(DIF2==3))
	{
				/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 5\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L2);	
		printf("Tambi%cn has escogido 3\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		/*A1*/
		A1=180-(A2+A3);	
		/*L1*/
		A3=A3*(PI/180);
		t=tan(A3);
		L1=L2*(t);
		A3=A3*(180/PI);
		/*L3*/
		L3=sqrt((L1*L1)+(L2*L2));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==3)&&(DIF2==6))	
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 3\n");
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		printf("Tambi%cn has escogido 6\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L3);
		/*A1*/
		A1=180-(A2+A3);	
		/*L1*/
		A3=A3*(PI/180);
		s=sin(A3);
		L1=L3*(s);
		A3=A3*(180/PI);
		/*L2*/
		L2=sqrt((L3*L3)-(L1*L1));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==6)&&(DIF2==3))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
			printf("Has escogido 6\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L3);
		printf("Tambi%cn escogido 3\n",130);
		printf("-dame la medida de ese %cngulo ",160);
		scanf("%f",&A3);
		
	
		/*A1*/
		A1=180-(A2+A3);	
		/*L1*/
		A3=A3*(PI/180);
		s=sin(A3);
		L1=L3*(s);
		A3=A3*(180/PI);
		/*L2*/
		L2=sqrt((L3*L3)-(L1*L1));
		triangulo_medidas();
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==4)&&(DIF2==6))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 4\n");
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		printf("Tambi%cn has escogido 6\n",130);
		printf("-dame la medida de ese lado ",160);
		scanf("%f",&L3);
		/*L2*/
		L2=sqrt((L3*L3)-(L1*L1));
		/*A3*/
		t=L1/L2;
		A3=atan(t);
		A3=A3*(180/PI);
		/*A1*/
		A1=180-(A2+A3);
		triangulo_medidas();    
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/		
	}
	if((DIF==6)&&(DIF==4))
	{
				/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 6\n");
		printf("-dame la medida de ese lado ",160);
		scanf("%f",&L3);
	
		printf("Tambi%cn escogido 4\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L1);
		
		/*L2*/
		L2=sqrt((L3*L3)-(L1*L1));
		/*A3*/
		t=L1/L2;
		A3=atan(t);
		A3=A3*(180/PI);
		/*A1*/
		A1=180-(A2+A3);
		triangulo_medidas();    
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==5)&&(DIF2==6))
	{
		/*   1=A1
			 2=A2
			 3=A3 
			 4=L1
			 5=L2
			 6 L3  */

		system("cls");	
		triangulo_medidas();
		gotoxy(0,1);
		printf("Has escogido 5\n");
		printf("-dame la medida de ese lado ",160);
		scanf("%f",&L2);
	
		printf("Tambi%cn escogido 6\n",130);
		printf("dame la medida de ese lado ");
		scanf("%f",&L3);
		
		/*L1*/
		L1=sqrt((L3*L3)-(L2*L2));
		/*A3*/
		t=L1/L2;
		A3=atan(t);
		A3=A3*(180/PI);
		/*A1*/
		A1=180-(A2+A3);
		triangulo_medidas();    
		/*NumGrados=Radianes*(180/PI)*/
		/*NumRadianes=Grados*(PI/180)*/	
	}
	if((DIF==1)&&(DIF2==1))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==1)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==1)&&(DIF2==3))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	
	if((DIF==2)&&(DIF2==1))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==2)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==2)&&(DIF2==3))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==2)&&(DIF2==4))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==2)&&(DIF2==5))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==2)&&(DIF2==6))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==3)&&(DIF2==1))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==3)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==3)&&(DIF2==3))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==4)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==4)&&(DIF2==4))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==5)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
		if((DIF==5)&&(DIF2==5))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==6)&&(DIF2==2))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}
	if((DIF==6)&&(DIF2==6))
	{
		system("cls");	
		triangulo_medidas();		
		gotoxy(0,1);
		printf("no ser%c posible resolver tu triangulo",160);
	}

}
void lectura ()
{

	printf("----lectura----\n");
	printf("TEMA:sinonimos y antonimos\n");
	char palabra1[40]="si";
	char palabra2[40];
	char palabra3[13]="afirmativo";
	char palabra4[17]="efectivamente";
	cout<<"1.- Dame un sinonimo de la palabra "<<palabra1;
	printf("\n");
	scanf("%s",&palabra2);
	if(strcmp(palabra2,palabra3)==0)
	{
		printf("--vas bien--\n");
	}

		if(strcmp(palabra2,palabra3)==1)
	{
		printf("--ya empezamos mal-\n");
	}
	system("pause");
	system("cls");
	printf("TEMA:\n");
	printf("2.- Relaciona los siguentes conceptos con su correspondiente definicion\n");
	printf("\n");
	
	/*parafrasis*/
	printf("1.- Es un discurso o un texto que pretende\n    explicar y ampliar una informaci%cn,\n",162);
	printf("    para que se vuelvan m%cs f%cciles\n    de entender y asimilar\n",160,160);
	printf("\n");
	
	/*resumen*/
	printf("2.- Consiste en condensar el contenido\n    de un");
	printf("  texto, es decir,   simplificar\n    de tal forma que el");
	printf("  mensaje que\n    solo contenga los elementos importantes\n");
	printf("\n");
	
	/*sintesis*/
	printf("3.- es un escrito donde se exponen\n");
	printf("    las ideas principales de un\n");
	printf("    texto tras su an%clisis y comprensi%cn",160,162);
	printf("\n");
	printf("\n");
	printf("PRESIONA EL NUMERO CORRESPONDIENTE A CADA CONCEPTO Y DEFINICION PARA RELACIONAR LAS RESPUESTAS\n");
	gotoxy(62,5);
	printf(" 4.- Sintesis");
	gotoxy(62,10);
	printf(" 5.-Parafrasis");
	gotoxy(62,14);
	printf(" 6.- Resumen");
	int r1,r2,i,x;
	gotoxy(0,19);
	scanf("%d",&r1);
	scanf("%d",&r2);
	if((r1==1)&&(r2==4))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	
	}
	if((r1==4)&&(r2==1))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	
	}
	
		if((r1==2)&&(r2==5))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	}
	
		if((r1==5)&&(r2==2))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	}
		if((r1==3)&&(r2==6))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	
	}
		if((r1==6)&&(r2==3))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	
	
	
	if((r1==1)&&(r2==5))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	}
		if((r1==5)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	}
		if((r1==2)&&(r2==4))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
	
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	
	
	
	}
		if((r1==4)&&(r2==2))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
	
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	
	
	
	}
		
	
	
	if((r1==2)&&(r2==6))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	
	}
	if((r1==6)&&(r2==2))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	
	}
	
	
	
	
	
		if((r1==3)&&(r2==5))
	{	
		x=14;
		for(i=41;i<=45;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
	
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	
	}
	if((r1==3)&&(r2==4))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
		
	
	}
		if((r1==4)&&(r2==3))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
		
	
	}
	
	
	
	
	
	
	
		if((r1==1)&&(r2==6))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}	
		
	
	}
			if((r1==6)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	gotoxy(0,21);
	printf("haz la segunda relacion\n");
	scanf("%d",&r1);
	scanf("%d",&r2);
		if((r1==1)&&(r2==4))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==4)&&(r2==1))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
	}	
	if((r1==2)&&(r2==5))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==5)&&(r2==2))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==3)&&(r2==6))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==6)&&(r2==3))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==1)&&(r2==5))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==5)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==2)&&(r2==4))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==4)&&(r2==2))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}	
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}	
	if((r1==2)&&(r2==6))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==6)&&(r2==2))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==3)&&(r2==5))
	{	
		x=14;
		for(i=41;i<=45;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}	
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==3)&&(r2==4))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
	}
		if((r1==4)&&(r2==3))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==1)&&(r2==6))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
			if((r1==6)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
		gotoxy(0,23);
	printf("haz la tercera relacion\n");
	scanf("%d",&r1);
	scanf("%d",&r2);
		if((r1==1)&&(r2==4))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==4)&&(r2==1))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==2)&&(r2==5))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}	
		if((r1==5)&&(r2==2))
	{
		for(i=41;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==3)&&(r2==6))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}	
	}
		if((r1==6)&&(r2==3))
	{
		for(i=35;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}	
	if((r1==1)&&(r2==5))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{
	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	
	}
		if((r1==5)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==2)&&(r2==4))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
		if((r1==4)&&(r2==2))
	{	
		x=11;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=47;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==2)&&(r2==6))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}	
	}
	if((r1==6)&&(r2==2))
	{	
		x=9;
		for(i=41;i<=46;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	
	}
	if((r1==3)&&(r2==5))
	{	
		x=14;
		for(i=41;i<=45;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=46;i<=60;i++)
		{
			gotoxy(i,10);
			printf("*");
			Sleep(20);	
		}	
	}
	if((r1==3)&&(r2==4))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
	}
		if((r1==4)&&(r2==3))
	{	
		x=14;
		for(i=41;i<=50;i++)
		{
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x-1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,5);
			printf("*");
			Sleep(20);	
		}	
	}
	if((r1==1)&&(r2==6))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}
	}
	if((r1==6)&&(r2==1))
	{	
		x=5;
		for(i=41;i<=50;i++)
		{	
			gotoxy(i,x);
			printf("*");
			Sleep(20);	
			x=x+1;
		}
		for(i=50;i<=60;i++)
		{
			gotoxy(i,14);
			printf("*");
			Sleep(20);	
		}	
	}
	int op1;
	gotoxy(0,25);
	system("pause");
	system("cls");
	printf("TEMA: Ortigrafia\n");
	printf("3.-cuales son las palabras que llevan acento en la ultima silaba?\n");
	printf("\n");
	printf("1.-Agudas\n");
	printf("2.-Graves\n");
	printf("3.-Esdrujulas\n");
	printf("4.-sobreesdrujulas\n");
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:
			printf("--CORRECTO--\n");
			break;
		case 2:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	    case 3:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
		case 4:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	}
	int p1;
	printf("4.-Se%cala la palabra que esta mal escita\n",164);
	printf("1.-Vaciar\n");
	printf("2.-M%crtes\n",160);
	printf("3.-Cami%c\n",162);
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
		case 2:
			printf("--CORRECTO--\n");
			break;
	    case 3:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	}
	printf("5.-Cual es la forma correcta de escribir la siguente oracion?\n");
	printf("1.-Mar%ca va a coser la camisa de Juan\n",161);
	printf("2.-Mar%ca va a cocer la camisa de Juan\n",161);
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:printf
			("--CORRECTO--\n");
			break;
		case 2:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	}
	printf("6.-Cual es la forma correcta de esctribir la siguente oracion?\n");
	printf("1.-Tuvimos que rebobinar la cinta \n");
	printf("2.-Tubimos que revobinar la cinta\n");
	printf("3.-Tuvimos que revovinar la cinta \n");
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:
			printf("--CORRECTO--\n");
			break;
		case 2:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
		case 3:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	}
	printf("7.-Cual es la forma correcta de escribir la siguente oracion?\n");
	printf("1.-El ni%co se call%c de la cama y se lastim%c la rodilla\n",164,162,162);
	printf("2.-El ni%co se cay%c de la cama y se lastim%c la rodilla\n",164,162,162);
	printf("3.-El ni%co se callo de la cama y se lastimo la rodilla\n",164);
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");			
			break;
		case 2:
			printf("--CORRECTO--\n");
			break;
		case 3:
			printf("--MEJOR SUERTE LA PROXIMA VEZ--\n");
			break;
	}
	gotoxy(0,100);
}
void triangulo ()
{
		for(i=2;i<=14;i++)
	{
		gotoxy(65,i);
		printf(".");
		Sleep(10);	
	}	
	for(i=65;i<=78;i++)
	{
		gotoxy(i,15);
		printf(".");
		Sleep(10);	
	}
	for(i=15;i>2;i--)
	{
		x=x-1;
		gotoxy(x,i);
		printf(".");
		Sleep(10);
	}
	gotoxy(66,5);
	printf("_/");
	gotoxy(66,6);
	printf("1");
	gotoxy(66,14);
	printf("_");
	printf("2");
	gotoxy(66,15);
	printf("|");
	gotoxy(75,15);
	printf("|");
	gotoxy(75,14);
	printf("3/");
	gotoxy(64,10);
	printf("4");
	gotoxy(72,16);
	printf("5");
	gotoxy(73,9);
	printf("6");
}
void triangulo_medidas()
{
	int x=74;
		for(i=2;i<=14;i++)
	{
		gotoxy(60,i);
		printf(".");
	}	
	for(i=60;i<=73;i++)
	{
		gotoxy(i,15);
		printf(".");
	}
	for(i=15;i>2;i--)
	{
		x=x-1;
		gotoxy(x,i);
		printf(".");
	}
	gotoxy(61,5);
	printf("_/");
	gotoxy(61,6);
	printf("1=%0.4f",A1);
	gotoxy(61,14);
	printf("_");
	printf("2=%0.0f",A2);
	gotoxy(61,15);
	printf("|");
	gotoxy(70,15);
	printf("|");
	gotoxy(70,14);
	printf("3/=%0.4f",A3);
	gotoxy(61,11);
	printf("4=%0.4f",L1);
	gotoxy(67,16);
	printf("5=%0.4f",L2);
	gotoxy(68,9);
	printf("6=%0.4f",L3);
}
void wasd()
{
int re=66,co=17,i,re2=10,co2=17;
char tecla,tecla2;
do
{
gotoxy(re,co);
printf("%c",43);
gotoxy(re2,co2);
printf("%c",254);
tecla = getch();
tecla2 = getch();
if((tecla =='w')||(tecla2==ARRIBA))
{
	if(tecla =='w')
	{
	co--;
	gotoxy(re,co);
	printf("%c",43);
	gotoxy(re,co+1);printf(" ");
	}
	if(tecla2 ==ARRIBA)
{
	co2--;
	gotoxy(re2,co2);
	printf("%c",254);
	gotoxy(re2,co2+1);printf(" ");
}	
}
printf(" ");
if((tecla =='s')||(tecla2 ==ABAJO))
{
	if(tecla =='s')
	{
	co++;
	gotoxy(re,co);
	printf("%c",43);
	gotoxy(re,co-1);printf(" ");
	}
	if(tecla2 ==ABAJO)
{
	co2++;
	gotoxy(re2,co2);
	printf("%c",254);
	gotoxy(re2,co2-1);printf(" ");	
}	
}

if((tecla =='d')||(tecla2 ==DERECHA))
{
	if(tecla =='d')
	{
	re++;
	gotoxy(re,co);
	printf("%c",43);
	gotoxy(re-1,co);printf(" ");
	}
	if(tecla2 ==DERECHA)
{
	re2++;
	gotoxy(re2,co2);
	printf("%c",254);
	gotoxy(re2-1,co2);printf(" ");	
}	
}
printf(" ");
if((tecla =='a')||(tecla2 ==IZQUIERDA))
{
if(tecla =='a')
{
re--;
gotoxy(re,co);
printf("%c",43);
gotoxy(re+1,co);printf(" ");
}
if(tecla2 ==IZQUIERDA)
{
re2--;
gotoxy(re2,co2);
printf("%c",254);
gotoxy(re2+1,co2);printf(" ");
}
}
printf(" ");
}
while(tecla!='m');

}
void instrucciones()
{
	printf("---------INSTRUCCIONES---------\n");	
	printf("\n");
	printf("Se necesitan 2 jugadores\n");
	printf("\n");
	printf("Se mostraran 2 caracteres en pantalla %c  y  +\n",254);
	printf("\n");
	printf("     - + se mueve con las teclas a,w,s,d correspondientemente\n");
	printf("\n");
	printf("     - %c se mueve con las flechas del teclado\n",254);
	printf("\n");
	printf("EL JUEGO CONSISTE EN ""COMER"" TODA LA FIGURA QUE RODEA AL CARACTER\n");
	printf("CUANDO SE PASA SOBRE LA FIGURA AUTAMATICAMENTE SE COME\n");
	printf("\n");
	printf("GANA EL PRIMERO QUE TERMINE DE COMER SU FIGURA\n");
	printf("AL TERMINAR EL GANADOR TIENE QUE PRECIONAR LA TECLA ""M""\n");
	system("pause");
	system("cls");	
}
void juego()
{
	instrucciones();
	int i;
	pintar_limites();
	
	for(i=12;i>5;i--)
	{
		gotoxy(i,12);
		printf("%c",219);
	}
	for(i=12;i>5;i--)
	{
		gotoxy(i,22);
		printf("%c",219);
	}
	for(i=12;i<23;i++)
	{
		gotoxy(5,i);
		printf("%c",219);
	}
	for(i=72;i>65;i--)
	{
		gotoxy(i,12);
		printf("%c",219);
	}
	for(i=72;i>65;i--)
	{
		gotoxy(i,22);
		printf("%c",219);
	}
	for(i=12;i<23;i++)
	{
		gotoxy(72,i);
		printf("%c",219);
	}
	wasd();	
}
