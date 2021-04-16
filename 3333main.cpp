#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
ifstream plik1;
   
int a,b,c;
plik1.open("trojki.txt");
while(!plik1.eof()){
plik1>>a;
plik1>>b;
plik1>>c;  
int kolejna_cyfra;
int kolejna_cyfra2;
    
int a2=a;
int b2=b;
int suma = 0;
while(a>0)
{
kolejna_cyfra=a % 10;
suma+=kolejna_cyfra;
a/=10;
}
int suma2;
while(b>0)
{
kolejna_cyfra2=b % 10;
suma2+=kolejna_cyfra2;
b/=10;
}
if(suma+suma2 == c){
cout<<a2<<", "<<b2<<", "<<c<<endl;
    }
}
return 0;
}
