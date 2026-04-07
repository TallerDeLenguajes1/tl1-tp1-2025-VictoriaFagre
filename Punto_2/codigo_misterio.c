#include <stdio.h>

//cambio alpha por invertido ya que invierte el num misterioso
void f_invertido(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void f_divido_invertido(int *p) {
    *p = *p / 2;
}

void f_sumaInvert_y_cifraInvert(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    //127+10
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    f_invertido(valor_referencia);
    f_divido_invertido(valor_referencia);
    f_sumaInvert_y_cifraInvert(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}