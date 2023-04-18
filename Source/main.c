/*
File: main.c
Author: Phan Trong Nguyen
Date: 
Description:
*/
#include "Bitmask.c"

int main(int argc, char const *argv[]){
    THEM_VAO_GIO_HANG(&GIO_HANG, AO | QUAN | VAY | VONG_TAY|TUI);
    XOA(&GIO_HANG, NHAN | AO);
    KIEM_TRA_GIO_HANG(&GIO_HANG, AO | DAM | VAY | VONG_TAY|TUI);
    HIEN_THI_Binary((int)GIO_HANG);
    return 0;
}