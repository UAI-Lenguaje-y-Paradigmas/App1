/* main.c - Archivo principal */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "metrics.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s <archivo_csv> <metrica1> <metrica2> ...\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    Order *orders = NULL;
    int order_count = 0;
    
    if (!read_csv(filename, &orders, &order_count)) {
        printf("Error al leer el archivo CSV.\n");
        return 1;
    }

    // Aquí se llamarán las métricas basadas en los argumentos
    for (int i = 2; i < argc; i++) {
        printf("Calculando métrica: %s\n", argv[i]);
        // Se llamará a la función correspondiente
    }

    free(orders);
    return 0;
}
