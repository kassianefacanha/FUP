#include<iostream>
#include<string>

using namespace std;

int main() {
	int ts,tm,tss;
	float th;
	cout<<"informe o tempo em segundos";
	cin>>ts;
	th=ts/3600;
	tm=ts%3600;
	tss=tm%3600
	cout<<th<<"horas"<<tm"minutos"<<tss<<"segundos";

return	0;


}
