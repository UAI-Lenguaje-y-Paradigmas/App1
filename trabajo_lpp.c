/* main.c - Archivo principal */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Order
typedef struct {
    int pizza_id;
    int order_id;
    char pizza_name_id[50];
    int quantity;
    char order_date[20];
    char order_time[20];
    float unit_price;
    float total_price;
    char pizza_size[5];
    char pizza_category[20];
    char pizza_ingredients[200];
    char pizza_name[50];
} Order;

// Prototipo de función para leer el CSV
int read_csv(const char *filename, Order **orders, int *order_count);

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
