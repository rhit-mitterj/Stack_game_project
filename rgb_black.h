//Black - Not tested
// These are from https://github.com/FalconChristmas/fpp/blob/master/src/pru/PocketScrollerV1.hp
// _gpio tells which gpio port and _pin tells which bit in the port
// The first 1 in r11 is for the J1 connector
// See the githuub file for the other connectors

// R1 = P8_42
#define r11_gpio 2
#define r11_pin 11

// G1 = P8_20
#define g11_gpio 1
#define g11_pin 31

// B1 = P8_41
#define b11_gpio 2
#define b11_pin 10

// R2 = P8_39
#define r12_gpio 2
#define r12_pin 12

// G2 = P8_21
#define g12_gpio 1
#define g12_pin 30

// B2 = P8_40
#define b12_gpio 2
#define b12_pin 13

#define pru_latch 8	// P8_27  These are the bit positions in R30
#define pru_oe 9    // P8_29
#define pru_clock 10// P8_28

// Control pins are all in GPIO2
// The pocket has these on R0, the code needs to be changed for this work work
#define pru_sel0 0 /* must be sequential with sel1 and sel2 */
#define pru_sel1 1
#define pru_sel2 2
#define pru_sel3 3
