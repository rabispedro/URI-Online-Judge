#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double S=0.00;
	for(int i=1;i<=100;i++) S+=1.00/i;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout<<S<<"\n";
	return 0;
}
