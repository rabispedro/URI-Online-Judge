#include<bits/stdc++.h>

using namespace std;

int main(){
	float A,B,C;
	scanf("%f %f %f",&A,&B,&C);
	float X,Y,Z;
	X = (B-C);
	Y = (A-C);
	Z = (A-B);
	if(X<0) X=-X;
	if(Y<0) Y=-Y;
	if(Z<0) Z=-Z;
	if((X<A && A<B+C) || (Y<B && B<A+C) || (Z<C && C<A+B)) printf("Perimetro = %2.1f\n",(A+B+C));
	else printf("Area = %2.1f\n",((A+B)*C/2));
	return 0;
}
