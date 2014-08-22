/*
 * =====================================================================================
 *
 *       Filename:  oving2.cpp
 *
 *    Description:  Øving 2
 *
 *        Version:  1.0
 *        Created:  17. aug. 2014 kl. 17.00 +0200
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aksel Stadler Kjetså 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 
#include "oppg7.h"
using namespace std;


  // 
  // Oppgave 1
  // double hypoteneuse(double side1,double side2);
  // int sum(int x,int y, int z);
  // void instructions();
  // double intToDouble(int number);
  
//Oppgave 2
//

void printTime(int h, int m, int s){
  cout << h <<" Hours, " << m << " minutes and " <<s<< " seconds" <<endl ;
}

void getTime(int input){
  
  int sek =0;
  int min = 0;
  int temp = 0;
  int tim = 0;
  int dager = 0;
  int aar = 0;

  sek = input % 60;
  min = ((input-sek) % 3600)/60;
  temp = (input -60*min - sek)/3600;
  tim = temp % 24;
  temp = (temp -tim)/24;
  dager = temp % 365;
  aar = (temp-dager)/365;
 
  printTime(tim,sek,min);
}

int randomOneToFifty(){
  int a;
  srand(time(0));
  a = rand() %41 + 10;
  
  return a;
}

float checkTrigonometry(float number){

  if (tan(number) == sin(number)/cos(number))
    return 0;

  else
    return tan(number) - sin(number)/cos(number);
}


double Ek(double fart, double masse){

double Kin = 0.5*fart*pow(masse,2);
return Kin;
}

int isprime(int n){
  
  int t= n-1;

  while (t >1){
    if (n % t ==0){
      return 0;
  }
    t = t-1;
}
return 1;
}

int faktoriserer(int n){
  
  if (isprime(n)){
    return n;
  }
  int a = 0;
  int b = 0;
  int t =n-1;
	while (t >1){
    if (n % t ==0){
      if (isprime(t)){
	return t;
      }
      else {
	 a = faktoriserer(t);
	 b = faktoriserer(t/n);
      }

    }
    t = t-1;
	}
	return (a > b ? a : b);
}

  int main(){
  int a = 0; 
  int h,m,s;
  
  cout << "skriv inn timer,minutter, sekunder : ";
  cin >> h >> m >> s;
  printTime(h,m,s);

  cout << "Skrivi nn antall sekunder :";
  cin >> a;
  getTime(a);

  a =randomOneToFifty();
  cout <<"tilfeldig tall er :" << a <<endl;

  int b = 0;
  cout <<"Skriv inn tall for trigonometrisk sjekk :";
  cin >>b;

  b = checkTrigonometry(b);
  cout << b <<endl;

cout << " kintetisk energi er  :" << Ek(10,80) <<endl;
a = 4;
b = 5;
cout << "DEL 6     " << endl;
cout << "Første 4 +5 er  :" << add(a,b) <<endl;
double o = 3.5;
double p =6.25;
cout << "andre 3.5 + 6.25  :" <<add(o,p) <<endl;

a = 1;
b = 2;
int C = 5;
int d=1;


add(a,b,C,d);
cout << "Tredje er :" << a <<" " << b<<"  "<<  C<<" "<<  d;

cout << "primtallsjekker skriv inn tall" <<endl;
cin >> a;
cout << isprime(a)<<endl;

cout << "Faktoriseringsdrit skriv inn tall :" <<endl;
cin >> a;
cout << faktoriserer(a) << endl;

}




