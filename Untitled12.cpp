#include <iostream>
long long iterative_factorial(int n){
	long long result=1;
	for(int i=1;i<=n;++i){
		result*=i;
	}
	return result;
}

int main(){
	int n_iterative=5;
	long long result_iterative=iterative_factorial(n_iterative);
	std::cout<<"The factorial of"<<n_iterative<<"is:"<<result;
	return 0;
}