#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	
	float altura, peso;
	char sexo;
	float imc;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("Digite o seu peso atual: ");
	scanf("%f", &peso);
	printf("Digite o sexo [m]asculino ou [f]eminino : ");
	//scanf("%c", &sexo) - O scanf n o   utilizado para ler caracteres.
	sexo = getche();
	
  	imc = peso / pow(altura,2);
	
	printf("\nO Indice de massa corporal = %f\n\n", imc);
	
	
	if (sexo == 'f'){
	    if(imc >= 39){
			printf("Obesidade m rbida");
		}
		else{
			if(imc >= 29 && imc <= 38.9){
				printf("Obesidade moderada");
			}
			else{
				if(imc >= 24 && imc <= 28.9){
					printf("Obesidade leve");
				}
				else{
					if(imc >= 19 && imc <= 23.9){
						printf("Normal");
					}
					else{
						printf("Abaixo do normal");
					}
				}
			}	
		}
	}
	else{
		if (sexo == 'm'){
		    if(imc >= 43){
				printf("Obesidade m rbida");
			}
			else{
				if(imc >= 30 && imc <= 39.9){
					printf("Obesidade moderada");
				}
				else{
					if(imc >= 25 && imc <= 29.9){
						printf("Obesidade leve");
					}
					else{
						if(imc >= 20 && imc <= 24.9){
							printf("Normal");
						}
						else{
							printf("Abaixo do normal");
						}
					}
				}	
			}
		}
	}
   
   return 0;	
}


