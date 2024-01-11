#include <iostream>
using namespace std;

/*Al ser una variable global se almacena en .data section*/
/*la seccion de datos(.data) es modificable en caliente*/
int variableGlobal = 0;

/*Se en .text section y no es modificable*/
/*Lo que se guarda en punto text */
void funcionGlobal(){

    /*.data section*/
    /*static hace que se ejecute una sola vez*/
    static int variableLocalEstatica = 5;

    /*stack Section*/
    int variableLocal = 20;

    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local estática: " << variableLocalEstatica << endl;
    cout << "Variable local: " << variableLocal << endl;
}

int main(){
    /* stack section*/
    int variableLocalMain = 15;

    funcionGlobal();

    cout << "Variable local en Main: " << variableLocalMain << endl;

    int *variableDinamica = new int;
    *variableDinamica = 25;

    cout << "Variable Dinamica: " << variableDinamica<< endl;

    return 0;
}