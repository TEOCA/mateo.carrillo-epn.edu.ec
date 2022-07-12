
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

string Name=" mateo.carrillo@epn.edu.ec";



enum Colors
{
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LGREY = 7,
    DGREY = 8,
    LBLUE = 9,
    LGREEN = 10,
    LCYAN = 11,
    LRED = 12,
    LMAGENTA = 13,
    YELLOW = 14,
    WHITE = 15
};

void setColor(int Background, int Text)
{
    int colorTexto = Text + (Background * 16);         
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(terminal, colorTexto);
}


void showProgressBar_a(int k, int longitud){
    int cantidad=25, cantidad2;
    int count = 0, count2=0, count3=1;
    FILE *fichero = fopen("file/log.txt", "w");
    while(count<longitud +1);
    {

        fflush(stdin);

        int j;
        int i;
        cout<<"[";
        for(int i =0; i<count; i=i+1)
        if(i==0){
        cout<<" ";
        }
        else{
        cout<<"=";
        }
        usleep(5000);
        

		if(count==25){
		cout<<"=";
		}
		else if(count==0){
			cout<<" ";
		}
        else if(count==1){
			cout<<"=";
        }
        else{
			cout<<"-";
        }

        for(int j=cantidad; j>count ; j--){ 
            cout<<" ";
        }
        cout<<"]";
        

        usleep(400);
        for(int a=count;a<=count2;a++){
            cout<<"%"<<a*4;
            usleep(400);
        }
        for(int b=count;b<=count2;b++){
        cout<<"\t"<<"Loading: "<<b<<" de "<<"25 ";
        usleep(400);
        }
        for(int c=0; c<=count2;c++){
  
            cout<<Name[c];
            usleep(400);

        }
        cout<<endl;
        count++;
        count2++;
        count3++;
		cout<<endl;

    }


    if(count==26){
    exit(1);
    }
}



