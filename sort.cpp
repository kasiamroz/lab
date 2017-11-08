//Sortowanie bąbelkowe z warunkiem stopu

#include <iostream>
using namespace std;

void sortowanie_babelkowe(int tab[],int n)
{
  bool isSorted;
  for(int i=0;i<n;i++)
  {
    isSorted=true;  
    for(int j=1;j<n-i;j++)
    {
	  if(tab[j-1]>tab[j])
      swap(tab[j-1], tab[j]);
      isSorted=false;
      if(true==isSorted) break;
    }
  }
}

int main()
    {
		
		int *tab, n;
 
  cout<<"Ilosc liczb do posortowania: ";
  cin>>n;
 
  tab = new int [n];
  for(int i=0;i<n;i++)
    cin>>tab[i];
 
  sortowanie_babelkowe(tab,n);
 
  for(int i=0;i<n;i++)
          cout<<tab[i]<<" ";
 
  cout<<endl;
  return 0;
		
    
          }
