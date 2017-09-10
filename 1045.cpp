#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	double vs,r,c;
	int n;
	double w, vr;
	double result[1000] = {0.0};
	cin >> vs >> r >> c >> n;
	for(int i=0; i<n; i++){
		cin >> w;
		vr = c * r * w * vs * sin(atan(1/(c * r * w)));
		result[i] = vr;
	}
	for (int i=0; i<n; i++){
		result[i] = (int)(result[i]*1000+0.5)/1000.0;
		cout << setiosflags(ios::fixed) << setprecision(3) <<result[i] << endl;
	}
}