#pragma once

#include <cstdint>

typedef enum {
    ALU_ADD,
    ALU_SUB,
    ALU_OR,
    ALU_AND,
    ALU_NOT,
    ALU_XOR,
    ALU_MULT,
    ALU_DIV,
    ALU_SLT,
    ALU_SGT,
    ALU_SEQ,
    ALU_SLL,
    ALU_SRL
} ALUOperations;

struct ControlSignals{
    bool dm2reg;
    bool reg_dst;
    bool alu_src;
    bool jump;
    bool branch;
    bool pc_src;
    bool we_dm;
    bool we_reg;
    bool jal;
    bool jr;
    bool mflo;
    bool mfhi;
    ALUOperations alu_ctrl;
};

class ControlUnit {
public:
    ControlUnit();
    void setOpcode(int8_t inputOpcode);
    void setFunct(int8_t inputFunct);
    void printControls() const;
    void decodeOpcode();
    ControlSignals getControlSignals() const { return control; }

private:
    uint8_t opcode;
    uint8_t funct;
    uint8_t alu_op;
    ControlSignals control;


    void clearControlSignals();
    ALUOperations functToALUOperation(const int8_t funct);
};
