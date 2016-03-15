#include <iostream>
#include <stdlib.h>
#include <bitset>

using namespace std;

int main()
{
  bitset<10> prueba;
  cout << "Prueba: " << prueba << endl;
  prueba.set(0,1);
  cout << "Prueba: " << prueba << endl;
  prueba = prueba << 1;
  prueba.set(0,1);
  cout << "Prueba: " << prueba << endl;
  prueba = prueba << 1;
  prueba.set(0,0);
  cout << "Prueba: " << prueba << endl;
  cout << "Prueba: ";
  for(int i=prueba.size()-1;i>=0;i--)
  {
      cout << prueba[i];
  }
  cout << endl;
  return 0;
}
