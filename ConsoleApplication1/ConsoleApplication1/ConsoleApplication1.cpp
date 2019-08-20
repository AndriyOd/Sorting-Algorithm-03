// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int a=0;

	int iLowBorder = 0;
	int iArrayVolume = 8;
	int iMin = 0;
	int i = 0;
	int iTemp = 0;
	int n = 0;

	int ar1[10] = {1,2,3,4};
	std::cout << "Hello, World\n";
	//std::cin >>a;
	//std::cout << "\na="<<a<<"\n";
	//std::cout << "Initially ar1[4]={"<<ar1[0]<<","<<ar1[1]<< ","<<ar1[2]<<","<<ar1[3] << "}\n";

	//Printing the arrray
	std::cout << "Initially ar1[" << iArrayVolume << "]={";
	for (i = 0; i < iArrayVolume; i++)
	{
		std::cout << ar1[i];
		if (i < iArrayVolume - 1)
			std::cout << ",";
	}
	std::cout << "}\n";

	// Entering the elements of the array ar1[4]
	for (i = 0; i < iArrayVolume; i++)
	{
		std::cout << "Enter ar["<<i <<"]\n";
		std::cin >> ar1[i];

	}

	//Printing the arrray
	std::cout << "And now ar1[" << iArrayVolume << "]={";
	for (i = 0; i < iArrayVolume; i++)
	{
		std::cout << ar1[i];
		if (i < iArrayVolume - 1)
			std::cout << ",";
	}
	std::cout << "}\n";
	//std::cout << "And now ar1[4]={" << ar1[0] << "," << ar1[1] << "," << ar1[2] << "," << ar1[3] << "}\n";

	/*
	std::cout << "Enter ar1 elements:\nar1[0]=";
	std::cin >> ar1[0];
	std::cout << "Enter ar1 elements:\nar1[1]=";
	std::cin >> ar1[1];
	std::cout << "Enter ar1 elements:\nar1[2]=";
	std::cin >> ar1[2];
	std::cout << "Enter ar1 elements:\nar1[3]=";
	std::cin >> ar1[3];
	*/

	// Sorting the array ar1[4]
	std::cout << "Sorting...\n";
	while (iLowBorder<iArrayVolume-1)
	{
		iMin = ar1[iLowBorder];
		n = iLowBorder;
		for (i=iLowBorder+1; i<iArrayVolume; i++)
		{
			if (ar1[i] < iMin)
			{
				n=i;
				iMin = ar1[i];
			}
		}

		if (n != iLowBorder)
		{
			iTemp = ar1[iLowBorder];
			ar1[iLowBorder] = ar1[n];
			ar1[n] = iTemp;
		}

		//std::cout << "Step " <<iLowBorder<< "\n";
		//std::cout << "ar[" << n <<"] = "<<ar1[iLowBorder]<<" was the Min\n";
		//std::cout << "ar1[4]={" << ar1[0] << "," << ar1[1] << "," << ar1[2] << "," << ar1[3] << "}\n";
		iLowBorder++;
	} 
	//while (iLowBorder<iArrayVolume);

	//Printing the arrray
	std::cout << "And after sorting ar1[" << iArrayVolume << "]={";
	for (i = 0; i < iArrayVolume; i++)
	{
		std::cout << ar1[i];
		if (i < iArrayVolume - 1)
			std::cout << ",";
	}
	std::cout << "}\n";
	//std::cout << "And after sorting ar1[4]={" << ar1[0] << "," << ar1[1] << "," << ar1[2] << "," << ar1[3] << "}\n";


	std::cout << "Press any key for exiting\n";
	std::cin >> a;
    return 0;
}