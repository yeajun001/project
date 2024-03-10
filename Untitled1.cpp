#include <iostream>
using namespace std;

int main(){
	int n,max = 0;
	int a[9];
	for(int i = 0; i<9; i++){
		cin >> a[i];
		if(max < a[i]){
			max = a[i];
			n =i;
		}
	}
	printf("%d %d",max,n+1);
}
