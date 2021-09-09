/// dois valores: a soma dos números pares e impares ate p numero selecionado
#include <iostream>
using namespace std;
int main(void)
{
int impar, par, i, n;
cout <<"Digite o numero: ";
cin>>n;
impar = 0;
for (i=1; i<=n; i+=2)
impar += i;
par = 0;
for (i=0; i<=n; i+=2)
par += i;
cout<< "\n\t O somatorio de todos os numeros impares ate " <<n<< " eh: " <<impar;
cout<< "\n\n\t O somatorio de todos os numeros pares ate " <<n<< " eh: " <<par;
return 0;
}
