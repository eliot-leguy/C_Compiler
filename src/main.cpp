#include <iostream>
#include "source.h"

int main()
{
	int m,s;

	std::cout << "Entrez un nombre positif : ";
	std::cin >> m;
	s=SommeDesCarres(m);
	std::cout << "La somme des " << m << " premiers entiers est " << s << std::endl;

	return 0;
}
