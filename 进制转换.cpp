#include <iostream>
#include <string>
using namespace std;
long long qpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
long long m(char ch){
    if(ch>='0'&&ch<='9') return ch-'0';
    if(ch>='a'&&ch<='z') return 10+ch-'a';
    if(ch>='A'&&ch<='Z') return 36+ch-'A';
    return -1;
}
char n(long long s){
	if(s<10)return '0'+s;
	if(s<36)return 'a'+(s-10);
	if(s<62)return 'A'+(s-36);
	return ' ';
}
int main(){
	long long a,b,t=0;
	string s,r="";
	cout<<"一共三个数，1<第一个数，第二个数<63:"<<endl;
	cin>>a>>b>>s;
	for(int i=0;i<s.size();i++){
		if(m(s[s.size()-i-1])==-1){
			cout<<"输入有问题，程序强行结束！";
			return 0; 
		}
		t+=m(s[s.size()-i-1])*qpow(a,i);
	}
	long long before=t;
	string after="";
	while(before!=0){
		if(n(before%b)==' '){
			cout<<"输入有问题，程序强行结束！";
			return 0; 
		}
		after=n(before%b)+after;
		before/=b;
	} 
	cout<<after;
	return 0;
}
