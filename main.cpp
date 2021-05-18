#include <iostream>

using namespace std;

int main()
{
    int a, b, soma = 0;
    cin >> a;
    cin >> b;
    if (a > b){
        b++;
        while (b < a){
            if (b%2 != 0){
                soma = soma + b;
            }
            b++;
        }
    }else{
    a++;
    while (a < b){
        if (a%2 != 0){
            soma = soma + b;
        }
    }
    }
    cout << soma <<endl;
    return 0;
}
