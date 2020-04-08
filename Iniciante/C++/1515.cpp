#include<bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

int main(){
	int rec,viag,resp[100];
	string civ;
	ui N=1,cont=0;
	while(N>=0){
		cin>>N;
		int aux[N][3],menor;
		for(ui i=0;i<N;i++){
			cin>>civ;
			aux[i][0] = civ;
			cin>>rec;
			aux[i][1] = rec;
			cin>>viag;
			aux[i][2] = viag;
		}
		
		resp[cont] = menor;
		cont++;
	}
	for(ui i=0;i<cont;i++) cout<<resp[i]<<"\n";
	return 0;
}
