#include<bits/stdc++.h>
#define MAX 3162

using namespace std;

typedef long long ll;

void primo(ll *vec);
bool verifica(lld x, lld *vec);

int main(){
	ll N,X,vec[MAX];
	vec = primo();
	scanf("%ll",&N);
	while(N>0){
		scanf("%ll",&X);
		if(verifica(X,vec)) printf("%ll eh primo\n");
		else printf("%ll nao eh primo\n");
		N--;
	}
	return 0;
}

void primo(ll *vec){
	unsigned int i=0;
	while(i<MAX){
		unsigned int j=0;
		while(j<i){
			if() vec[i]
		}
		if(b) vec[i] = i;
		i++;
	}
	3
	
}

bool verifica(ll x, ll *vec){
	unsigned int i=0;
	while(i<MAX){
		if(vec[i] == x) return True;
		i++;
	}
	return False;
}

// sqrt(10**7) = 3162
