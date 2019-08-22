#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *c1 = new Conta();
    ContaEspecial *ce1 = new ContaEspecial();

    c1->Depositar(3000);
    ce1->Depositar(4000);

    cout << "Saldo conta1: " << c1->getSaldo() << endl;
    cout << "Saldo conta especial: " << ce1->getSaldo() << endl;

    c1->Sacar(1500);
    ce1->Sacar(2200);

    cout << "Saldo conta1 (pos saque): " << c1->getSaldo() << endl;
    cout << "Saldo conta especial (pos saque): " << ce1->getSaldo() << endl;

    c1->setSalarioMensal(3000);
    c1->DefinirLimite();

    ce1->setSalarioMensal(3000);
    ce1->DefinirLimite();

    cout << "Limite conta1: " << c1->getLimite() << endl;
    cout << "Limite conta especial: " << ce1->getLimite() << endl;

    return 0;
}