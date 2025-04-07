/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   std :: string palabra;
   getline(std :: cin,palabra);

    int indice=1;
    bool primerapal = true;
    
   for(int i = 0; i < palabra.size(); i++) {
    char caracter = palabra[i];
        if (caracter == ' '){
            std :: cout << indice - 1 ;
            primerapal = false;
            if(!primerapal){
            std :: cout << " ";    
            }
        }
        indice ++;
    }
   if (!primerapal){
       cout << " ";
   }
   std :: cout << indice - 1 << std :: endl;
    return 0;
}
