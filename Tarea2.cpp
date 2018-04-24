#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>
#include <cstring>
#include <vector>
#include <xlsxwriter.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

#define NOM_ENTRADA  "utem.csv" //nombre de fichero

using namespace std;

int ContarLineas(char archivo[]){
	ifstream file(archivo);
	string linea;
	int lin=0;
		
		while(getline(file,linea)){
			lin++;
		}
		
		return lin;
}

int main(int argc, char* argv[]){

	int CantTot=0; //cantidad de lineas

	CantTot = ContarLineas(argv[1]); //llamada de la funcion
	
	cout<<"Hay "<<CantTot-1<<" lineas en total"<<endl;

	return 0;
}