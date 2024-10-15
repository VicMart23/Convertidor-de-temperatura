#include<stdio.h>

main()
{int op;
float grado;
char salida;
	do
	{printf("1.- C%c - K%c",248,248);
	printf("\n2.- C%c - F%c",248,248);
	printf("\n3.- F%c - K%c",248,248);
	printf("\n4.- C%c - R%c",248,248);
	printf("\n5.- R%c - C%c",248,248);
	printf("\n6.- R%c - K%c",248,248);
	printf("\n7.- Salida.");
	printf("\n\nIngrese la opci%cn: ",162);
	scanf("%d",&op);}
	while(!((op>0)&&(op<=7)));
	{if((op>0)&&(op<=7))
		{switch(op)
			{case 1:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",grado+273,248);
				break;}
			case 2:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",(grado*(9/5))+32,248);
				break;}
			case 3:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",((grado-32)*(5/9))+273,248);
				break;}
			case 4:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",(grado*(9/5))+491,248);
				break;}
			case 5:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",(grado-491)*(5/9),248);
				break;}
			case 6:
				{printf("\nIngrese valor: ");
				scanf("%f",&grado);
				printf("Salida = %f%c",grado*(5/9),248);
				break;}
			case 7:
				{printf("\nSalida.");
				break;}
			}
		}
	}
return(0);}
