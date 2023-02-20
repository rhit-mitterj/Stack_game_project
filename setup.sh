#!/bin/bash

export TARGET=stack_game.pru0
echo TARGET=$TARGET

Configure the PRU pins based on which Beagle is running
machine=$(awk '{print $NF}' /proc/device-tree/model)
echo -n $machine

# this is the section it should be running
if [ $machine = "Black" ]; then
    echo " Found"
    # order: R1, G1, B1, R2, G2, B2
    gpiopins="P8_42 P8_28 P8_41 P8_39 P8_27 P8_40"
    prupins="P9_25 P9_27 P8_11 P9_31 P9_29 P9_30 P9_28"

    # trying this instead (address pins are gpio)
    # gpiopins="P8_42 P8_28 P8_41 P8_39 P8_27 P8_40 P9_31 P9_29 P9_30 P9_28"
    # prupins="P9_25 P9_27 P8_11"

elif [ $machine = "Blue" ]; then
    echo " Found"
    pins=""
elif [ $machine = "PocketBeagle" ]; then
    echo " Found"
    prupins="P2_32 P1_31 P1_33 P1_29 P2_30 P2_34 P1_36"
    gpiopins="P2_10 P2_06 P2_04 P2_01 P2_08 P2_02"
    # Uncomment for J2
    # gpiopins="$gpiopins P2_27 P2_25 P2_05 P2_24 P2_22 P2_18"
else
    echo " Not Found"
    pins=""
fi

for pin in $prupins
do
    echo $pin
    config-pin $pin pruout
    config-pin -q $pin
done

for pin in $gpiopins
do
    echo $pin
    config-pin $pin gpio
    config-pin $pin out
    config-pin -q $pin
done