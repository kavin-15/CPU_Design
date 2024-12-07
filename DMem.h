#pragma once
#include <vector>
#include <cstdint>

using std::vector;

class DataMemory {
public:
    DataMemory(); // Default Constructor
    uint16_t getData(const uint16_t &address);
    void writeDataToMemory(const uint16_t &address, const uint16_t &writeData, bool we_dm);
private:
    vector<uint16_t> data;
};