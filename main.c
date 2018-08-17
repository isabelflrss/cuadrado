/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 16 de agosto de 2018, 09:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int base=0;
    printf("Hola usuario,");
    printf("hoy calcularemos el area de un cuadrado\n");
    printf("Dame la base");
    scanf("%d",&base);
    int area= (base*base);
    printf("El area de este cuadrado fue\n");
    printf("%d",&area);
    
    return 0;
}

