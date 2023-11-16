#include "BarChart.h"
#include <fstream>
#include <vector>

    int main() 
{

        std::ifstream inputFile("C:\\Users\\xjudd\\Downloads\\Lab4\\temperatures.txt.txt");

        if (!inputFile) 
        {
            std::cerr << "Error opening the file." << std::endl;
            return 1;
        }

        std::vector<int> temperatures;
        int temperature;

        while (inputFile >> temperature) 
        {
            temperatures.push_back(temperature);
        }

        inputFile.close();

    BarChart barChart("C:\\Users\\xjudd\\Downloads\\Lab4\\temperatures.txt.txt");
    barChart.draw();

    return 0;
}
