#include<bits/stdc++.h>

using namespace std;

int main(){
    for(int i=1;i<=9;i+=2){
        int k=0;
        for(int j=6+i;k<3;j--){
            printf("I=%d J=%d\n",i,j);
            k++;
        }
    }
    return 0;
}
