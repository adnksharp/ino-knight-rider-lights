# Knight Rider lights

[![Knight-Rider-bb.png](https://i.postimg.cc/hjvxsT3P/Knight-Rider-bb.png)](https://postimg.cc/WFRhbFvQ)

## Hardware y software necesarios
- Placa de desarrollo Arduino.
- 1 resistencia entre $\displaystyle 200\Omega$ a 1 $\displaystyle K\Omega$
- 12 LEDs
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
### Variables
- ```LED```: pines donde se conectan los LEDs.
- ```i```: variable para el funcionamiento de bucles.
- ```k```: LED a encender.
- ```j```: variable que indica la direccion en que se prenden los LEDs.
- ```Delay```: tiempo que permanece en pausa el programa.

### Funcionamiento
Dentro de un bucle se ponen todos los LEDs en bajo excepto el LED ```k``` cada ```Delay``` milisegundos.

- La variable k avaria de 0 a 11 y de 11 a 0 usando la variable ```j``` = ```1``` | ```-1```.

###### *Los LEDs están conectados de forma inversa por lo que es necesario ponerlos en alto para apagarlos y en bajo para encenderlos.
