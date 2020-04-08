#include<bits/stdc++.h>

using namespace std;

typedef unsigned int ud;

int main(){
	ud inicio,fim,calculo;
	scanf("%d %d", &inicio, &fim);
	if(inicio == fim){
		calculo = 24;
	}else if(inicio > fim){
		calculo = 24-inicio+fim;
	}else{
		calculo = fim - inicio;
	}
	printf("O JOGO DUROU %d HORA(S)\n",calculo);
	return 0;
}
