EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:modules_droids
LIBS:Xbee-MCP-adapter-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "26 aug 2016"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L XBEE U1
U 1 1 57BE2254
P 3650 5050
F 0 "U1" H 4154 4382 60  0000 C CNN
F 1 "XBEE" H 3646 4614 60  0000 C CNN
F 2 "" H 3650 5050 60  0000 C CNN
F 3 "" H 3650 5050 60  0000 C CNN
	1    3650 5050
	1    0    0    -1  
$EndComp
$Comp
L CONN_7 P2
U 1 1 57BE23A5
P 4550 2100
F 0 "P2" V 4520 2100 60  0000 C CNN
F 1 "MCPboard-j4" V 4620 2100 60  0000 C CNN
F 2 "" H 4550 2100 60  0000 C CNN
F 3 "" H 4550 2100 60  0000 C CNN
	1    4550 2100
	1    0    0    -1  
$EndComp
$Comp
L CONN_7 P1
U 1 1 57BE2439
P 2250 2100
F 0 "P1" V 2220 2100 60  0000 C CNN
F 1 "MCPboard-J3" V 2320 2100 60  0000 C CNN
F 2 "" H 2250 2100 60  0000 C CNN
F 3 "" H 2250 2100 60  0000 C CNN
	1    2250 2100
	-1   0    0    -1  
$EndComp
NoConn ~ 2600 1800
NoConn ~ 2600 1900
NoConn ~ 2600 2000
NoConn ~ 2600 2100
NoConn ~ 2600 2200
NoConn ~ 4200 2000
NoConn ~ 4200 2100
NoConn ~ 4200 2200
Text Label 2100 4650 0    60   ~ 0
MCPboard-Tx
Text Label 3250 2400 2    60   ~ 0
MCPboard-Rx
$Comp
L VDD #PWR01
U 1 1 57BE5574
P 4100 1800
F 0 "#PWR01" H 4100 1900 30  0001 C CNN
F 1 "VDD" V 4100 1950 30  0000 C CNN
F 2 "" H 4100 1800 60  0000 C CNN
F 3 "" H 4100 1800 60  0000 C CNN
	1    4100 1800
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR02
U 1 1 57BE5586
P 4050 1950
F 0 "#PWR02" H 4050 1950 30  0001 C CNN
F 1 "GND" H 4050 1880 30  0001 C CNN
F 2 "" H 4050 1950 60  0000 C CNN
F 3 "" H 4050 1950 60  0000 C CNN
	1    4050 1950
	1    0    0    -1  
$EndComp
Text Label 3500 2300 0    60   ~ 0
MCPboard-CTS
Text Label 3500 2400 0    60   ~ 0
MCPboard-RTS
$Comp
L GND #PWR03
U 1 1 57BE55B9
P 2700 5450
F 0 "#PWR03" H 2700 5450 30  0001 C CNN
F 1 "GND" H 2700 5380 30  0001 C CNN
F 2 "" H 2700 5450 60  0000 C CNN
F 3 "" H 2700 5450 60  0000 C CNN
	1    2700 5450
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR04
U 1 1 57BE55CD
P 2600 4300
F 0 "#PWR04" H 2600 4400 30  0001 C CNN
F 1 "VDD" H 2600 4450 30  0000 C CNN
F 2 "" H 2600 4300 60  0000 C CNN
F 3 "" H 2600 4300 60  0000 C CNN
	1    2600 4300
	1    0    0    -1  
$EndComp
$Comp
L LED D1
U 1 1 57BE5644
P 9500 4750
F 0 "D1" H 9500 4850 50  0000 C CNN
F 1 "D1" H 9500 4650 50  0000 C CNN
F 2 "~" H 9500 4750 60  0000 C CNN
F 3 "~" H 9500 4750 60  0000 C CNN
	1    9500 4750
	1    0    0    -1  
$EndComp
$Comp
L LED D2
U 1 1 57BE5653
P 9500 5050
F 0 "D2" H 9500 5150 50  0000 C CNN
F 1 "D2" H 9500 4950 50  0000 C CNN
F 2 "~" H 9500 5050 60  0000 C CNN
F 3 "~" H 9500 5050 60  0000 C CNN
	1    9500 5050
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 57BE566F
P 8900 4750
F 0 "R3" V 8980 4750 40  0000 C CNN
F 1 "470" V 8907 4751 40  0000 C CNN
F 2 "~" V 8830 4750 30  0000 C CNN
F 3 "~" H 8900 4750 30  0000 C CNN
	1    8900 4750
	0    -1   -1   0   
$EndComp
$Comp
L R R4
U 1 1 57BE5675
P 8900 5050
F 0 "R4" V 8980 5050 40  0000 C CNN
F 1 "470" V 8907 5051 40  0000 C CNN
F 2 "~" V 8830 5050 30  0000 C CNN
F 3 "~" H 8900 5050 30  0000 C CNN
	1    8900 5050
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR05
U 1 1 57BE56A9
P 9800 5200
F 0 "#PWR05" H 9800 5200 30  0001 C CNN
F 1 "GND" H 9800 5130 30  0001 C CNN
F 2 "" H 9800 5200 60  0000 C CNN
F 3 "" H 9800 5200 60  0000 C CNN
	1    9800 5200
	1    0    0    -1  
