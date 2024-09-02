#include <Arduino.h>

int numero = 10;//Variable global(puede usarse en cualquiera de las funciones del archivo)

void duplicar(int * puntero);
/* 
 *Este es el punto de entrada del programa
 *Sirve para inicializar las variables y configuraciones
*/
void setup() { //10KHz es el maximo ancho de banda de una linea telefonica
  Serial.begin(115200); //1200 baudios(bps) o 2400

}

/**
 * Este es el loop principal del programa
 * Se ejecuta despues de que el setup termina
 */
void loop() {
  //Serial.print("Numero = ");
  //Serial.println(numero); //Imprime: numero = 10

  Serial.print("Numero = "+String(numero));//Imprime: numero = 10
  duplicar(&numero); // & numero significa que le paso la direccion de memoria de la variable numero
  delay(1000);
}

void duplicar(int * puntero){
  * puntero = * puntero * 2; // * puntero significa que accedo al valor de la direccion de memoria que me pasaron
  Serial.print("[duplicar] numero = "+String(* puntero));
}

