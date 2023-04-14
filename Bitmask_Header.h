/*
File: Bitmask_Header.h
Author: Phan Trong Nguyen
Date: 
Description:
*/
#ifndef Bitmask
#define Bitmask

#include <stdio.h>
#include <stdint.h>

typedef enum{
    AO       = 1 << 0,     // 0b00000001
    QUAN     = 1 << 1,     // 0b00000010
    VAY      = 1 << 2,     // 0b00000100
    DAM      = 1 << 3,     // 0b00001000
    NHAN     = 1 << 4,     // 0b00010000
    VONG_TAY = 1 << 5,     // 0b00100000
    GIAY     = 1 << 6,     // 0b01000000
    TUI      = 1 << 7      // 0b10000000
} DO_DUNG_CA_NHAN;
uint8_t GIO_HANG; // 1 byte 0bxxxxxxxx
const char *vars[] = {"Ao", "QUAN", "VAY", "DAM", "NHAN", "VONG_TAY", "GIAY", "TUI"};

void HIEN_THI_Binary(int b);
void THEM_VAO_GIO_HANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung);
void XOA(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung);
void KIEM_TRA_GIO_HANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung);

#endif