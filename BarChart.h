#ifndef BARCHART_H
#define BARCHART_H

#include <iostream>
#include <fstream>

class BarChart {
public:
    BarChart(const std::string& filename);
    void draw();

private:
    static const int MIN_TEMPERATURE = -30;
    static const int MAX_TEMPERATURE = 120;
    static const int RANGE_PER_STAR = 3;

    void drawBarChart(int temperature);

    std::ifstream inputFile;
};

#endif // BARCHART_H
