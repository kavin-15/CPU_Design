#include "RegisterFile.h"

RegisterFile::RegisterFile(int numRegisters) {
        registers.resize(numRegisters, 0); // Initialize all registers to 0
    }

void RegisterFile::writeRegister(int16_t regNum, int16_t value, bool we_reg) {
        if (regNum >= 0 && regNum < registers.size() && we_reg) {
            registers[regNum] = value;
        } else {
            std::cerr << "Error: Invalid register number.\n";
        }
    }

int16_t RegisterFile::readRegister(int16_t regNum) {
    if (regNum >= 0 && regNum < registers.size()) {
        return registers[regNum];
    } else {
        std::cerr << "Error: Invalid register number.\n";
        return -1; // Return -1 to indicate an error
    }
}

void RegisterFile::displayRegisters() {
    for (int i = 0; i < registers.size(); ++i) {
        std::cout << "Register " << i << ": " << registers[i] << std::endl;
    }
}