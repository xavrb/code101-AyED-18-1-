# code101-AyED-18-1-  

Algoritmos y Estructuras de datos.        18-1         Septiembre 2017.  (PARTE DE EVALUACIÓN CONTINUA)

Nombre del alumno:

## Preguntas

1. ¿Qué se observa en el monitor al ejecutar esta parte de código?:  
```c++
for ( int FOR  = 2 ; FOR != 4 ; FOR = FOR+2 ){
	int For =  1;
	For  = For  *  FOR;
	cout << "FOR : " << FOR ;
}
cout << " vamonos ";
```

```
a. FOR2  
**b. FOR2vamonos**
c. FOR0vamonos  
d. FOR1  
e. FOR2  
f. 2  
g. vamonos    
``` 

2. Realice el diagrama de flujo del inciso 03

3. ¿Qué muestra en la pantalla la siguiente parte de código?:  
```c++
int  For=3; 
do{
	For++;  cout << "For” ;
	cout << For ; For++;}while(For==3);
``` 
```
a. 3For  
b. For3  
c. 3  
d. For  
e. 4  
f. 3For3
**g. For4** 
h. ninguna
```
4. ¿Cuál es el ciclo que primero pregunta la condición y después se ejecuta o no?
```
a. if
b. switch     
c. while      
d. case     
e. do...while      
f. else   
**g. while...do**      
h. ninguna
``` 

5. 

```c++
int X = 8;  
while(X=5; X!=5; X--){
	int Y=1;
	Y=Y*X;
	cout << "XX" << X ;
}  
cout <<  X ;
``` 
a. XX5  
b. 8   
c. XX0  
d. XX1  
e. 5XX  
f. 5  
g. 0  
h. XX25  
i. X8  

**Nota: Este código no puede ser compilado**  
*¿Por qué?*  
`while` no admite `;` dentro del argumento; admite una condición lógica, que puede estar compuesta, i.e. `while(A OR B AND C OR D)`.  
La salida de g++ es:  
```shell
g++ -o 5 5.cpp 
5.cpp: En la función ‘int main()’:
5.cpp:8:14: error: expected ‘)’ before ‘;’ token
     while(X=5; X!=5; X--){
              ^
5.cpp:8:25: error: expected ‘;’ before ‘)’ token
     while(X=5; X!=5; X--){
                         ^

```
           
---


## Traer resueltos para próxima clase:  

### Formar un menú con los siguientes dos programas:  

Realizar una función, y un programa que la utilice, que muestre el problema de Collatz (*Ulam problem*)¹².
Sea `a_0` un entero. Entonces uno de los problemas de Collatz pregunta si iterando:
![collatz o ulam](http://mathworld.wolfram.com/images/equations/CollatzProblem/NumberedEquation1.gif)  

Siempre regresa `1` para `a_0` positivo.

Ejemplo :   Para `a_0=5` es  :  `5, 16, 8, 4, 2, 1`  

Realizar una función , y un programa que la utilice, para mostrar la serie (así como se observa):  

`1/1  +  9/3  +  25/5  + 49/7  +  81/9  +  121/11  +  169/13`


## INVESTIGAR (Para próxima clase)  
*resuelto*

En forma individual favor de investigar los siguientes paradigmas de programación: Estructurado, Orientado a Objetos y Modular.  

### Estructurado
La programación estructurada es un paradigma de programación orientado a mejorar la claridad, calidad y tiempo de desarrollo de un programa de computadora, utilizando únicamente subrutinas y tres estructuras: secuencia, selección (if y switch) e iteración (bucles for y while), considerando innecesario y contraproducente el uso de la instrucción de transferencia incondicional (GOTO), que podría conducir a "Código espagueti", que es mucho más difícil de seguir y de mantener, y era la causa de muchos errores de programación. Surgió en la década de 1960, particularmente del trabajo de Böhm y Jacopini,​ y una famosa carta, «La sentencia goto, considerada perjudicial», de Edsger Dijkstra en 19682​ — y fue reforzado teóricamente por el teorema del programa estructurado, y prácticamente por la aparición de lenguajes como ALGOL con adecuadas y ricas estructuras de control.  

### Orientado a Objetos
La programación orientada a objetos (POO, u OOP según sus siglas en inglés) es un paradigma de programación que viene a innovar la forma de obtener resultados. Los objetos manipulan los datos de entrada para la obtención de datos de salida específicos, donde cada objeto ofrece una funcionalidad especial. Muchos de los objetos pre-diseñados de los lenguajes de programación actuales permiten la agrupación en bibliotecas o librerías, sin embargo, muchos de estos lenguajes permiten al usuario la creación de sus propias bibliotecas. Está basada en varias técnicas, incluyendo herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento. Su uso se popularizó a principios de la década de 1990. En la actualidad, existe una gran variedad de lenguajes de programación que soportan la orientación a objetos.    

### Modular
La programación modular es un paradigma de programación que consiste en dividir un programa en módulos o subprogramas con el fin de hacerlo más legible y manejable.  

Se presenta históricamente como una evolución de la programación estructurada para solucionar problemas de programación más grandes y complejos de lo que esta puede resolver.  

Al aplicar la programación modular, un problema complejo debe ser dividido en varios subproblemas más simples, y estos a su vez en otros subproblemas más simples. Esto debe hacerse hasta obtener subproblemas lo suficientemente simples como para poder ser resueltos fácilmente con algún lenguaje de programación. Esta técnica se llama refinamiento sucesivo, divide y vencerás ó análisis descendente (Top-Down).
Un 'módulo' es cada una de las partes de un programa que resuelve uno de los subproblemas en que se divide el problema complejo original. Cada uno de estos módulos tiene una tarea bien definida y algunos necesitan de otros para poder operar. En caso de que un módulo necesite de otro, puede comunicarse con éste mediante una interfaz de comunicación que también debe estar bien definida.
Si bien un módulo puede entenderse como una parte de un programa en cualquiera de sus formas y variados contextos, en la práctica se los suele tomar como sinónimos de procedimientos y funciones. Pero no necesaria ni estrictamente un módulo es una función o un procedimiento, ya que el mismo puede contener muchos de ellos. No debe confundirse el término "módulo" (en el sentido de programación modular) con términos como "función" o "procedimiento", propios del lenguaje que lo soporte.





## Notas
[1] Wolfram Knowledge: [Collatz Problem](http://mathworld.wolfram.com/CollatzProblem.html)  
[2] The On-Line Encyclopedia of Integer Sequences:  [Number of halving and tripling steps to reach 1 in `3x+1' problem, or -1 if 1 is never reached](https://oeis.org/A006577)


