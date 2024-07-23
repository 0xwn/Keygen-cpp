#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric>

std::vector<int> gerar_numeros() {
    std::vector<int> numeros(15);
    for (int &num : numeros) {
        num = rand() % 10;
    }
    return numeros;
}


void soma_sete(){
    while(true){
        std::vector<int> numeros = gerar_numeros();
        int soma = std::accumulate(numeros.begin(),numeros.end(),0);
        if (soma % 7 == 0){
            for (int num : numeros){
                std::cout << num;
            }
            std::cout << std::endl;
            break;
        }
    }
}


int main(){
    srand(time(0));
    soma_sete();
}