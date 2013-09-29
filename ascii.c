#include "ascii.h"

const unsigned char _ks0108_ascii[128][7] = {
    {0, 0, 0, 0, 0, 0, 0}, // 0
    {0, 0, 0, 0, 0, 0, 0}, // 1
    {0, 0, 0, 0, 0, 0, 0}, // 2
    {0, 0, 0, 0, 0, 0, 0}, // 3
    {0, 0, 0, 0, 0, 0, 0}, // 4
    {0, 0, 0, 0, 0, 0, 0}, // 5
    {0, 0, 0, 0, 0, 0, 0}, // 6
    {0, 0, 0, 0, 0, 0, 0}, // 7
    {0, 0, 0, 0, 0, 0, 0}, // 8
    {0, 0, 0, 0, 0, 0, 0}, // 9
    {0, 0, 0, 0, 0, 0, 0}, // 10
    {0, 0, 0, 0, 0, 0, 0}, // 11
    {0, 0, 0, 0, 0, 0, 0}, // 12
    {0, 0, 0, 0, 0, 0, 0}, // 13
    {0, 0, 0, 0, 0, 0, 0}, // 14
    {0, 0, 0, 0, 0, 0, 0}, // 15
    {0, 0, 0, 0, 0, 0, 0}, // 16
    {0, 0, 0, 0, 0, 0, 0}, // 17
    {0, 0, 0, 0, 0, 0, 0}, // 18
    {0, 0, 0, 0, 0, 0, 0}, // 19
    {0, 0, 0, 0, 0, 0, 0}, // 20
    {0, 0, 0, 0, 0, 0, 0}, // 21
    {0, 0, 0, 0, 0, 0, 0}, // 22
    {0, 0, 0, 0, 0, 0, 0}, // 23
    {0, 0, 0, 0, 0, 0, 0}, // 24
    {0, 0, 0, 0, 0, 0, 0}, // 25
    {0, 0, 0, 0, 0, 0, 0}, // 26
    {0, 0, 0, 0, 0, 0, 0}, // 27
    {0, 0, 0, 0, 0, 0, 0}, // 28
    {0, 0, 0, 0, 0, 0, 0}, // 29
    {0, 0, 0, 0, 0, 0, 0}, // 30
    {0, 0, 0, 0, 0, 0, 0}, // 31 end control characters
    {0, 0, 0, 0, 0, 0, 0}, // 32 space
    {0xBF, 0, 0, 0, 0, 0, 0}, // 33 !
    {0x07, 0, 0x07, 0, 0, 0, 0}, // 34 "
    {0x46, 0x89, 0xFF, 0x89, 0x72, 0, 0}, // 35 #
    {0x46, 0x89, 0xFF, 0x89, 0x72, 0, 0}, // 36 $
    {0x8c,0x52,0x2c,0x10,0x68,0x94,0x62}, // 37 %
    {0x60, 0x96, 0x89, 0x99, 0x66, 0xA0, 0}, // 38 &
    {0x07, 0, 0, 0, 0, 0, 0}, // 39 '
    {0x3c,0x42,0x81,0x0,0x0,0x0,0x0}, // 40 (
    {0x81,0x42,0x3c,0x0,0x0,0x0,0x0}, // 41 )
    {0xA0, 0x70, 0xA0, 0, 0, 0, 0}, // 42 *
    {0x80, 0x80, 0x3A, 0x80, 0x80, 0, 0}, // 43 +
    {0xC0, 0, 0, 0, 0, 0, 0}, // 44 ,
    {0x10, 0x10, 0x10, 0, 0, 0, 0}, // 45 -
    {0x80, 0, 0, 0, 0, 0, 0}, // 46 .
    {0xc0,0x3c,0x3,0x0,0x0,0x0,0x0}, // 47 /
    {0x7E, 0x81, 0x81, 0x81, 0x7E, 0, 0}, // 48 0
    {0x04, 0x02, 0xFF, 0, 0, 0, 0}, // 49 1
    {0x82, 0xC1, 0xA1, 0x91, 0x8E, 0, 0}, // 50 2
    {0x42, 0x81, 0x89, 0x89, 0x76, 0, 0}, // 51 3
    {0x30, 0x2C, 0x22, 0xFF, 0, 0, 0}, // 52 4
    {0x4C, 0x8B, 0x89, 0x89, 0x71, 0, 0}, // 53 5
    {0x7E, 0x89, 0x89, 0x89, 0x72, 0, 0}, // 54 6
    {0x01, 0xE1, 0x19, 0x07, 0x01, 0, 0}, // 55 7
    {0x76,0x89,0x89,0x89,0x76,0x0,0x0}, // 56 8
    {0x4E, 0x91, 0x91, 0x91, 0x7E, 0, 0}, // 57 9
    {0x24, 0, 0, 0, 0, 0, 0}, // 58 :
    {0xE4, 0, 0, 0, 0, 0, 0}, // 59 ;
    {0x10,0x28,0x28,0x28,0x44,0x0,0x0}, // 60 <
    {0x28,0x28,0x28,0x28,0x28,0x0,0x0}, // 61 =
    {0x44,0x28,0x28,0x28,0x10,0x0,0x0}, // 62 >
    {0x2,0x1,0xb1,0x9,0x6,0x0,0x0}, // 63 ?
    {0x72,0x89,0x85,0x45,0xf9,0x8d,0x2}, // 64 @
    {0xc0, 0x30, 0x2e, 0x21, 0x2e, 0x30, 0xc0}, // 65 A
    {0xFF, 0x89, 0x89, 0x89, 0x89, 0x7E, 0}, // 66 B
    {0x3c,0x42,0x81,0x81,0x81,0x42,0x0}, // 67 C
    {0xFF, 0x81, 0x81, 0x81, 0x42, 0x3C, 0}, // 68 D
    {0xFF, 0x89, 0x89, 0x89, 0x89, 0}, // 69 E
    {0xFF, 0x09, 0x09, 0x09, 0x01, 0}, // 70 F
    {0x3C, 0x42, 0x81, 0x81, 0x91, 0x52, 0x34}, // 71 G
    {0xFF, 0x08, 0x08, 0x08, 0x08, 0xFF, 0}, // 72 H
    {0xFF, 0, 0, 0, 0, 0, 0}, // 73 I
    {0x60, 0x80, 0x80, 0x7F, 0, 0, 0}, // 74 J
    {0xFF, 0x10, 0x08, 0x1C, 0x62, 0x81, 0}, // 75 K
    {0xFF, 0x80, 0x80, 0x80, 0x80, 0, 0}, // 76 L
    {0xFF, 0x06, 0x38, 0xC0, 0x38, 0x06, 0xFF}, // 77 M
    {0xFF, 0x02, 0x0C, 0x30, 0x40, 0xFF, 0}, // 78 N
    {0x3c,0x42,0x81,0x81,0x81,0x42,0x3c}, // 79 0
    {0xff,0x11,0x11,0x11,0xe,0x0,0x0}, // 80 P
    {0x3c,0x42,0x91,0x91,0xa1,0x42,0xbc}, // 81 Q
    {0xff,0x9,0x9,0x19,0x69,0x86,0x0}, // 82 R
    {0x46,0x89,0x89,0x91,0x91,0x62,0x0}, // 83 S
    {0x0,0x1,0x1,0xff,0x1,0x1,0x0}, // 84 T
    {0x7f,0x80,0x80,0x80,0x80,0x7f,0x0}, // 85 U
    {0x3,0xc,0x30,0xc0,0x30,0xc,0x3}, // 86 V
    {0x3c,0xc0,0x30,0xc,0x30,0xc0,0x3c}, // 87 W
    {0x81,0x66,0x18,0x18,0x66,0x81,0x0}, // 88 X
    {0x07, 0x08, 0x10, 0xF0, 0x10, 0x08, 0x07}, // 89 Y
    {0x80,0xc1,0xb1,0x8d,0x83,0x81,0x0}, // 90 Z
    {0xff,0x81,0x0,0x0,0x0,0x0,0x0}, // 91 [
    {0x3,0x3c,0xc0,0x0,0x0,0x0,0x0}, /* 92  \ */
    {0x81,0xff,0x0,0x0,0x0,0x0,0x0}, // 93 ]
    {0x8,0x6,0x1,0x6,0x8,0x0,0x0}, // 94 ^
    {0x0,0x80,0x80,0x80,0x80,0x80,0x0}, // 95 _
    {0x1,0x2,0x0,0x0,0x0,0x0,0x0}, // 96 `
    {0x68, 0x94, 0x94, 0x54, 0xF8, 0, 0}, // 97 a
    {0xFF, 0x48, 0x84, 0x84, 0x78, 0, 0}, // 98 b
    {0x78, 0x84, 0x84, 0x84, 0x48, 0, 0}, // 99 c
    {0x78, 0x84, 0x84, 0x48, 0xFF, 0}, // 100 d
    {0x78, 0x94, 0x94, 0x94, 0x58, 0}, // 101 e
    {0x04, 0xFE, 0x05, 0, 0, 0, 0}, // 102 f
    {0x98,0xa4,0xa4,0x98,0x7c,0x0,0x0}, // 103 g
    {0xff,0x8,0x4,0x4,0xf8,0x0,0x0}, // 104 h
    {0xfd,0x0,0x0,0x0,0x0,0x0,0x0}, // 105 i
    {0x80,0x7d,0x0,0x0,0x0,0x0,0x0}, // 106 j
    {0xff,0x10,0x68,0x84,0x0,0x0,0x0}, // 107 k
    {0xff,0x0,0x0,0x0,0x0,0x0,0x0}, // 108 l
    {0xfc,0x8,0x4,0xfc,0x4,0x4,0xf8}, // 109 m
    {0xfc,0x4,0x4,0x4,0xf8,0x0,0x0}, // 110 n
    {0x78,0x84,0x84,0x84,0x78,0x0,0x0}, // 111 o
    {0xfe,0x24,0x42,0x42,0x24,0x18,0x0}, // 112 p
    {0x1c,0x22,0x22,0x14,0xfe,0x0,0x0}, // 113 q
    {0xfc,0x8,0x4,0x0,0x0,0x0,0x0}, // 114 r
    {0x48,0x94,0x94,0xa4,0x48,0x0,0x0}, // 115 s
    {0x8,0xfe,0x08,0x08,0x0,0x0,0x0}, // 116 t
    {0x7c,0x80,0x80,0x40,0xfc,0x0,0x0}, // 117 u
    {0xc,0x30,0xc0,0x30,0xc,0x0,0x0}, // 118 v
    {0x3c,0xc0,0x3c,0x3c,0xc0,0x3c,0x0}, // 119 w
    {0x84,0x48,0x30,0x48,0x84,0x0,0x0}, // 120 x
    {0x8c,0x70,0xc,0x0,0x0,0x0,0x0}, // 121 y
    {0x84,0xc4,0xb4,0x8c,0x84,0x0,0x0}, // 122 z
    {0x18,0x66,0x81,0x0,0x0,0x0,0x0}, // 123 {
    {0xFF, 0, 0, 0, 0, 0, 0}, // 124 |
    {0x0,0x81,0x66,0x18,0x0,0x0,0x0}, // 125 }
    {0x18,0x8,0x18,0x10,0x8,0x0,0x0}, // 126 ~
    {0xff,0x81,0xff,0x0,0x0,0x0,0x0} // 127 ⌂
};