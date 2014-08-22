/*
 * =====================================================================================
 *
 *       Filename:  oppg7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22. aug. 2014 kl. 02.04 +0200
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


int add(int a, int b){
  int c = a+b;
  return c;
}

double add(double f,double g){
double c = (f + g);
  return c;
}

void add(int &a, int &b, int &C, int &d){
  d = a + b+C+d;
  C = a + b +C;
  b = a + b;

}
