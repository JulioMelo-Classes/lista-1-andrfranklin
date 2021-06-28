#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*otimo!*/
int main(void)
{
    // TODO: Adicione aqui seu código.
		int qtd = 0;

		for(int i = 0; i < 5; i++){
			int n = 0;
			cin >> n;
			if(n < 0){
				qtd++;
			}
		}

		cout << qtd;

    return 0;
}
