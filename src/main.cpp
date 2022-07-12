#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <Windows.h>
#include <stdio.h>
#include "../lib/Progress_bar.h"



using namespace std;

int main()
{
setColor(BLACK, BLUE);
	string Name="mateo.carrillo@epn.edu.ec";
	int longitud=Name.length();
	for(int k=0; k<=longitud;k++){
		showProgressBar_a(k, longitud);
        usleep(30);
	}
cout<<Name;
	return 0;
}


