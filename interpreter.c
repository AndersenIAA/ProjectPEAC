#include <stdio.h>
#include <string.h>

int main() {

    //string that holds the user-entered opcode
    char opcode[4];

    //string that holds the user-entered variable
    char variable[20];

    //array of 6502 opcodes
    char opcodes[56][4] = {
            "ADC", //0
            "AND", //1
            "ASL", //2
            "BCC", //3
            "BCS", //4
            "BEQ", //5
            "BIT", //6
            "BMI", //7
            "BNE", //8
            "BPL", //9
            "BRK", //10
            "BVC", //11
            "BVS", //12
            "CLC", //13
            "CLD", //14
            "CLI", //15
            "CLV", //16
            "CMP", //17
            "CPX", //18
            "CPY", //19
            "DEC", //20
            "DEX", //21
            "DEY", //22
            "EOR", //23
            "INC", //24
            "INX", //25
            "INY", //26
            "JMP", //27
            "JSR", //28
            "LDA", //29
            "LDX", //30
            "LDY", //31
            "LSR", //32
            "NOP", //33
            "ORA", //34
            "PHA", //35
            "PHP", //36
            "PLA", //37
            "PLP", //38
            "ROL", //39
            "ROR", //40
            "RTI", //41
            "RTS", //42
            "SBC", //43
            "SEC", //44
            "SED", //45
            "SEI", //46
            "STA", //47
            "STX", //48
            "STY", //49
            "TAX", //50
            "TAY", //51
            "TXA", //52
            "TXS", //53
            "TYA"  //54
    };

    //temperary storage for a number needed in the following code
    int temp;

    //string to help recognise wether the operating variable calls TEMP
    char tempchar[4]="TEMP";

    //integer that represents the number created from the previous operation
    int prevnum;

    printf("Welcome to the Isaac's 6502 interpreter.\n");
    printf("Please enter a line of hexedecimal data:\n");
    fflush(stdout);

    //scans for opcode
    scanf("%4s", &opcode);

    //scans for operating variable, if none, type 0, literally nothing will happen.
    scanf("%20s", &variable);

    int i, operation;
    //loop looks for the user-entered OPCODE and returns i
    for (i = 0; strcmp(opcode, opcodes[i])!=0 || i==57; i++);

    //sets operation var to i, i is one more than the correct value, however my numbering scheme for opcodes starts at one so it works out perfectly
    operation = i;

    //"operation" for NOP
    if (operation == 33) {
        return 0;
    }
    //operation for STA TEMP
    if (operation == 47 && strcmp(variable, tempchar) == 0) {
        temp = prevnum;
    }
    //operation for JMP currently in use to see if code is working correctly
    if (operation == 27) {
        printf("Code is working!\n");
    }

    //made for debugging, tells the user what OPCODE was registered
    printf("The alphabetized number of the operator registered was: %d.", operation);

    return 0;

}
