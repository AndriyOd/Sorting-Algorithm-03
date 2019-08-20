// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int a = 0;

	int iLowBorder = 0;
	int iArraySize = 8;
	int iMin = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int iTemp = 0;
	int n = 0;

	int ar1[10] = { 1,2,3,4 };
	std::cout << "Hello, World!\n\n";

	//Printing the arrray
	std::cout << "Initially array ar1[" << iArraySize << "]={";
	for (i = 0; i < iArraySize; i++)
	{
		std::cout << ar1[i];
		if (i < iArraySize - 1)
			std::cout << ",";
	}
	std::cout << "}\n\n";

	// Input the elements of the array ar1[4]
	std::cout << "Now input the elements of the array:\n";
	for (i = 0; i < iArraySize; i++)
	{
		std::cout << "Input ar[" << i << "]\n";
		std::cin >> ar1[i];

	}

	//Printing the arrray
	std::cout << "And now array ar1[" << iArraySize << "]={";
	for (i = 0; i < iArraySize; i++)
	{
		std::cout << ar1[i];
		if (i < iArraySize - 1)
			std::cout << ",";
	}
	std::cout << "}\n\n";


	// Sorting the array ar1[10]. BUBBLE METHOD
	std::cout << "Sorting... BUBBLE METHOD ....\n";
	for (i = 0; i < iArraySize - 1; i++)
	{
		for (j = 0; j < iArraySize - 1 - i; j++)
		{
			if (ar1[j] > ar1[j + 1])
			{
				iTemp = ar1[j];
				ar1[j] = ar1[j + 1];
				ar1[j + 1] = iTemp;
			}
			//Printing the arrray
			std::cout << "Step " << i << "." << j << ". ar1[" << iArraySize << "]={";
			for (k = 0; k < iArraySize; k++)
			{
				std::cout << ar1[k];
				if (k < iArraySize - 1)
					std::cout << ",";
			}
			std::cout << "}\n\n";
		}
	}

	//Printing the arrray
	std::cout << "And after sorting array ar1[" << iArraySize << "]={";
	for (i = 0; i < iArraySize; i++)
	{
		std::cout << ar1[i];
		if (i < iArraySize - 1)
			std::cout << ",";
	}
	std::cout << "}\n\n";

	std::cout << "Press any key for exiting\n";
	std::cin >> a;
	return 0;
}