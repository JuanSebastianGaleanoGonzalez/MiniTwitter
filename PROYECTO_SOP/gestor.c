

int main (int argc, char **argv){
    int maxUsuarios;
    char* archivoRelaciones;
    char modo;
    int time;
    char* pipeNominal;

    //Verificar el numero de parámetros
    printf("%d",argc);
    if((argc < 11 )||(argc > 11)){
        printf("%s", "La cantidad de argumentos ingresados es errónea");
        exit(1);
    }

    char** indicadores;
    char** comandos;
    for(int posicionArgv = 1; posicionArgv < argc; posicionArgv++){
        printf("%s", *(argv + posicionArgv));
        if(posicionArgv % 2 != 0){
        printf("%s", "Entro 1"); 
        strcpy(*(argv + posicionArgv), *(indicadores + (posicionArgv / 2)));
        }else{
        printf("%s", "Entro 2");
        strcpy(*(argv + posicionArgv), *(comandos + (posicionArgv - 1 / 2))); 
        }
    }
    /*
    for(int posicion = 0; posicion < (argc - 1) / 2; posicion++){
        printf("%s", *(indicadores + posicion));
        printf("%s", " ");
        printf("%s", *(comandos + posicion));
    }*/
}