#include <iostream>
#include <cmath>
using namespace std;

//Urcity integral
/*
double funkce(double x){
    return x*x;
}
double mujIntegral(double dolni, double horni,int pocet){
    double vys=0;
    for (int i = 0; i < pocet; i++){
        double x1,x2;
        x1 = dolni + i * ((horni - dolni) / pocet);
        x2 = dolni + (i+1) * ((horni - dolni) / pocet);
        vys += (x2-x1) * ((funkce(x1)+funkce(x2))/2);
    }
    return vys;
}

double dolni, horni;
int pocet;
cin >> dolni >> horni;
cin >> pocet;
cout << mujIntegral(dolni, horni, pocet) << endl;*/

int main() {
    /*
    *Příklad 4.26 Vytvořte funkci v jazyce C++, která na základě vstupních parametrů x a spočítá funkční hodnotu cos(x) s uvedenou přesností. Pro výpočet použijte aproximaci funkce
cos(x) využívající rozvoje v nekonečnou řadu: cos(x)
    double absolutniHodnota(double x) {
    if (x>0) {
        return x;
    }
    return -x;
}

double cosinus(double x, double presnost) {
    double krok=1,vys=0;
    unsigned int n = 0;
    while (presnost < absolutniHodnota(krok)) {
        vys+=krok;
        krok = -krok * x*x /((2*n+1)*(2*n+2));
        n++;
    }
    return vys;
}

    double cislo;
    cin >> cislo;
    cout << cosinus(cislo,0.001) << endl;

    */

    //najit kde je nula

    /*
    #include <iostream>
#include <cmath>
using namespace std;


double funkce(double x) {
 return x*x - 1;
}

bool kladne(double cislo) {
 return cislo>0;
}




int main() {
 double dolni,horni;
 double presnost = 0.01;

 cin>>dolni>>horni;
 while (horni-dolni > presnost and funkce(horni)!=0 and funkce(dolni)!=0) {
  double stred = dolni+ (horni-dolni)/2;
  double f_d = funkce(dolni);
  double f_s = funkce(stred);
  if (kladne(f_d) != kladne(f_s)) {
   horni = stred;
  }
  else {
   dolni = stred;
  }
  cout<<dolni<<" "<<horni<<endl;
 }
 if (funkce(horni)==0) {
  cout<<horni;
 }
 else if(funkce(dolni)==0){
     cout<<dolni;
 }
 else if (kladne(funkce(dolni)) != kladne(funkce(horni))) {
  cout<<(dolni+(horni-dolni)/2);
 }
 else {
  cout<<"nenalezli jsem";
 }

 return 0;
}
    }*/



    




    return 0;
}
