# Trabajo practico 1
### ¿Por que es conveniente incluirlo?
_Evita subir archivos inecesarios, protege informacion sensible como claves, mantiene el repositorio limpio y reduce conflictos y peso_
### ¿Cuando se debe hacer?
_Lo ideal es crear desde el inicio del proyecto pero tambien se puede agregar despues_
### ¿Como configuraría el archivo .gitignore?
_En un archivo de texto se inidica en cada lina que archivo ignorar_
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