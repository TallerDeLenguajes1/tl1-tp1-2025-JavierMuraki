# Trabajo practico 1
### Ejercicio 2a:
- **¿Por que es conveniente incluirlo?**: _Evita subir archivos inecesarios, protege informacion sensible como claves, mantiene el repositorio limpio y reduce conflictos y peso_

- **¿Cuando se debe hacer?**: _Lo ideal es crear desde el inicio del proyecto pero tambien se puede agregar despues_

- **¿Como configuraría el archivo .gitignore?**: _En un archivo de texto se inidica en cada lina que archivo ignorar_
```
# Ignorar archivos de fromato .log
*.log

# Ignar archivos especificos del sistema
.DS_Store
Thumbs.db

# Ignorar carpeta de dependencias
node_modules/

# Ignorar variables de entorno
.env

# Ignorar archivos compilados
dist/
build/
```

### Ejercicio 3f, Resultado:
```
Iniciando depuracion con el valor: 452
Resultado final del numero: 137
```

### Ejercicio 3g:
- Agrege la libreria `#include <stdio.h>` para que funcionen printf y scanf
- Se estaba pasando el valor pero no el puntero que modificar
```
void duplicar_numero(int numero) {
    numero = numero * 2;
}
```
```
void duplicar_numero(int *numero) {
    *numero = *numero * 2;
}
```
- Ala function `duplicar_numero` agrege `&` para que pase el puntero de la variable ala funcion
```
duplicar_numero(valor1);
```
```
duplicar_numero(&valor1);
```
- Le faltaba `&` al `scanf` para que pueda ingresarle el valor
```
scanf("%d", valor1);
```
```
scanf("%d", &valor1);
```
- Agrege `;` al final de la linea
```
int suma = valor1 + valor2
```
```
int suma = valor1 + valor2;
```
- Al `return 0` le faltaba `;` al final de la linea
```
return 0
```
```
return 0;
```

### Ejercicio 4c:
_Veo los archivos_
- Punto_2
- .gitignore
- README.md
- tp1_1.c
- tp1_1.exe

No hace falta que este `tp1_1.exe`
### Ejercicio 4g:
- Se debe a que no hubo cambios para hacer el nuevo commit
- Obitene el Segundo commit (4f)
- No es igual a los anteriores
- Para saber que archivos nuevos, borrados y modificaciones hubo durante los commits