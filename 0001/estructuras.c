#pragma once
/* alias [char] a [string] */
typedef char string;
/* alias struct persona => persona */
typedef struct persona
{
    /* persona */
    int cedula;
    string nombre[60];
    struct fechaNac
    {
        /* Fecha de nacimiento de la persona */
        int dia;
        int mes;
        int anio;
    }fechaNac;
}persona;