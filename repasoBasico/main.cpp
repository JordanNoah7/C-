#include <iostream>
#include <string>

using namespace std;

int main() {
    //Variables
    char variable_char = 'a';
    cout << variable_char << endl;

    string variable_string = "varios caracteres";
    cout << variable_string << endl;

    int variable_entera = 10;
    cout << variable_entera << endl;

    float variable_float = 3.1416;
    cout << variable_float << endl;

    double variable_double = 34.1;
    cout << variable_double << endl;

    bool variable_bool = true;
    cout << variable_bool << endl;

    variable_char = 'b';
    cout << variable_char << endl;

    //Condicionales
    int iValor = 15;
    string szNombre = "Luis";
    if (iValor > 14 && szNombre == "Jorge") {
        cout << "Es mayor a 14 y se llama Luis" << endl;
    } else {
        printf("Es menor o igual a 14 o no se llama %s", szNombre.c_str());
    }

    //Bucle for
    for (int i = 10; i > 0; --i) {
        cout << i << endl;
    }

    //Bucle while
    int i = 0;
    int num = 3;
    while (i < 10 && num == 2) {
        cout << i << endl;
        ++i;
    }

    //Bucle do while
    i = 10;
    do {
        cout << i << endl;
        ++i;
    } while (i < 10);
    return 0;
}
