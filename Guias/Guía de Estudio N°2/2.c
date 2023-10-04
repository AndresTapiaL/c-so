#include <stdio.h>
#include <string.h>

struct Producto {
    int codigo;
    char descripcion[100];
    float precio;
};

int main() {
    struct Producto producto1, producto2;

    producto1.codigo = 1;
    strcpy(producto1.descripcion, "Producto 1");
    producto1.precio = 10.99;

    producto2.codigo = 2;
    strcpy(producto2.descripcion, "Producto 2");
    producto2.precio = 15.99;

    struct Producto productoMayorPrecio;

    if (producto1.precio > producto2.precio) {
        productoMayorPrecio = producto1;
    } else {
        productoMayorPrecio = producto2;
    }

    printf("El producto con mayor precio es: %s\n", productoMayorPrecio.descripcion);

    return 0;
}
