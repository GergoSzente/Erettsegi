#include <iostream>

using namespace std;

//1. TETEL

/*1. b.
  2. d
  3. c
  4. a.
  5. ?

  2. TETEL
  1. a. 15
  b. 16, 18
  c. 
  */

n=10
s=2
i=3
nr=2
j=1

void S2()
{
  int n, s, i, nr, j;
  cin>>n;
  s=0;
  i=1;
  while(s<n)
    {
      j=i;
      nr=0;
      while(j!=0)
        {
          nr=nr+j%2;
          j=j/2;
        }
      if(nr==1)
        s=s+i;
      i=i+1;
    }
  cout<<s;
}

/*
d. ismételd
  {
    nr<-nr+j%2; j<-[j/2]
  }ameddig j=0

2. ?
3.
*/

void S2_3()
{
  int a[4][4];
  for(int i=1; i<=5; i++)
    for(int j=1; j<=5; j++)
      {
        if((i*j)%2==0)
          if((i*j)%8==0 || i==j)
            a[i-1][j-1]=0;
          else
            a[i-1][j-1]=3;
        else
          a[i-1][j-1]=2;
      }
}

/*
3. TETEL
1.
*/

int baza()
{
  int n, b;
  while(n>0)
    {
      if(n%10>=b)
        return -1;
      n=n/10;
    }
  return 1;
}

//2. ?

struct virag
{ 
  char nev[20];
  int value;
};

virag v[200];

bool abc(char a[20], char b[20])
{
  for(int i=0;i<20;i++)
    {
      if(a[i]<b[i])
        return 0;
      if(b[i]<a[i])
        return 1;
    }
}

void valaszt()
{
  int min=10;
  char a[20], b[20];
  for(int i=0;i<200;i++)
    if(v[i].value<min)
    {
      min=v[i].value;
      a=v[i].nev;
    }
 
  for(int i=0;i<200;i++)
    {
      if(v[i].value==min)
      {
        b=v[i].nev;
        if(abc(a,b))
          a=b;
      }
    }
  cout<<a;
}

//3. a
//Megszamoljuk, hogy a sorozatban a 0-sok kozott hany egyes van. Ezeket egy tombbe felirjuk, es kozben nezzuk hogy melyik a legnagyobb szam ezek kozul, illetve hogy melyik a legnagyobb ket egymas melletti sorozat osszege.
//Ezutan osszemerjuk a legnagyobb sorozat, es legnagyobb osszeg ertekeit, es asszerint kiirjuk a valaszt.

//b.
void lopikula()
{ int N=100000;
  int x[N]={0},a,i=0,ln=0, lno=0;
  ifstream f;
  f.open("bac.txt");
  while(f>>a)
    {
      switch(a)
      {
          case 0:if(x[i]>x[ln])
                  ln=i;
                if((x[i]+x[i-1]) > (x[lno]+x[lno-1]) && i>0)
                  lno=i;
                i++;
                break;
        case 1: x[i]++; break;
      }

    }
  if(x[ln]<(x[lno]+x[lno-1]))
  {
           for(int j=0;j<x[lno];j++)
              {
                cout<<1<<" ";
              }
          cout<<0<<" ";
          for(int j=0;j<x[lno-1];j++)
              {
                cout<<1<<" ";
              }
  }
  else
  {
      cout<<0<<" ";
        for(int j=0;j<x[ln];j++)
              {
                cout<<1<<" ";
              }
  }
}
