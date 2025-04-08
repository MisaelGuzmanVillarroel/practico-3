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
     std :: string linea ;
   getline(std :: cin,linea);
   
   string palabra = "";


    
   for(int i = 0; i < linea.size(); i++) {
    char caracter = linea[i];
        if (caracter == ' '){
            std :: cout << "[" << palabra << "]" << std :: endl;
            palabra = "";
               
            }else{
                palabra += caracter;
            }
        
   }
   std :: cout << "[" << palabra << "]" << std :: endl;
    
    return 0;
}
