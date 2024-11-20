#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Helyes név és szintaxis
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // Tömb feltöltése
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    // Tömb kiírása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }

    // Átlag számítása
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Inicializálás
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS; // Átlag kiszámítása
    std::cout << "Atlag: " << atlag << std::endl;

    // Memória felszabadítása
    delete[] b;
    std::cout << "Program vége."<<std::endl;
    return 0;
}