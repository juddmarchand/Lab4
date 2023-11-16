#include "BarChart.h"

BarChart::BarChart(const std::string& filename) {
    inputFile.open(filename);

    if (!inputFile) {
        std::cerr << "Error opening the file." << std::endl;
    }
}

void BarChart::drawBarChart(int temperature) {
 
    int numStars = (temperature - MIN_TEMPERATURE) / RANGE_PER_STAR;

    numStars = std::min(50, numStars);

    std::cout << temperature << " | ";

    for (int i = 0; i < numStars; ++i) {
        std::cout << "*";
    }

    std::cout << std::endl;
}


void BarChart::draw() {
    if (!inputFile) {
        return;
    }

    std::cout << "Temperature Bar Chart\n";
    std::cout << "----------------------\n";


    int temperature;
    while (inputFile >> temperature) {
        if (temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE) {
            std::cerr << "Invalid temperature: " << temperature << std::endl;
            continue;
        }

        drawBarChart(temperature);
    }

    inputFile.close();
}
