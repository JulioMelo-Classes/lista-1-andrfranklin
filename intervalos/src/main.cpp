/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
		double qtd_0_25 = 0;
		double qtd_25_50 = 0;
		double qtd_50_75 = 0;
		double qtd_75_100 = 0;
		double none = 0;
		int total = 0;
		int n = 0;

		while( cin >> std::ws >> n ){
			if(n >= 0 && n < 25){
				qtd_0_25++;
			}else if(n >= 25 && n < 50){
				qtd_25_50++;
			}else if(n >= 50 && n < 75){
				qtd_50_75++;
			}else if(n >= 75 && n < 100){
				qtd_75_100++;
			}else{
				none++;
			}

			total++;
		}
		
		cout.precision(4);
		cout << (qtd_0_25 / total)*100 << "\n";
		cout.precision(4);
		cout << (qtd_25_50 / total)*100 << "\n";
		cout.precision(4);
		cout << (qtd_50_75 / total)*100 << "\n";
		cout.precision(4);
		cout << (qtd_75_100 / total)*100 << "\n";
		cout.precision(4);
		cout << (none / total)*100 << "\n";

    return 0;
}
