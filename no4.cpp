#include <iostream>
#include <string.h>
using namespace std;


struct Data_Mahasiswa{
	long int Nim;
	char Nama[100];
	char Fakultas[100];
};
	Data_Mahasiswa Mahasiswa1, Mahasiswa2;
	
	int main(){
		Mahasiswa1.Nim=1302000;
		Mahasiswa1.Nama ="Adit";
		Mahasiswa1.Fakultas="Ilmu Komputer";
		
		Mahasiswa2.Nim=1302001;
		Mahasiswa2.Nama ="Bayu";
		Mahasiswa2.Fakultas="Ilmu Komputer";
		
		cout<<"Data Mahasiswa 1 : "endl;
		cout<<Mahasiswa1.Nama<<","<<Mahasiswa1.Nim<<","Mahasiswa1.Fakultas<<endl;
		
		cout<<"Data Mahasiswa 2 : "endl;
		cout<<Mahasiswa2.Nama<<","<<Mahasiswa2.Nim<<","Mahasiswa2.Fakultas<<endl;
	}

