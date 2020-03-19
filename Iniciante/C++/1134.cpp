#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,alc=0,gas=0,die=0;
    do{
        scanf("%d",&x);
        if(x==1) alc++;
        else if(x==2) gas++;
        else if(x==3) die++;
    }while(x != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);
    return 0;
}
