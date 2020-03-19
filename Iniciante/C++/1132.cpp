#include<bits/stdc++.h>

using namespace std;

int main(){
    int maior,menor,x,y,soma=0;
    scanf("%d\n%d",&x,&y);
    if(x>y){
        maior=x;
        menor=y;
    }else{
        maior=y;
        menor=x;
    }
    for(int i=menor;i<=maior;i++) if(i%13) soma+=i;
    printf("%d\n",soma);
    return 0;
}
