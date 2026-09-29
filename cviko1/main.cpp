//Nektere priklady jsem preskocil protoze se dost opakuji

#include <iostream>
using namespace std;
int main() {
    
    //Vytvořte program v jazyce C++ pro výpočet aritmetického průměru tří čísel.
    
    /*
    int c1,c2,c3;
    cin >> c1 >> c2 >> c3;
    double prumer = 0;
    prumer = (c1+c2+c3)/3.0;
    cout << prumer << endl;
    
    //Vytvořte program v jazyce C++ pro výpis dvou načtených čísel seřazených sestupně
    
    int c1,c2;
    cin >> c1 >> c2;
    if (c1 > c2){
        cout << c1 << "," << c2 << endl;
    } else {
        cout << c2 << "," << c1 << endl;
    }
    
    //Vytvořte program v jazyce C++ pro určení minima za tří zadaných čísel.
    
    
    int c1,c2,c3, min;
    cin >> c1 >> c2;
    min = c2;
    if (c1 < c2){
        min = c1;
    }
    cin >> c3;
    if (c3 < min){
        min = c3;
    }
    cout << min << endl;
    
    //Vytvořte program v jazyce C++, který provede převod zadaného celého čísla na číslo
    //opačné prostřednictvím binárních operací v doplňkovém kódu.
    
    int cele;
    cin >> cele; //přečtení celého čísla ze vstupu
    cele = ~ cele + 1; //přepočet na opačné číslo
    cout << "Opačné číslo je: "<< cele << endl;
    
    //Vytvořte program v jazyce C++ pro zjištění, zda zadané číslo je, či není sudé.
     
     int c1;
     cin >> c1;
     if (c1%2==0){
     cout << "Sude" << endl;
     } else {
     cout << "Liche" << endl;
     }
     
     //Vytvořte program v jazyce C++ pro výpočet součinu tří zadaných čísel.
     
     int c1, c2, c3, vys;
     cin >> c1 >> c2 >> c3;
     vys = c1*c2*c3;
     cout << vys << endl;
     
     
     //Vytvořte program v jazyce C++ pro výpočet obsahu a obvodu obdélníka zadaného dvěma stranami.
     //o = 2*(a+b) ; S = a*b
     
     int sA,sB,o,S;
     cin >> sA >> sB;
     o = 2*(sA+sB);
     S = sA * sB;
     cout << "Obvod je " << o << endl;
     cout << "Obsah je " << S << endl;
     
     //Vytvořte program v jazyce C++ pro výpočet kořene lineární rovnice ax + b= 0 (tedy
     //hodnoty x). Koeficienty a a b načte algoritmus ze vstupu.
     
     double a,b, vys;
     cin >> a >> b;
     if (a == 0){
     cout << "Nejedna se o linearni rovnici" << endl;
     } else {
     vys = -(b/a);
     cout << vys << endl;
     }
     
     
     //Vytvořte program v jazyce C++ pro zjištění hodnot tří nejnižších bitů vnitřní reprezentace zadaného //celého čísla.
     
     int cislo;
     cin >> cislo;
     int bit2 = (cislo >> 2) & 1;
     int bit1 = (cislo >> 1) & 1;
     int bit0 = cislo & 1;
     cout << bit2 << bit1 << bit0 << endl;
     
     //Vytvořte program v jazyce C++ pro zjištění hodnot čtyř nejvyšších bitů vnitřní reprezentace zadaného //znaku.
     
     unsigned char znak;
     cin >> znak;
        
         int bit7 = (znak >> 7) & 1;
         int bit6 = (znak >> 6) & 1;
         int bit5 = (znak >> 5) & 1;
         int bit4 = (znak >> 4) & 1;

         cout << bit7 << bit6 << bit5 << bit4 << endl;
     
     //Vytvořte program v jazyce C++ pro zjištění, kolik bajtů má znak v kódování UTF-8 zadaný ze vstupu.
     
     unsigned char prvniBajt;
         cin >> prvniBajt;

         // Počet bajtů v UTF-8 určují nejvyšší bity prvního bajtu:
         // 0xxxxxxx -> 1 bajt (ASCII)
         // 110xxxxx -> 2 bajty
         // 1110xxxx -> 3 bajty
         // 11110xxx -> 4 bajty

         if ((prvniBajt & 0x80) == 0x00) {          // 0xxxxxxx
             cout << 1 << endl;
         } else if ((prvniBajt & 0xE0) == 0xC0) {   // 110xxxxx
             cout << 2 << endl;
         } else if ((prvniBajt & 0xF0) == 0xE0) {   // 1110xxxx
             cout << 3 << endl;
         } else if ((prvniBajt & 0xF8) == 0xF0) {   // 11110xxx
             cout << 4 << endl;
         } else {
             cout << "Neplatny pocatecni bajt UTF-8" << endl;
         }

         return 0;
     }
     
     //Vytvořte program v jazyce C++ pro výpočet kořenů kvadratické rovnice na základě
     //zadaných koeficientů a, b, c, kde platí ax2 + bx + c = 0.
     
     double a, b, c;
     cin >> a >> b >> c;

         if (a == 0) {
             cout << "Nejedna se o kvadratickou rovnici" << endl;
         } else {
             double d = b * b - 4 * a * c;

             if (d > 0) {
                 double x1 = (-b + sqrt(d)) / (2 * a);
                 double x2 = (-b - sqrt(d)) / (2 * a);
                 cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
             } else if (d == 0) {
                 double x = -b / (2 * a);
                 cout << "x = " << x << endl;
             } else {
                 cout << "Rovnice nema v realnych cislech reseni" << endl;
             }
         }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     */
    
    
    
    return 0;
}
