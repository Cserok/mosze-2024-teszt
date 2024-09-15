#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                      // NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa";            // ' ' helyett " " és a sor végén ;
    for (int i = 0; i < N_ELEMENTS; i++)               // for ciklusból hiányzik i < N_ELEMENTS; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)                // for ciklusban i helyett i < N_ELEMENTS;
    {
        std::cout << "Ertek:" ;                         //sor végén ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)                // N_ELEMENTS végén , helyett ;
    {
        atlag += b[i];                                  //sor végén ; hiányzik     
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Itt járt htomi18 felhasználó!" << std::endl;
    return 0;
}
