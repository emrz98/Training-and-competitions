/*
Obtener perimetro y area de un circulo

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    float pi, radio, perimetro, area;
    printf("Inserte el valor del radio: ");
    scanf("%f", &radio);
    pi=3.14;
    perimetro=2*pi*radio;
    area=pi*(radio*radio);
    printf("El perimetro es: %.2f", perimetro );
    printf(" El area es: %.2f", area);

   
    return 0;
}
