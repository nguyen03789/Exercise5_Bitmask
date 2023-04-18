/*
File: Bitmask.c
Author: Phan Trong Nguyen
Date: 
Description:
*/
#include "Bitmask_Header.h" 


void HIEN_THI_Binary(int b)
{
    int Binary[7];
    for (int i = 7; i >= 0; i--) // Với mỗi kí tự được chuyển sang dạng thập phân, tiếp tục chuyển sang dạng nhị phân 8bit
    {
        Binary[i] = b % 2;
        b = b / 2;
    }
    // In các kí tự được chuyển đổi
    printf("0b");
    for (int c = 0; c <= 7; c++)
    {
        printf("%d", Binary[c]);
        if (c == 7)
            printf("\n");
    }
}

void THEM_VAO_GIO_HANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang |= ten_do_dung;
}

void XOA(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang &= ~ten_do_dung;
}

void KIEM_TRA_GIO_HANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    uint8_t *kiem_tra, hang = 0, out, out_1;
    *kiem_tra |= ten_do_dung;
    out = *gio_hang & *kiem_tra; // co trong gio
    out_1 = out ^ *kiem_tra;     // khong co trong gio
    for (int i = 0; i < 8; i++){
        hang = 1 << i;
        if (hang & (hang & out)){
            printf("%s co trong gio hang\n", vars[i]);
        }
        else if (hang & (hang & out_1)){
            printf("%s khong co trong gio hang\n", vars[i]);
        }
    }
}

