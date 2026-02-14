#include <stdio.h>


    
//Movimnto da torre
void moverTorre(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima\n");
    moverTorre(casas - 1);
}

//Movimento do bispo usando recursão
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");

    moverBispoRecursivo(casas - 1);
}

//Movimento do bispo usando loops aninhados
void moverBispoLoops(int casas) {
    int vertical, horizontal;

    for (vertical = 0; vertical < casas; vertical++) {
        printf("Cima\n");

        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
}

//Movimento da rainha
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Cima\n");

    moverRainha(casas - 1);
}

//Movimento do cavalo
void moverCavalo() {
    int vertical, horizontal;

    for (vertical = 1; vertical <= 2; vertical++) {
        // Movimento vertical (duas casas para cima)
        if (vertical <= 2) {
            printf("Cima\n");
            continue;
        }
    }

    for (horizontal = 1; horizontal <= 1; horizontal++) {
        // Movimento horizontal (uma casa para a direita)
        printf("Direita\n");
        break;
    }
}

int main() {

    // Número de casas a serem percorridas (definido no código)
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
