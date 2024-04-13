#include<iostream>
using namespace std;
template<typename...T>
int autosum(T ...T){
	return(...+T);
}
int main(){
	int ans=autosum(1,2,3,4,5,6,7,78,8);
	cout<<ans;
	
}
