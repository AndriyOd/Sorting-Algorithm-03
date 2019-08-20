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


	// Sorting the array ar1[4]
	std::cout << "Sorting...\n\n";
	while (iLowBorder<iArraySize - 1)
	{
		iMin = ar1[iLowBorder];
		n = iLowBorder;
		for (i = iLowBorder + 1; i<iArraySize; i++)
		{
			if (ar1[i] < iMin)
			{
				n = i;
				iMin = ar1[i];
			}
		}

		if (n != iLowBorder)
		{
			iTemp = ar1[iLowBorder];
			ar1[iLowBorder] = ar1[n];
			ar1[n] = iTemp;
		}

		
		//just delete the previous line
		//--- Let's add some extra lines to view interim information ---
		//---------------- Beginning ----------------
		std::cout << "Step " <<iLowBorder<< "\n";
		std::cout << "ar[" << n <<"] = "<<ar1[iLowBorder]<<" was the Min\n";

		//Printing the arrray
		std::cout << "And now ar1[" << iArraySize << "]={";
		for (i = 0; i < iArraySize; i++)
		{
		std::cout << ar1[i];
		if (i < iArraySize - 1)
		std::cout << ",";
		}
		std::cout << "}\n\n";
		//---------------- End ----------------
		//just delete the next line
		

		iLowBorder++;
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