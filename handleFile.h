

const char string[45] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', '?', '[', '!', '(', ')', '&' };
const char *morse[45] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-..." };


char convertMorseToChar(char *s){ //Dau vao la mot mang, dua vao const tim ky tu tuong ung
    for(int i = 0;i < 45;i++){
        if(strcmp(s,morse[i]) == 0) return string[i];
    }
    if(strcmp(s,"/") == 0) return ' ';
    else if(strcmp(s,"........") == 0){
        printf("\nError (#): %s",s);
        return '#';
    } 
    else {
        return '*';
        printf("\nError (*): %s",s);
    }
}

void handleFileMorse(FILE *f1,FILE *f2){
    char c;
    int i = 0;
    int count = 0;
    char s[1000];
    char chr[10];
    rewind(f1);
    while(feof(f1) == 0){
        fscanf(f1,"%[^\0]",s);
        strcat(s," ");
        while(true){
            if(s[i] == '.' | s[i] == '-'){
                chr[count] = s[i];
                count++;
                i++;
            } else if(s[i] == ' ')
            {
                chr[count] = NULL;
                fputc(convertMorseToChar(chr),f2);
                count = 0;
                i++;
            } else if(s[i] == '/'){
                chr[count] = NULL;
                fputc(convertMorseToChar(chr),f2);
                fputc(' ',f2);
                count = 0;
                i++; 
            }
            if(s[i] == NULL) break;
        }
    }
}

void handleFileChar(FILE *f1,FILE *f2){
    char c;
    int count = 0;
    char s[1000] = "";
    rewind(f1);
    while (feof(f1) == 0)
    {
        fscanf(f1,"%[^\0]",s);
        while(s[count] != NULL){
            if(s[count] == ' '){
                fprintf(f2,"/");
                count++;
            }
            else if(s[count] == '#') {
                printf("\nERROR: INPUT with (#) index: %d",count);
                exit(1);
            } 
            else{
                for(int i = 0;i<45;i++){
                    if(s[count] == string[i]){
                        fputs(morse[i],f2);
                        fprintf(f2," ");
                        break;
                    } 
                } count ++;
            }
        }
    }
}