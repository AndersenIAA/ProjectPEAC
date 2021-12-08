//not a compilable program just a seperate place to start writing the bank switching code before I put it in the actual program
//bank you are attempting to interact with
int bank;
/*addressable space of the 6502 processor is assignable and this array is a way to link address space with a bank,
such as linking addressable 4096-8192 to ram1 0-4096*/
char addressable[65536];
//to change addresses you need to use addressing modes, the most important one to emulate absolute since it can be used easily to test the bank switching system