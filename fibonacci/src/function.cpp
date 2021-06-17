#include <iostream>   // cout, endl
#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

		if(n == 0 || n == 1){
			return std::vector<unsigned int>{};	
		}

		std::vector<unsigned int> v = {1,1};
		for(int i = 1; i < n; i++){
			int k = v[i] + v[i-1];
			if(k < n){
				v.push_back(k);
			}else{
				break;
			}
		}

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return v;
}
