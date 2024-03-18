#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanca, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;


void input(){
    cout << "Nama pembeli : ";
    cin >> nama;
    cout << "jumlah Xpander: ";
    cin >> nXpander;

    cout << "jumlah nPorsche: ";
    cin >> nPorsche;

    cout << "jumlah nAvanca: ";
    cin >> nAvanca;

    cout << "jumlah nBrio: ";
    cin >> nBrio;

    cout << "jumlah nLamborghini: ";
    cin >> nLamborghini;
}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanca * hPorsche) + (nBrio * hBrio) + (nLamborghini * hLamborghini);
}

void Display(){
    cout << "Total harganya : " << TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
    input();
    Display(); 
    cout << "Apakah ingin membeli ? ";
    cin >> pilihan; 
    }while(pilihan == 'y' || pilihan == 'y');
     
}