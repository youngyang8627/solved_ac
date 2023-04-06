#include <stdio.h>

int ft_strlen(char* a){
    int i=0;
    while(a[i]!='\0')
        i++;
    return i+1;
}

int main(int argc, char* argv[]){
    printf("%d\n",argc);
    int i=1;
    int cmp=0;
    char* tmp;
    while(i<argc){
        if(cmp<ft_strlen(argv[i])){
            cmp=ft_strlen(argv[i]);
            tmp=argv[i];
        }
        i++;
    }
    printf("%s",tmp);
    return 0;
}
