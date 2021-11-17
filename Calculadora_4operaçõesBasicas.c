#include <stdio.h>
#include <stdlib.h>
 float n1,n2;
float total;
 char op;
 void operador();
 
void main(){

printf("-----Calculadora de dois numeros entre as 4 operacoes basicas---\n");
scanf("%f%c%f",&n1,&op,&n2);
operador();
system("pause");
system("cls");
return main();
	
}
void operador(void){
	if(op=='/'){
		total=n1/n2;
		printf("divisao:\n");
		printf("total= %f\n",total);
	}
	else if(op=='*'){
		total=n1*n2;
		printf("multiplicacao:\n");
		printf("total= %f\n",total);
	}
	else if(op=='+'){
		total=n1+n2;
		printf("soma:\n");
		printf("total= %f\n",total);
	}
	else if(op=='-'){
		printf("subtracao:\n");
		total=n1-n2;
		printf("total= %f\n",total);
	}
}

