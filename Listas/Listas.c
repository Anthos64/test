#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {

    char *nombre;
    struct nodo *sig;

} Libro;

Libro *listaLibro(Libro *lista){

    lista = NULL;

    return lista;
}

Libro *agregarLibro(Libro *lista, char *nombre){

    Libro *nuevoLibro, *aux;

    nuevoLibro = (Libro*)malloc(sizeof(Libro));

    nuevoLibro->nombre = nombre;
    nuevoLibro->sig = NULL;

    if (lista == NULL)
        lista = nuevoLibro;
    else{
        aux = lista;
        while (aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevoLibro;
    }

    return lista;
}


int main() {

    Libro *lista = listaLibro(lista);

    lista = agregarLibro(lista, "Moby dick");
    lista = agregarLibro(lista, "Guilliver's Travels");
    lista = agregarLibro(lista, "Vouyage au centre de la Terre");

    while(lista != NULL){
        printf("%s\n", lista->nombre);
        lista = lista->sig;
    }

    free(lista);

    printf("\na\n");
    while(lista != NULL){
        printf("%s\n", lista->nombre);
        lista = lista->sig;
    }

    printf("\na\n");
    return 0;
}

