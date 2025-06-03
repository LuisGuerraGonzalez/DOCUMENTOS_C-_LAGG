#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Código 1 como cadena con caracteres escapados
    std::string codigo1 = "#include <iostream>\n"
                          "#include <fstream>\n"
                          "#include <string>\n\n"
                          "int main() {\n"
                          "    std::string input;\n"
                          "    std::cout << \"Ingrese el texto a guardar: \" << std::endl;\n"
                          "    std::getline(std::cin, input);\n"
                          "    std::ofstream file(\"mi_archivo.txt\");\n\n"
                          "    if (file.is_open()) {\n"
                          "        file << input << std::endl;\n"
                          "        file.close();\n"
                          "        std::cout << \"El texto se ha guardado en mi_archivo.txt\" << std::endl;\n"
                          "    } else {\n"
                          "        std::cerr << \"Error al abrir el archivo\" << std::endl;\n"
                          "    }\n\n"
                          "    return 0;\n"
                          "}";

    // Código 2
    std::string codigo2 = "#include <iostream>\n"
                          "#include <algorithm>\n\n"
                          "using namespace std;\n\n"
                          "int main() {\n"
                          "    const int TAM = 10;\n"
                          "    int numeros[TAM];\n\n"
                          "    cout << \"Ingrese 10 numeros:\" << endl;\n"
                          "    for (int i = 0; i < TAM; i++) {\n"
                          "        cout << \"Numero \" << i + 1 << \": \";\n"
                          "        cin >> numeros[i];\n"
                          "    }\n\n"
                          "    sort(numeros, numeros + TAM);\n\n"
                          "    cout << \"\\nNumeros ordenados en forma ascendente:\" << endl;\n"
                          "    for (int i = 0; i < TAM; i++) {\n"
                          "        cout << numeros[i] << \" \";\n"
                          "    }\n"
                          "    cout << endl;\n\n"
                          "    return 0;\n"
                          "}";

    // Crear archivo y guardar los códigos
    std::ofstream archivo("codigos_guardados.txt");
    if (archivo.is_open()) {
        archivo << "=== Código 1 ===\n" << codigo1 << "\n\n";
        archivo << "=== Código 2 ===\n" << codigo2 << "\n";
        archivo.close();
        std::cout << "Los códigos se han guardado en 'codigos_guardados.txt'" << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo para escritura." << std::endl;
    }

    return 0;
}

