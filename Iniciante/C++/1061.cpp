#include<bits/stdc++.h>

using namespace std;

int main(){
	int d,h,m,s;
	printf("Dia ");
	scanf("%d",&d);
	scanf("%d : %d : %d",&h,&m,&s);
	int D,H,M,S;
	printf("Dia ");
	scanf("%d",&D);
	scanf("%d : %d : %d",&H,&M,&S);
	int antes=0,depois=0;
	antes = s+(60*m)+(60*60*h)+(60*60*24*d);
	depois = S+(60*M)+(60*60*H)+(60*60*24*D);
	depois-=antes;
	int dia,hora,minuto,segundo;
	dia=depois/(24*60*60);
	depois-=dia*24*60*60;
	hora=depois/(60*60);
	depois-=hora*60*60;
	minuto=depois/60;
	depois-=minuto*60;
	segundo=depois;
	depois-=segundo;
	printf("%d dia(s)\n",dia);
	printf("%d hora(s)\n",hora);
	printf("%d minuto(s)\n",minuto);
	printf("%d segundo(s)\n",segundo);
	return 0;
}

/*
 * PRIMEIRO DIA
 * 05 dias => 5 * 24 * 60 * 60 => 342000
 * 08 horas => 08 * 60 * 60 => 28800
 * 12 minutos => 12 * 60 => 720
 * 23 segundos => 23 => 23
 * TOTAL => 461543
 * ======================================
 * ULTIMO DIA
 * 09 dias => 9 * 24 * 60 * 60 => 777600
 * 06 horas => 6 * 60 * 60 => 21600
 * 13 minutos => 13 * 60 => 780
 * 23 segundos => 23 => 23
 * TOTAL => 800003
 * ======================================
 * DIFERENÇA => 338460
 * 338460 / (24*60*60) => 03 dia(s)
 * 338460 - (338460 / (24*60*60)) => 338460 - 259200 => 79260
 * 79260 / (60*60) => 22 hora(s)
 * 79260 - (79260 / (60*60)) => 79260 - 79200 => 60
 * 60 / (60) => 1 minuto(s)
 * 60%60 => 0 segundo(s)
*/
