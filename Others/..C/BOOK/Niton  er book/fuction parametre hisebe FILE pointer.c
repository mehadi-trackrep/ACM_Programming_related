#include <stdio.h>
void get_file_input(FILE *fp);
int main()
{
    FILE *fp;
    fp = fopen("a.txt","w");
    get_file_input(fp);

    return 0;
}

void get_file_input(FILE *fp)
{
    int line;
    char str[80];
    printf("Please enter some line of text...\n");
    for(line = 0;line < 5;++line){
        gets(str);
        fprintf(fp,"%s\n",str);
    }
}
