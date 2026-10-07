#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Vytvořte program v jazyce C++ pro výpočet obvodu trojúhelníka
    //zadaného délkami jeho tří stran
    /*double a,b,c,obvod;
    cin>>a>>b>>c;
    if (a+b > c && b+c > a && c+a > b) {
        obvod = a+b+c;
        cout << obvod << endl;
    }
    else {
        cout << "Nejedna se o trojuhelnik" << endl;
    }

    //Vytvořte program v jazyce C++ pro určení, zda je trojúhelník zadaný svými délkami
    //stran rovnostranný, rovnoramenný nebo pravoúhlý.

    double a,b,c;
    cin>>a>>b>>c;
    if (a+b > c && b+c > a && c+a > b) {
        if (a==b && c==a) {
            cout << "Jedna se o rovnostranny trojuhelnik" << endl;
        }
        else if (a==b or b==c or c==a) {
            cout << "Jedna se o rovnoramenny trojuhelnik" << endl;
        }
            if (a*a+b*b==c*c or b*b+c*c==a*a or c*c+a*a==b*b) {
                cout << "Jedna se o pravouhly trojuhelnik" << endl;
        }


    }
    else {
        cout << "Nejedna se o trojuhelnik" << endl;
    }

    //Vytvořte program v jazyce C++ pro výpočet kořenů kvadratické rovnice na základě
    //zadaných koeficientů a, b, c, kde platí ax2 + bx + c = 0.
#include <cmath>
    int a,b,c;
    cin>>a>>b>>c;
    if (a == 0) {
        cout << "Nejedna se o kvadratickou rovnici" << endl;
    }
    else if (a == 0 and b > 0) {
        cout << "Jedna se o rovnici linearni" << endl;
    }
    else {
        int vys1,vys2;
        int diskriminant = (b*b) - (4*a*c);

        if (diskriminant > 0) {
            vys1 = (-b + sqrt(diskriminant)) / (2*a);
            vys2 = (-b - sqrt(diskriminant)) / (2*a);
            cout << vys1 << " " << vys2 << endl;
        }
        else if (diskriminant == 0) {
            vys1 = -b / (2*a);
            cout << "Rovnice ma prave 1 reseni, a to je " << vys1 << endl;
        }
        else {
            cout << "Zapis rovnice je spravny, ale rovnice v mnozine R nema reseni" << endl;
        }
    }

    //Vytvořte program v jazyce C++ pro výpis počtu záporných čísel v posloupnosti čísel
    //zakončeným číslem 0
    int cislo;
    unsigned int pocet_celkem=0,pocet_zapornych=0;
    while (cin >> cislo and cislo != 0) {
        if (cislo < 0) {
            pocet_zapornych++;
        }
        pocet_celkem++;
    }
    cout << pocet_zapornych << endl;


//Vytvořte program v jazyce C++ pro výpis binární podoby paměťového zobrazení zadaneho cisla

    unsigned int cislo;
    string vystup="";
    cin >> cislo;
    while (cislo>0) { //moznost 1
        int zbytek = cislo%2;
        vystup = char(zbytek + '0') + vystup;
        cislo /= 2;
    }
    cout << vystup;
    cin >> cislo;
    while (cislo>0) { //moznost 2
        if (cislo & (unsigned int)pow(2,31)) {
        cout << "1";
        } else {
        cout << "0";
        }
        cislo = cislo << 1;
    }*/

    //Příklad 4.18 Vytvořte program v jazyce C++ pro určení, zda je načtené číslo prvočíslem.
    unsigned int delitel=2, cislo;
    cin >> cislo;
    while (sqrt(cislo>=delitel and cislo % delitel != 0) {
        delitel++;
    }
    if (cislo == delitel) {
        cout << "je" << endl;
    }
    else {
        cout << "neni" << endl;
    }
    return 0;
}
