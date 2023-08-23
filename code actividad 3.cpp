#include <iostream>
#include <string>

int main() {
    int numVendedores;

    std::cout << "Ingrese la cantidad de vendedores: ";
    std::cin >> numVendedores;

    std::string nombres[numVendedores];
    double ventas[numVendedores][4];

    for (int i = 0; i < numVendedores; i++) {
        std::cout << "Ingrese el nombre del vendedor " << i + 1 << ": ";
        std::cin >> nombres[i];

        for (int j = 0; j < 4; j++) {
            std::cout << "Ingrese las ventas del mes " << j + 1 << " para " << nombres[i] << ": ";
            std::cin >> ventas[i][j];
        }
    }

    std::cout << "\nInforme de ventas y promedio por vendedor:\n";
    double promedioTotal = 0.0;

    for (int i = 0; i < numVendedores; i++) {
        double totalVentas = 0.0;

        for (int j = 0; j < 4; j++) {
            totalVentas += ventas[i][j];
        }

        double promedioVendedor = totalVentas / 4;
        promedioTotal += promedioVendedor;

        std::cout << "Vendedor: " << nombres[i] << "\n";
        std::cout << "Ventas totales: " << totalVentas << "\n";
        std::cout << "Promedio de ventas: " << promedioVendedor << "\n\n";
    }

    double promedioTotalVendedores = promedioTotal / numVendedores;
    std::cout << "Promedio de ventas de todos los vendedores: " << promedioTotalVendedores << "\n";

    return 0;
}

