#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    while(true){
        scanf("%d %d",&m,&n);
        if((m<=0) || (n<=0)) break;
        int maior,menor,soma=0;
        if(m>n){
            maior=m;
            menor=n;
        }else{
            maior=n;
            menor=m;
        }
        for(int i=menor;i<=maior;i++){
            printf("%d ",i);
            soma+=i;
            if(i==maior) printf("Sum=%d\n",soma);
        }
    }
    return 0;
}
