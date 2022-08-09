#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"
#include"runAndCheck.h" //header run va check loi file

/*Luu y: Trong file INPUT khong duoc viet
".-- / .-"
Ma phai viet
".--/.-"
Neu khong se bi loi*/

int main(){
    printf("-----------convert morse to character----------------\n");
    printf("file name: morse.exe\ninput File: inputFile.txt\noutput File: outputFile.txt\n");
    printf("___________________________________________________\n");
    readFile();
    getch();
    return 0;
}