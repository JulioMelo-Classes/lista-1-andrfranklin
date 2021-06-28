#include <array>
using std::array;

#include <string>
using std::string;

#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*realmente não precisava usar o iter_swap, apenas o swap resolveria, mas ok*/
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    if(arr.size() > 1){
			int t = arr.size();
			for(int i = 0; i < t/2; i++){
				iter_swap(&arr[i], &arr[(t-1) - i]);
			}
		}
}
