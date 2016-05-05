#include <stdio.h>

void aRomanos(int p1);

int main(){
	int nums;
    printf("***************************************\n");
	printf("***** Numeros Decimanes a Romanos *****\n");
	printf("**************** V 1.1 ****************\n");
	printf("***************************************\n");

	printf("Escribe un numero entre 1 - 3999: ");
	scanf("%d", &nums);
	aRomanos(nums);
	getchar();
	return 0;
}

void aRomanos(int p1){
	
	int rem;  // remainder del numero inicial
	int redondo;  //se usa para redondear el remainder por ejemplo 450 a 400.  // probablemente se pueda eliminar
	int pTimes; //numero de veces que se imprime una letra.
	
	if(p1 != 0 && p1 < 4000){ // Si el numero inicial no esta dentro del rango (1-3999), lanza un error.
		
	
		
		// Testea Millares ////////
		
		if(p1 / 1000 >= 1){
			rem = p1 % 1000;   //saca el reminder
			redondo = p1 - rem;  // lo redondea
			pTimes = redondo / 1000;  //usa el numero redondo para saber cuantas veces debe imprimir M
			for(int i = 1; i <= pTimes; i++){ // Imprime M por el numero de veces necesarias
				printf("M");
			} // for Imprime las M
			//printf("%d", rem);
			
		} // if fin testea si p1 es mayor a 1000
		
		if((rem >= 900 && rem <= 999) || (p1 >= 900 && p1 <= 999)){ // Testea si el numero esta en mil - 100, este es el teste de los 900.
			printf("CM");;
		} // if 900 CM
		
		// Fin Millares ///////
		// Testea Medio Millar y centenas/////////
			if (p1 < 1000){ // si el numero inicial es menor a 1000 no tenemos rem, y si es menor a 1000 entonces rem es igual al numero inicial. 
				rem = p1;
			} // if end numero inicial menor a 1000, inicia rem
		
		if ((rem >= 500 && rem < 900) || (p1 >= 500 && p1 < 900)){ // si el numero o el reminder es mayor a 500 y menor a 900 entonces imprime una D
			printf("D");
			//if (p1 >= 500){
			//	rem = rem - 500; // si el reminder es mayor a 500 entonces necesitamos restarle 500 por que ya se imprimio arriba. 
			//} // if end 
		
			redondo = rem - (rem % 100); //volvemos a reondear el reminder.
			pTimes = (redondo / 100) - 5; //calculamos cuantas C se van a imprimir -5 porque el numero es mayor a 5
			
			for(int i = 1; i <= pTimes; i++){ // imprimimos las C de acuerdo al calculo anterior. 
				printf("C");
			} // for End C
			
			
		} // if end Print D y centenas. 
		
		if((rem >= 400 && rem < 500) || (p1 >= 400 && p1 < 500)){ //si el reminder o el numero inicial estan en el rango de 400-499 entonces hay que imprimir CD
			printf("CD");
		} // if End CD
		
		else if (rem < 500 && rem >= 100 || p1 < 500 && p1 >= 100){ // si el rem o numero inicial son menores a 500 y mayores a 100 entonces imprimimos C por cada ciento. 
					redondo = rem - (rem % 100); //se redondea el reminder. ej. 350 a 300
			pTimes = redondo / 100; // calculamos las veces ej. 300 / 100 = 3
			
			for(int i = 1; i <= pTimes; i++){ // imprimimos C segun el calculo anterior. 
				printf("C");
			} // for End print C
		} // else if End rango de 100 a 500
		
		// Fin Medio Millar y centenas///////////
		// testea decenas ////////
		
		rem = rem % 100;  //reminder para calcular decimos. ej. 350 a 50.
		if ((rem >= 50 && rem < 90) || (p1 >= 50 && p1 < 90)){ // si el reminder o el numero inicial son mayores de 50 o menores de 90 
			printf("L");
			//if(p1 >= 50){
			//	rem = rem - 50;
			//}
			
			redondo = rem - (rem % 10); //redondeamos el reminder
			pTimes = (redondo / 10) - 5; // calculamos las veces (-5 porque es mayor a 5) que se va a imprimir X despues de L 
			
			for (int i = 1; i <= pTimes; i++){ // loop para imprimir X despues de L
				printf("X");
			} // for End imprime X despues de L
		}
		
		if (rem >= 90){ // si el reminder es igual o mayor que noventa imprime XC
			printf("XC");
		} // if End imprime XC
		
		if((rem >= 40 && rem < 50) || (p1 >= 40 && p1 < 50)){ //si el reminder o el numero esta entre 40 y 49, imprime XL
			printf("XL");
		} //if End imprime XL
		
		else if (rem < 50 && rem >= 10 || p1 < 50 && p1 >= 10){ // si el reminder o el numero es menor a 50 imprime cuantas X
					redondo = rem - (rem % 10); //se redondea rem
			pTimes = redondo / 10; // calcula las veces
			
			for (int i = 1; i <= pTimes; i++){ //imprime X el numero de veces calculade arriba. 
				printf("X");
			} // for End imprime X
		}
		
		// fin de decenas ////////////////
		// Testea unidades ///////////////
		
		rem = rem % 10; // reminder a unidades ej. 13 a 3
		
		if((rem >= 5 && rem < 9) || (p1 >= 5 && p1 <9) ){ // si el numero o el reminder es mayor a 5 y menor a 9 entonces imprime un V
			printf("V");
			//if (rem >= 5){ // si es mayor a 5 recalculamos el reminder para dejar las unidades que se imprimen despues de la V
			//	rem = rem -5; // le restamos 5 al reminder ej 6 - 5 = 1
			///}
			
			redondo = rem; //redondeamos el reminder simbolicamente ej 3 a 3
			pTimes = redondo - 5 ; // sacamos el pTimes
			//printf("%d", pTimes);
			for (int i = 1; i <= pTimes; i++){ // imprime I tantas veces despues de V
				printf("I");
			} // for end imprime I despues de V
					
		} // if end
		
		if(rem >= 9){ //si rem o numero es 9 entonces imprime IX
			printf("IX");
		} // if end imprime IX
		
		if(rem == 4 || p1 == 4){ //si el numero es 4 imprime IV
			printf("IV");
		} // if end imprime IV
		
		redondo = rem; //redondeamos el reminder simbolicamente ej 3 a 3
		pTimes = redondo ; // sacamos el pTimes
		
		if(rem < 4 || p1 < 4 ){ // si el numero o rem es menor a 4 imprime I tantas veces. 
			for(int i = 1; i <= pTimes; i++){
				printf("I");
			} // for end imprime I
		} // if end si el numero es menor a 4 imprime I
	
		
		
		//printf("%d", rem);
		
	}
	else {
		printf("ERROR: Numero Invalido\n"); // error si el numero inicial no esta en el rango a calcular. 
	}
	
	getchar(); // espera un enter para seguir depues de imprimir el numero. 
	
} // aRomanos() FIN



