#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha();

    Funcionario *assl = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();

    assl->setNome("Franklin Anthony");
    assl->setMatricula(123);
    ((Assalariado *)assl)->setSalario(1200);

    com->setNome("Maria Jose");
    com->setMatricula(659);
    ((Comissionado *)com)->setSalarioBase(998);
    ((Comissionado *)com)->setVendasSemanais(500);
    ((Comissionado *)com)->setPercentualComissao(20);

    hor->setNome("Jose Antonio");
    hor->setMatricula(563);
    ((Horista *)hor)->setSalarioPorHora(50);
    ((Horista *)hor)->setHorasTrabalhadas(45);

    sgf.setFuncionario(assl);
    sgf.setFuncionario(com);
    sgf.setFuncionario(hor);

    cout << assl->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    cout << "Total de pagamento na folha: " << sgf.calculaValorTotalFolha() << endl;
    cout << "Salario funcionario de matricula 659: " << sgf.consultaSalarioFuncionario(659) << endl;

    try{
        cout << "Salario funcionario de matricula 15451: " << sgf.consultaSalarioFuncionario(15451) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}