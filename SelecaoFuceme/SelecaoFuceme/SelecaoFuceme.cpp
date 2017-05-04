// SelecaoFuceme.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "ProvaDLL.h"

#include <iostream>

int main()
{	
	Prova prova;
	printf("%s\n", prova.getEmail().c_str());

	getchar();
    return 0;
}

