//III tetel
//1. kerdes: nem lehet mas valtozot hasznalni?

void ImparPar(int n)
{
  int p=n, v, i=0;
  while(n>0)
    {
      if(n%2==0)
        v=v+n*pow(10,i);
      n=n/10;
      i++;
    }
  while(p>0)
    {
      if(p%2!=0)
        v=v+n*pow(10,i);
      p=p/10;
      i++;
    }
  cout<<v;
}

//kijavitva

void ImparPar(int n)
{
  int p=n, v=0,i=1;
  while(n>0)
    {
      if(n%2==0)
      {
          v=v+(n%10)*i;
          i=i*10;
      }
      n=n/10;
    }
  while(p>0)
    {
      if(p%2!=0)
      {
          v=v+(p%10)*i;
          i=i*10;
      }
      p=p/10;
    }
  cout<<v;
}

//2.

void alt(char[100] word)
{
  bool check[100]=0;
  for(int i=0;char[i]==0;i++)
    {
      if(char[i]=='a' || 'e' || 'i' || 'o' || 'u')
        if(check[i-1]==1)
        {
          cout<<"nu alterneaza";
          return;
        }
        else
        check[i]=1;
    }
  cout<<"alterneaza";
}

//3.
//a. Eloszor elkezdjuk tolteni a bac.txt tartalmat egy undec (undecided roviden) nevu valtozoba.
//Ezutan az utana levo szamot egy check nevu valtozoba.
//Megnezzuk hogy 1-es vagy 2-es van a check-ben es asszerint beletoltjuk a sak[1] vagy go[1] valtozoba.
//Mielott beletolti, az azelott levo sak[1] vagy go[1]-ben tarolt adatot attesszuk a sak[0] vagy go[0]-ba. 
//Ez hatekony, mivel csak akkor fogja frissiteni a tartomanyt hogyha az o kategoriajaba kap erteket.
//Azutan megnezi, hogy abban a kategoriaban 0-asban tarolt ertek nagyobb-e mint az 1-esben tarolt, es ha igen,
//akkor hozzaad egyet annak a kategorianak az Eredmeny valtozojahoz.
//A vegen kiirja a ket Eredmenyt.

//b.

void sakGo()
{
  int sak[2], go[2], sakEredmeny=0, goEredmeny=0, check, undec;
  ifstream f;
  f.open("bac.txt");
  while(f>>undec)
    {
      f>>check;
      if(check=1)
      {
        sak[1]=sak[0];
        undec=sak[1];
        if(sak[0]>sak[1])
          sakEredmeny++;
      }
        else
      {
        go[1]=go[0];
        undec=go[1];
        if(go[0]>go[1])
          goEredmeny++;
      }
    }
  cout<<sakEredmeny<<" "<<goEredmeny; 
}
