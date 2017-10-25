#include <iostream>
using namespace std;
int main()
{
int tab[10]={34,75,2,33,9,57,8,192,658,8};
int najwiekszy;
int najmniejszy;


najwiekszy = tab[ 0 ];
najmniejszy = tab[ 0 ]; 

for( int i = 1; i < 10; i++ )
{
    if( tab[ i ] > najwiekszy )
         najwiekszy = tab[ i ]; 
    
    if( tab[ i ] < najmniejszy )
         najmniejszy = tab[ i ];
    
}
cout<<najmniejszy<<endl;
cout<<najwiekszy<<endl;
}


		
