#include <stdio.h>
#include <string.h>

int main() {

    char opcode[4];

    //array of opcodes
    char a[56][4] = {
            "ADC",
            "AND",
            "ASL",
            "BCC",
            "BCS",
            "BEQ",
            "BIT",
            "BMI",
            "BNE",
            "BPL",
            "BRK",
            "BVC",
            "BVS",
            "CLC",
            "CLD",
            "CLI",
            "CLV",
            "CMP",
            "CPX",
            "CPY",
            "DEC",
            "DEX",
            "DEY",
            "EOR",
            "INC",
            "INX",
            "INY",
            "JMP",
            "JSR",
            "LDA",
            "LDX",
            "LDY",
            "LSR",
            "NOP",
            "ORA",
            "PHA",
            "PHP",
            "PLA",
            "PLP",
            "ROL",
            "ROR",
            "RTI",
            "RTS",
            "SBC",
            "SEC",
            "SED",
            "SEI",
            "STA",
            "STX",
            "STY",
            "TAX",
            "TAY",
            "TXA",
            "TXS",
            "TYA"
    };


    printf("Welcome to the Isaac's 6502 interpreter.\n");
    printf("Please enter a line of hexedecimal data:\n");
    fflush(stdout);
    scanf("%s", &opcode);

    return 0;

}
