#include<bits/stdc++.h>

int main(){
    int vet[2];
    for(int i=0;i<100;i++){
        int N;
        scanf("%d",&N);
        if(i==0){
            vet[0] = N;
            vet[1] = i;
        }else if(vet[0]<N){
            vet[0] = N;
            vet[1] = i;
        }
    }
    printf("%d\n%d\n",vet[0],vet[1]+1);
    return 0;
}
