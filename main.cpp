#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(){
	int scelta, numero1, numero2, resto;
	float risultato;
	float numero_pot, esponente, potenza=1;
	int for_potenza;
	float radice, risultato_radice;
	char operazione;
	do{
		system("cls");
		cout<<"1) Calcolatrice"<<endl;
		cout<<"2) Potenza"<<endl;
		cout<<"3) Radice quadrata"<<endl;
		cout<<"4) Chiudi"<<endl;
		cin>>scelta;
		if(scelta==1){
			system("cls");
			cout<<"Fai l'operazione"<<endl;
			cin>>numero1>>operazione>>numero2;
			switch(operazione){
				case '+':
					risultato=numero1+numero2;
					cout<<"RISULTATO "<<risultato<<endl;
					system("pause");
				break;
				case '-':
					risultato=numero1-numero2;
					cout<<"RISULTATO "<<risultato<<endl;;
					system("pause");
				break;
				case '*':
					risultato=numero1*numero2;
					cout<<"RISULTATO "<<risultato<<endl;;
					system("pause");
				break;
				case '/':
					risultato=numero1/numero2;
					resto=numero1%numero2;
					cout<<"RISULTATO "<<risultato<<endl;
					cout<<"RESTO "<<resto<<endl;
					system("pause");
				break;
			}
		}
		if(scelta==2){
			system("cls");
			cout<<"Numero"<<endl;
			cin>>numero_pot;
			cout<<"Potenza"<<endl;
			cin>>esponente;
			for(for_potenza=0; for_potenza<esponente; for_potenza++)
				potenza=potenza*numero_pot;
				cout<<"RISULTATO "<<potenza<<endl;
				system("pause");
		}
		if(scelta==3){
			system("cls");
			cout<<"Numero";
			cin>>radice;
			cout<<"RISULTATO "<<risultato_radice;
			system("pause");
		}
	}while(scelta!=4);
	system("cls");
	return 0;
}
