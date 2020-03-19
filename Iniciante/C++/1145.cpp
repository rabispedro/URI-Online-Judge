#include<bits/stdc++.h>

using namespace std;

int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    for(int i=1;i<=Y;i++){
        if(!(i%X)) printf("%d\n",i);
        else printf("%d ",i);
    }
    return 0;
}
