#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int n;
	while(cin>>s>>n){
		if (s[0]=='0') && (s[1]=='.')
			smallerThanOne(s,n);
		else 
			greaterThanOne(s,n);
	}
}

string multiply(string s, int n){
	int len = s.size();
	int numOfZero;
	string result;
	long long x[1000000] = {0};
	jinwei = 0;
	lenOfresult = 1;
	x[0] =1;
	for (int j=0; j<n; j++){
		for (int i=len; i>0; i--){
		if (s[i] =='.') numOfZero=len-i+1;
		
		}
	}
	}
	
}