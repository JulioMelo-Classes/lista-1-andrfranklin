#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
ok, não precisava guardar o valor maximo e a posição, vc poderia usar apenas V[imax] =)
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
		int max = V[0];
		int min = V[0];

		int imax = 0;
		int imin = 0;

		for(int i = 0; i < n; i++){
			if(V[i] < min){
				imin = i;
				min = V[i];
			}

			if(V[i] >= max){
				imax = i;
				max = V[i];
			}
		}

		if(n == 0){
			imin = -1, imax = -1;
		}

    return { imin , imax };
}
