[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

##Ejercicio 2)a)

##¿Qué es el archivo _.gitignore_?
El archivo _.gitignore_ es un archivo de texto que se utiliza en proyectos de Git para especificar qué archivos o directorios deben ser ignorados por el sistema de control de versiones Git. Es decir, indica a Git qué archivos no deben ser añadidos al repositorio ni ser rastreados. Esto es útil para evitar que archivos temporales, de configuración personal o dependencias de herramientas no sean incluidos en el repositorio.

##¿Por qué es conveniente incluirlo?
Incluir un archivo _.gitignore_ es **muy conveniente** por las siguientes razones:

1. **Evitar el seguimiento de archivos innecesarios:** Muchos proyectos generan archivos temporales, de configuración o binarios (por ejemplo, archivos de logs, compilaciones intermedias, configuraciones locales de un IDE, entre otros) que no deberían ser compartidos o versionados. Al tener un archivo _.gitignore_, podemos asegurarnos de que estos archivos no sean añadidos al repositorio accidentalmente.

2. **Reducir el tamaño del repositorio:** Algunos archivos generados automáticamente (como archivos de dependencias o binarios) pueden ocupar mucho espacio y no son necesarios para el funcionamiento del proyecto en sí, por lo que al ignorarlos, se mantiene el repositorio más limpio y eficiente.

3. **Mejorar la seguridad:** Al ignorar archivos de configuración sensible, como credenciales o claves API, podemos asegurarnos de no comprometer datos privados al subirlos a GitHub o cualquier otro servicio de repositorios.

##¿Cuándo se debe hacer?
El archivo _.gitignore_ debe ser configurado **desde el principio** de tu proyecto o cuando comencemos a trabajar con Git. Aunque podemos modificarlo en cualquier momento, es ideal configurarlo al inicio para evitar que archivos no deseados sean añadidos accidentalmente.

##¿Cómo configuraría el archivo _.gitignore_?
Para configurar un archivo _.gitignore_, debemos crear un archivo de texto llamado _.gitignore_ en la raíz de nuestro proyecto (o en cualquier subcarpeta donde quieras especificar reglas de ignorado). En este archivo, escribiremos las reglas de qué archivos o directorios deben ser ignorados por Git.



##Ejercicio 3)g)

##¿Por qué el resultado es el mismo en los puntos 2 y 3?
Los puntos 2 y 3 dan el mismo resultado porque tanto ptr (el puntero que apunta a num) como &num (la dirección de memoria de la variable num) almacenan la misma dirección. El puntero ptr está diseñado para almacenar la dirección de memoria de la variable num, por lo que al imprimir ambas direcciones, obtenemos la misma salida.

##¿Qué se obtiene en el punto 4?
En el punto 4, se obtiene la dirección de memoria del puntero. Es decir, no la dirección de la variable num, sino la dirección donde se almacena el puntero ptr. La dirección de memoria de ptr indica dónde está ubicada la variable que almacena la dirección de num. Esto es diferente de la dirección de num porque el puntero ptr es otra variable que contiene una dirección.

##¿Es igual a los anteriores?
No, la dirección de memoria del puntero (&ptr) no es igual a las direcciones de memoria de num ni al valor almacenado en el puntero (ptr). Mientras que las direcciones de num y el valor del puntero son iguales (ambas almacenan la dirección de num), la dirección de memoria de ptr es la ubicación donde está almacenado el puntero mismo.

##¿Por qué?
La diferencia se debe a que estamos hablando de dos conceptos distintos:

- **Dirección de num:** Es el lugar en memoria donde se guarda el valor de num.

- **Dirección de ptr:** Es la ubicación en memoria donde se almacena el puntero ptr que, a su vez, contiene la dirección de num. Así que &ptr indica donde se encuentra el puntero, y ptr (sin el &) apunta a la dirección de num.
