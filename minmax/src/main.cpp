#define CATCH_CONFIG_MAIN
#include <iostream>
#include "function.h"

int main(){
	//teste 1
	int A[]{ 2, 3, 2, 5, 1, 4, 5, 4, 1 };
  std::size_t n{9};

	int ma = min_max(A, n).second;
	int mi = min_max(A, n).first;
	std::cout << "min = " << mi << ", max = "<< ma << "\n";

}
