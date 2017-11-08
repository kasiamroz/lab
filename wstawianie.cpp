#include<iostream>
using namespace std;
 
void wstawianie(int n, int *tab)
{
  int a, j;
  for(int i=1; i<n; i++)
    {
      a = tab[i];
      j = i-1;
      while(j>=0 && tab[j]>a) 
       {
         tab[j+1] = tab[j]; 
         --j;
       }
      tab[j+1] = a;
    }     
}
 
int main()
{
    int n, *tab;
    
    cout<<"Ilosc liczb do posortowania: ";
    cin>>n;
 
    tab = new int [n];
 
    for(int i=0; i<n; i++)
        cin>>tab[i];

    wstawianie(n, tab);
 
    for(int i=0; i<n; i++)
        cout<<tab[i]<<" ";
 }
