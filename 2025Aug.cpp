//I Tetel
//1. a
//2. ?
//3. c
//4. b
//5. b?

//II Tetel
//a. NU 11 5 ?hiba
//b. 80, 17
//c.

void II()
{
  int x,y,cx=0,cy=0;
  cin>>x>>y;
  while(x>=10 || y>=10)
    {
      while(x+y!=0)
        {
          cx=cx+x%10;
          x=x/10;
          cy=cy+y%10;
          y=y/10;
        }
      x=cx;
      cx=0;
      y=cy;
      cy=0;
    }
  if(x==y)
    cout<<"DA "<<x;
  else
    cout<<"NU "<<x<<" "<<y;
} 

//d.
/*
beolvas x,y
(különböző természetes számok)
cx <- 0; cy <- 0
┌végezd el
│┌amíg x+y≠0 végezd el
││ cx <- cx+x%10; x <- [x/10]
││ cy <- cy+y%10; y <- [y/10]
│└■
│ x <- cx; cx <- 0; y <- cy; cy <- 0
└■amíg x<=10 vagy y<=10 
┌ha x=y akkor kiír "DA ",x
│különben kiír "NU ",x," ",y
└■
*/

//2. f(3,9)=3, f(1,1000)=25

int f(int x,int y)
{ 
  if(x*5>y/5) 
    return x;
  return f(x*5,y/5);
}

x=1,    5,  25
y=1000, 200,40,

//3.
struct fem
{
  int pret;
  char denumire[30];
};
  
struct bijuterie
{
  int greutate;
  fem metal;
};

bijuterie b;
