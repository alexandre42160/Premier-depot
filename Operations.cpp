#include "Operations.h"
#include <iostream>

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}


int division (int a, int b)
{
    int resultat;

    resultat= a/b;

    return resultat;
}

int multiplication(int a, int b)
{
    int resultat;

    resultat= a*b;

    return resultat;
}

int exposant (int nb,int exp,int resultat)
{
	for (i=0;i!=exp;i++)
	{
		resultat=resultat*nb;
	}
return resultat ;
}
int factoriel(int fact)
{
    for(i=-1;i!=fact;i++)
    {
        fact=fact*i;
    }

   return fact;
}

int Coordonnées (int x1 ,int x2,int y1,int y2,int resu)
{
  resu = sqrt(pow((x2-x1),2)+pow((y2-y1),2))
  
  return resu;
}
