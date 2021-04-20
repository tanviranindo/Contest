#include<stdio.h>
int main(){
	double amount;
	scanf("%lf", &amount);
	int notehundred, notefifty, notetwenty, noteten, notefive, notetwo, coinone, coinfifty, cointwentyfive, cointen, coinfive, coinzeroone, amountstored = amount, moda, modb, modc, modd, mode, modf, modg, modh, modi, modj, modk, amountstoredone = amount*100, amountstoredtwo = (int)amountstoredone;

	
	notehundred = amountstored / 100, moda = amountstored % 100;	
	notefifty = moda / 50, modb = moda % 50;
	notetwenty = modb / 20, modc = modb % 20;
	noteten = modc / 10, modd = modc % 10;
	notefive = modd / 5, mode = modd % 5;
	notetwo = mode / 2, modf = mode % 2;
	coinone = modf;
	modg = amountstoredtwo % 100;
	coinfifty = modg / 50, modh = modg % 50;
	cointwentyfive = modh / 25, modi = modh % 25;
	cointen = modi / 10, modj = modi % 10;
	coinfive = modj / 5, modk = modj % 5;
	coinzeroone = modk;
	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", notehundred, notefifty, notetwenty, noteten, notefive, notetwo, coinone, coinfifty, cointwentyfive, cointen, coinfive, coinzeroone);
	return 0;
}
