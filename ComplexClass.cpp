#include "stdafx.h"
#include "complex.h"


int main()
{
	while (1)
	{
		Complex complex;
		Complex a, b;

		cin >> a;
		cin >> b;
		
		complex.menu();
		complex.EnterOperation(a, b);

	}

    return 0;
}

