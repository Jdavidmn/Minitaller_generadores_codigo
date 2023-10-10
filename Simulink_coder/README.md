# Generación de código usando Simulink Coder

Esta es una guía sencilla donde la idea es lograr generar código en C usando la herramienta Simulink Coder y poder visualizar los archivos generados. El código generado es para simulación en tiempo real, así que para este ejemplo el objetivo es solamente familiarizarse con la herramienta y lograr generar los archivos de código C.

1. Dentro de la máquina virtual, abra **Matlab** y en la consola ejecute los siguientes comandos:
```matlab
model='rtwdemo_rtwintro';
open_system(model)
```
Esto tuvo que abrir un archivo de ejemplo de Simulink. El diagrama corresponde con un contador de 8 bits que alimentaun subsistema con un *trigger*, con parámetros *INC*, *LIMIT* y *RESET*. El amplificador, amplifica la señal de entrada por un factor *K* cuando la señal *equal_to_count* está en alto.

2. Abra el **Simulink Coder**, está en la pestaña de APPS.
3. Abra el menú **Settings**.
4. Diríjase en la pestaña de **Code Generation**.
5. En el apartado de **Target selection**, verifique que en **System target file** esté seleccionado *grt.tlc*, en caso contrario haga click en **Browse** y seleccionelo. Aquí se puede seleccionar la opción para generar código para un entorno específico o para el hardware objetivo.
6. Genere el código C haciendo click en **Build**, el botón se encuentra en la pestaña de *C CODE*.
7. Una vez finalizado el proceso, se genera una ventana con el reporte del proceso. En este puede revisar los detalles pero lo importante es el código C que se genera y puede ver seleccionando el archivo que se muestra en el menú de la izquierda.
8. De regreso en Matlab, puede verificar que en el directorio donde se encuentra ubicado se generó un archivo ejecutable (.exe). Este aunque lo puede ejecutar solamente va a mostrar un mensaje diciendo que el modelo se está iniciando. En el segundo ejemplo se va a profundizar más en el uso del código generado.
