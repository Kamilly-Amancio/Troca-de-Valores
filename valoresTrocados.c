#include <stdio.h>

void trocaDeValores(int x,int y){
	
	int auxiliar=0;
	
	auxiliar = x;
	x = y;
	y = auxiliar;


	printf("O valor de A: %i e  valor de B: %i",x,y);
	

}
int main(void){
	
	int a, b;
	
	a = 10;
	b = 5;
	
	trocaDeValores(a,b);
}
