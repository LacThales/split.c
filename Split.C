1 parametro) --> o que deseja separar
2 parametro) --> a palavra qual quer fazer separar, é um ponteiro que aponta para a palavra
3 parametro) --> tamanho

char** separapalavra(char separacao,char* palavra,int tamanho){
    int j = 0;
    int ctr = 0;
    char** ptr = malloc(sizeof(char*) * 100);
    for (int i = 0; i < 100; i++)
    {
        ptr[i] = malloc(sizeof(char) * 100);
    }
    
    for(int i=0;i<=(strlen(palavra));i++)
    {
        if(palavra[i]== separacao ||palavra[i]=='\0')
        {
            ptr[ctr][j]='\0';
            ctr++;  // próxima palavra
            j=0;    //próxima palavra iniciando no indice 0.
        }
        else
        {
            ptr[ctr][j]=palavra[i];
            j++;
        }
    }
    return ptr;
}
