#include"stdlib.h" //Su dung cau lenh system call
#include"handleFile.h" //header chua cac function handle

#define input "inputFile.txt"
#define output "outputFile.txt"

int checkFileInput(FILE *f) { //Dau vao la con tro file, check xem file co hop le hay khong
    char c;
    while(true){
        c = fgetc(f);
        if(c == EOF) break;
        if(c == '.' | c == '-' | c == '/'| c == ' ' | c =='\n') continue;
        else return 0;
    }
}

void checkFileOutput(){ //Check xem file OUTPUT co rong khong, neu khong thi dua ra thong bao
    char c;
    FILE *f = fopen(output,"r");
    if(fgetc(f) != EOF) {
        while(true){
            printf("\nFILE outputFile.txt already exists. Do you wish to overwrite (y,n)?\n");
            scanf("%c",&c);
            if(c == 'y' | c == 'Y') return;
            else if(c == 'n' | c == 'N') {
                exit(0);
            }
            else{
                printf("command Error !!! Please try again...");
                system("cls");
            }
        }
    }
}

void readFile(){ //ham check file va goi cac ham handle
    FILE *f1 = fopen(input,"r");
    checkFileOutput();
    FILE *f2 = fopen(output,"w");
    if(f1 != NULL && f2 != NULL){
        if(checkFileInput(f1)){
            printf("file INPUT is morse");
            handleFileMorse(f1,f2);
            fclose(f1);
            fclose(f2);
            printf("\nDone !!!");
        } else {
            printf("file INPUT is character");
            handleFileChar(f1,f2);
            fclose(f1);
            fclose(f2);
            printf("\nDone !!!");
        }
    }
    else printf("Error: FILENAME could not be opened.");
}