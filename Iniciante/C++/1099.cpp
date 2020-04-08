#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int maior,menor,x,y,soma=0;
		scanf("%d %d",&x,&y);
		if(x>y){
			maior=x;
			menor=y;
		}else{
			maior=y;
			menor=x;
		}
		for(int j=menor+1;j<maior;j++) if(j%2) soma+=j;
		printf("%d\n",soma);
	}
	return 0;
}
