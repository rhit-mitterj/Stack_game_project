//Black - Not tested
// These are from https://github.com/FalconChristmas/fpp/blob/master/src/pru/PocketScrollerV1.hp
// _gpio tells which gpio port and _pin tells which bit in the port
// The first 1 in r11 is for the J1 connector
// See the githuub file for the other connectors

// R1 = P8_42, gpio75
#define r11_gpio 2
#define r11_pin 11

// G1 = P8_28, gpio88
#define g11_gpio 2
#define g11_pin 24

// B1 = P8_41, gpio74
#define b11_gpio 2
#define b11_pin 10

// R2 = P8_39, gpio76
#define r12_gpio 2
#define r12_pin 12

// G2 = P8_27, gpio86
#define g12_gpio 2
#define g12_pin 22

// B2 = P8_40, gpio77
#define b12_gpio 2
#define b12_pin 13

/* Matrix control signals on pru0 (r30)
LAT =   P9_25 / BIT 7
OE =    P9_27 / BIT 5
CLK =   P8_11 / BIT 15
*/
#define pru_latch 7
#define pru_oe 5
#define pru_clock 15

// Control pins are all in GPIO2
// The pocket has these on R0, the code needs to be changed for this work work

/* Address pins, pru0, works for r30 and r31
A = P9_31 / BIT 0
B = P9_29 / BIT 1
C = P9_30 / BIT 2
D = P9_28 / BIT 3
*/
#define pru_sel0 0
#define pru_sel1 1
#define pru_sel2 2
#define pru_sel3 3

/* trying to use gpio for addresses instead 
gpio port 3, bit positions
*/
#define gpio_sel0 14
#define gpio_sel1 15
#define gpio_sel2 16
#define gpio_sel3 17
