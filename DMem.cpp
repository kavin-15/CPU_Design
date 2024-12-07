#include <DMem.h>

DataMemory::DataMemory() {
    data.resize(UINT16_MAX);
}

uint16_t DataMemory::getData(const uint16_t &address) {
    uint16_t returnData {0};
    if(address < UINT16_MAX) {
        returnData = data[address];
    }
    return returnData;
}

void DataMemory::writeDataToMemory(const uint16_t &address, const uint16_t &writeData, bool we_dm) {
    if(we_dm) {
        data[address] = writeData;
    }
    else { return; }
        
}