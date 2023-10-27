# Generación de código usando Matlab Coder

1. Dentro de la máquina virtual abra el archivo llamado **fibonacci_series.m** y el archivo **test_fibonacci.m** en Matlab. El primer archivo es la función de Matlab que se va a convertir en código C++, observe el contenido de ambos scripts.
2. Teniendo el archivo **test_fibonacci.m** abierto, presione la tecla *F5* o presione el botón *Run*. **Tome una captura de la salida de la consola**.
3. Haga click en la pestaña de *APPS*, luego haga click en **MATLAB Coder**.
4. Se abrirá la ventana de *MATLAB Coder*, en la primera sección *Select*, en *Generate code for function* escriba **fibonacci_series** y presione ENTER y haga click en *Next*, que está abajo a la derecha.
5. En la sección *Define* escriba **test_fibonacci** y presione *Next*.
6. En la sección *Check* se realiza la prueba de la función fibonacci_series, simplemente presione el botón **Check for Issues**. Cuando haya finalizado **tome una captura de pantalla del resultado**. Presione ahora el botón *Next*.
7. En la sección *Generate*, seleccione la casilla de **C++**, en este punto si se estuviera utilizando una tarjeta de desarrollo se selecciona el hardware que corresponda, en nuestro caso se deja la opción por defecto de MATLAB Host Computer. Es **IMPORTANTE** que de click en *More Settings*, *All Settings* y casi al final en *Advanced*, en la opción de *Generate example main* escoja la opción de **Generate and compile an example main function**. Esto genera un archivo de encabezado main y ayuda con el proceso de compilación del código. Ya se puede cerrar la ventana de opciones. De click en **Generate**. **Tome captura del resultado de este proceso**. Presione *Next*.
8. En la última sección *Finish*, presione el botón **PACKAGE** arriba a la derecha, esto genera una carpeta comprimida con el código C++, guarde este archivo (puede dejar el nombre por defecto) en alguna ubicación de fácil acceso, este se debe transferir al computador local.
9. Este punto es libre, utilice el método que más se le facilite para transferir el archivo comprimido del paso anterior al computador local. En mi caso lo subí a Google Drive y de aquí lo descargué localmente. Asegurese de guardarlo dentro de la carpeta **Matlab_coder2/codigo_c/**. **Tome una captura del archivo ya localizado en este directorio**.
10. Abra una consola y ubíquese dentro del directorio **Matlab_coder2/codigo_c**. Dentro de esta carpeta se le facilitan primero un pequeño script *main.cpp* que utiliza la función creada con MATLAB Coder e imprime en consola el resultado al igual que en Matlab. El otro archivo *meson.build* es un archivo de configuración de meson que permite compilar el código de manera sencilla.
11. Ejecute el siguiente comando para descomprimir el archivo:
```bash
unzip fibonacci_series_pkg.zip
```
***Tome captura del estado actual del directorio**

12. Ejecute los siguientes comandos para compilar el código, asegúrese de tener instalados los paquetes relacionados con meson y ninja para esto, se especifiican en el README del directorio principal:
```bash
meson build
cd build
ninja
```
**Tome captura del resultado de estos comandos**

13. El comando anterior genera un archivo ejecutable llamado **fibo** con el código compilado, solamente se debe ejecutar este comando para correrlo:
```bash
./fibo
```
**Tome captura del resultado anterior**
