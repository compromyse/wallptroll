#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "wallp.h"

void writewall(){
    FILE* f = fopen("C:\\Users\\Public\\wallp2.jpg", "wb");
    fwrite(bytes, 1, sizeof(bytes), f);
    fclose(f);
    return;
};

void setwall(){
    char path[] = "C:\\Users\\Public\\wallp2.jpg";
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, path, SPIF_SENDCHANGE);
}

int main(){    
    writewall();
    setwall();
    return 0;
};