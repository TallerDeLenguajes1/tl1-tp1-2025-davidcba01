[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

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
