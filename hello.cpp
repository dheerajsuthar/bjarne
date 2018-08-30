#include <iostream>
using namespace std;
constexpr double print_square(double x){
	return x*x;	
}

int main(){
	int p[] = {1,2,3,4,5,6};
	for(auto &x: p) 
		x++;
	for(auto x: p)
		cout << x << ' ' ;
}
