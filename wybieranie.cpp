#include<iostream>
using namespace std;
 
void wybieranie(int tab[],int n)
{
int min;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++) 
    if(tab[j]<tab[min])
      min=j;
  swap(tab[i],tab[min]);
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
  
  wybieranie(tab,n); 
 
  for(int i=0;i<n;i++)
    cout<<tab[i]<<" "; 
 }
 
