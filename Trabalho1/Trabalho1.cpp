// Trabalho1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int numPessoas = 0;
	int numAparelhos = 0;
	int adicaoPessoas = 0;
	int adicaoAparelhos = 0;
	int dimensionamento = 600;
	double larg = 0, comp = 0, metroQuadrado = 0;

	cout << "Informe a largura: ";
	cin >> larg;
	cout << "Informe o comprimento: ";
	cin >> comp;
	cout << "Informe a numero de pessoas exedentes: ";
	cin >> numPessoas;
	cout << "Informe o numero de aparelhos com emissao de calor: ";
	cin >> numAparelhos;

	if (numPessoas > 0)
	{
		adicaoPessoas = numPessoas * 600;
	}

	if (numAparelhos > 0)
	{
		adicaoAparelhos = numAparelhos * 600;
	}

	metroQuadrado = larg * comp;

	dimensionamento = (dimensionamento * metroQuadrado) + adicaoAparelhos + adicaoPessoas;

	cout << "Dimensionamento BTU: " << dimensionamento << endl;

	system("pause");

	return 0;
}

