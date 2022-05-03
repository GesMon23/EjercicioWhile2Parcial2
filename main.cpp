
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	float Num, i, resultado;
	printf("INGRESE EL NUMERO DEL QUE DESEA CONOCER SU TABLA DE DIVISION: \n");
	scanf("%f", &Num);
	i=1;
	while(i<=10){	
		resultado= Num/i;
		printf("%.0f / %.0f = %.2f\n", Num, i, resultado);
		i++;
	}
	system("pause");
}
