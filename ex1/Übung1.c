#import <stdio.h>
int counter;
//Aufgabe 1 -> vereinfachen von funktionen
int f(){
  return counter++;
}

int func1(){
  return f() + f() + f() + f();
}
//einfacher:
int func2(){
  return 4 * f();
}
void twiddle1(int *xp, int *yp){
  *xp += *yp;
  *xp += *yp; // Problem Memory Aliasing -> 2 Pointer auf gleiche Adresse
}
//einfacher
void twiddle2(int *xp,int *yp){
  *xp = 2 * *yp;
}
int main(){
  int erg;
  counter = 0;
  erg = func1();
  printf("\nerg = %d",erg);
  erg = func2();
  printf("\nerg = %d",erg);
  printf("\n");
  //twiddle
  int x1 = 1;
  int y1 = 1;
  twiddle1(&x1,&y1);
  printf("\nx1 : %d",x1);
  twiddle2(&x1,&y1);
  printf("\nx1 : %d", x1);
  printf("\n");
  return 0;
}
