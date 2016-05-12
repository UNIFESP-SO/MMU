#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <>

struct pagina_t{
    uint16_t flag:1;
    uint16_t mapa:3;
    uint16_t desloc:12;
}
typedef pagina pagina_t;

struct


int get_quadro(pagina_t memo_virtual[], int n_pag, uint16_t end){
    uint16_t quadro;
    pagina_t *pag = get_pagina_virtual(memo_virtual, n_pag, end);
    if(pg){
        pag->map;
        pag->desloc;
        return(quadro);
    }
    return(-1);
}