$EndComp
$Comp
L CONN_3 K1
U 1 1 57BE56E3
P 9600 2650
F 0 "K1" V 9550 2650 50  0000 C CNN
F 1 "POT-10K" V 9650 2650 40  0000 C CNN
F 2 "" H 9600 2650 60  0000 C CNN
F 3 "" H 9600 2650 60  0000 C CNN
	1    9600 2650
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 57BE56F7
P 9150 2800
F 0 "#PWR06" H 9150 2800 30  0001 C CNN
F 1 "GND" H 9150 2730 30  0001 C CNN
F 2 "" H 9150 2800 60  0000 C CNN
F 3 "" H 9150 2800 60  0000 C CNN
	1    9150 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2600 2300 3250 2300
Wire Wire Line
	3250 2400 2600 2400
Wire Wire Line
	4100 1800 4200 1800
Wire Wire Line
	4050 1950 4050 1900
Wire Wire Line
	4050 1900 4200 1900
Wire Wire Line
	3500 2300 4200 2300
Wire Wire Line
	4200 2400 3500 2400
Wire Wire Line
	2700 5450 2700 5350
Wire Wire Line
	2700 5350 2750 5350
Wire Wire Line
	2600 4450 2750 4450
Wire Wire Line
	9300 5050 9150 5050
Wire Wire Line
	9150 4750 9300 4750
Wire Wire Line
	9800 5050 9700 5050
Wire Wire Line
	9700 4750 9800 4750
Connection ~ 9800 5050
Connection ~ 9800 4750
Wire Wire Line
	9150 2750 9250 2750
$Comp
L VDD #PWR07
U 1 1 57BE573A
P 9150 1950
F 0 "#PWR07" H 9150 2050 30  0001 C CNN
F 1 "VDD" H 9150 2060 30  0000 C CNN
F 2 "" H 9150 1950 60  0000 C CNN
F 3 "" H 9150 1950 60  0000 C CNN
	1    9150 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 2550 9150 2550
Wire Wire Line
	9150 2550 9150 2500
Wire Wire Line
	9150 2750 9150 2800
NoConn ~ 2750 5150
$Comp
L R R1
U 1 1 57BF8838
P 9150 2250
F 0 "R1" V 9230 2250 40  0000 C CNN
F 1 "10k" V 9157 2251 40  0000 C CNN
F 2 "~" V 9080 2250 30  0000 C CNN
F 3 "~" H 9150 2250 30  0000 C CNN
	1    9150 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	9150 1950 9150 2000
$Comp
L R R2
U 1 1 57BF8886
P 8900 2650
F 0 "R2" V 8980 2650 40  0000 C CNN
F 1 "1k" V 8907 2651 40  0000 C CNN
F 2 "~" V 8830 2650 30  0000 C CNN
F 3 "~" H 8900 2650 30  0000 C CNN
	1    8900 2650
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9250 2650 9150 2650
Wire Wire Line
	8650 2650 8400 2650
Text Label 8400 2650 0    60   ~ 0
AN0
Wire Wire Line
	9800 4750 9800 5200
Wire Wire Line
	8650 4750 8400 4750
Wire Wire Line
	8650 5050 8400 5050
Text Label 8400 4750 0    60   ~ 0
DO1
Text Label 8400 5050 0    60   ~ 0
DO2
Wire Wire Line
	4550 4450 4850 4450
Text Label 4850 4450 2    60   ~ 0
AN0
Wire Wire Line
	4550 4550 4850 4550
Text Label 4850 4550 2    60   ~ 0
DO1
Text Label 4850 4650 2    60   ~ 0
DO2
Wire Wire Line
	4850 4650 4550 4650
NoConn ~ 4550 4750
NoConn ~ 4550 4950
NoConn ~ 4550 5350
NoConn ~ 2750 4750
NoConn ~ 2750 5050
NoConn ~ 2750 4950
Text Label 2100 4550 0    60   ~ 0
MCPboard-Rx
Wire Wire Line
	2100 4650 2750 4650
Wire Wire Line
	2100 4550 2750 4550
Text Label 3250 2300 2    60   ~ 0
MCPboard-Tx
Text Label 5300 5250 2    60   ~ 0
MCPboard-CTS
Wire Wire Line
	5300 5250 4550 5250
Text Label 5300 4850 2    60   ~ 0
MCPboard-RTS
Wire Wire Line
	5300 4850 4550 4850
NoConn ~ 4550 5050
NoConn ~ 2750 5250
NoConn ~ 4550 5150
Wire Wire Line
	2750 4850 2400 4850
$Comp
L JUMPER JP1
U 1 1 57BF8D0A
P 2100 4850
F 0 "JP1" H 2100 5000 60  0000 C CNN
F 1 "~RST" H 2100 4770 40  0000 C CNN
F 2 "~" H 2100 4850 60  0000 C CNN
F 3 "~" H 2100 4850 60  0000 C CNN
	1    2100 4850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 57BF8D17
P 1750 4950
F 0 "#PWR08" H 1750 4950 30  0001 C CNN
F 1 "GND" H 1750 4880 30  0001 C CNN
F 2 "" H 1750 4950 60  0000 C CNN
F 3 "" H 1750 4950 60  0000 C CNN
	1    1750 4950
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 4850 1750 4850
Wire Wire Line
	1750 4850 1750 4950
Wire Wire Line
	2600 4450 2600 4300
$EndSCHEMATC