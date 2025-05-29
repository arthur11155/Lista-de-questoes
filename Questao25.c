#include <stdio.h>

int main(){
    float fahrenheit, celsius;
    printf("informe um valor em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("A temperatura em celcius é: %.2f\n", celcius);
    
    return 0;

}
