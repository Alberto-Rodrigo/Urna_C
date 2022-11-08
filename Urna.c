#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

vereador_1();		
vereador_2();
vereador_3();
prefeito_1();
prefeito_2();
nulo_1();
nulo_2();
int votar,nulos;
int zureta,gomes;
int joao;
int maria;
int ze;


int main () {

	setlocale(LC_ALL, "Portuguese");
	int op,sim;
	
	while(1){
	
	printf("\n--------------------------------------------\n\n");
	printf("Nome: Alberto Rodrigues dos Santos\n");
	printf("Curso: Engenharia de Software\n");
	printf("\n--------------------------------------------\n\n");
	
	printf("O que voce deseja fazer?\n\n");	
	printf("1 - Votar\n\n");
	printf("2 - Apurar Votação\n\n");
	printf("3 - Sair\n\n");
	scanf("%d",&op);
	system("cls");
	
	switch (op) {
		
	case 1:
			
		printf("Em que vereador deseja votar?\n\n");
		printf("111 - Vereador João do Frete\n");
		printf("222 - Vereadora Maria da Pomonha\n");
		printf("333 - Vereador Zé da Farmacia\n");
		printf("444 - Voto Nulo\n");
		scanf("%d",&votar);
		
		if (votar == 111) {
		printf("Voto Computado!\n\n");
		}
		if (votar == 222) {
		}
		if (votar == 333){
		printf("Voto Computado!\n\n");			
		}
		else{
		if (votar == 444) {
		printf("Voto Nulo!\n\n");
		}
		if (votar > 444) {
		printf("Voto ivalido, seu voto foi ivalidado!\n");
		}
		if (votar < 111) {
		printf("Voto ivalido, seu voto foi ivalidado!\n");
		}
		}
		printf("Em que prefeito deseja votar?\n\n");
		printf("11 - Prefeito Dr. Zureta\n");
		printf("22 - Prefeito Senhor Gomes\n");
		printf("44 - Voto Nulo\n");
		scanf("%d",&votar);	
		if (votar == 11) {	
		printf("Voto Computado!\n\n");
		}
		if (votar == 22){
		printf("Voto Computado!\n\n");	
		}
		else{
		if (votar == 44) {
		printf("Voto Nulo!\n");
		}
		if (votar > 44) {
		printf("Voto ivalido, seu voto foi ivalidado!");
		}
		if (votar < 11){
		printf("Voto ivalido, seu voto foi ivalidado!\n");
		}
		}
		break;
	
	
	case 2:
		
		vereador_1();		
		vereador_2();
		vereador_3();
		nulo_1();
		prefeito_1();
		prefeito_2();
		nulo_2();
		break;
	
	case 3: 
		printf("Realmente deseja sair?\n");
		scanf("%d",&sim);
		return 0;
		break;
	
	}
	
}
return 0;
}

int vereador_1() {
	
	printf("Apuração Final Vereador:\n\n");
	printf("Vereador João do Frete - %d votos\n\n",joao = joao +1);
	return 0;
}

int vereador_2() {
	
	printf("Vereadora Maria da Pomonha - %d votos\n\n",maria = maria +1);
	return 0;
}

int vereador_3() {
	printf("Vereador Zé da Farmacia - %d votos\n\n",ze = ze +1);
	return 0;
}

int prefeito_1() {
	printf("Apuração Final Prefeito:\n\n");
	printf("Prefeito Dr. Zureta - %d votos\n\n",zureta = zureta +1);	
		
	return 0;
	
}
int prefeito_2(){
	printf("Prefeito Senhor Gomes - %d votos\n\n",gomes = gomes +1);	
	return 0;
}
int nulo_1() {
	
	printf("Votos Nulo - %d votos\n\n",nulos = nulos +1);
	return 0;
	
}
int nulo_2() {
	
	printf("Votos Nulo - %d votos\n\n",nulos = nulos +1);
	return 0;
	
}
