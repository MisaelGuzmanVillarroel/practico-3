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
  int visitas =0;
  int torta = 0;
   while(visitas <= 10){
       cin >> torta;
       if(torta == 1){
           std::cout<<"Om-nom-nom" << std::endl;
           visitas++;
       }else{
           std::cout << "Sin pastel" << std::endl;
           
       }
       if(visitas == 10){
         std::cout << "El ciudadano promedio ya se ha quedado sin pastel" << std::endl;  
       }
   }
    return 0;
}
