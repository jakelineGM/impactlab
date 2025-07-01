#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Cria e abre o arquivo PPM
    ofstream image_Input;
    image_Input.open("./images/Imagem.ppm");

    if (image_Input.is_open()) {
        // Cabeçalho do formato PPM
        image_Input << "P3" << endl;
        image_Input << "70 50" << endl;
        image_Input << "255" << endl;

        // Corpo da imagem
        for (int y = 0; y < 50; y++) {
            for (int x = 0; x < 70; x++) {
                if (x < 35) {
                    // Primeira metade da linha: vermelho
                    image_Input << "255 0 0 "; 
                } else {
                    // Segunda metade da linha: azul
                    image_Input << "0 0 255 ";
                }
            }
            image_Input << endl;
        }

        image_Input.close();
        cout << "Imagem gerada com sucesso!" << endl;
    } else {
        cout << "Erro ao criar o arquivo!" << endl;
    }

    return 0;
}
