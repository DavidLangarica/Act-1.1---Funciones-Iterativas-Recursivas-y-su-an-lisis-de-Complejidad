// =================================================================
//
// File: activity.h
// Author: David René Langarica Hernández
// Date: 27 de agosto de 2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
/* @Complexity	Según la notación Big O, tendría una complejidad O(n), pues
 * esta suma depende linealmente del elemento 'n' de la función, dicha 'n'
 * define cuantas veces se estará implementando el ciclo for en la suma, ya que
 * la variable de control 'i' depende precisamente de la variable 'n' */
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
  int suma = 0;
  for (int i = 0; i <= n; i++) {
    suma = suma + i;
  }
  return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
/* @Complexity	Según la notación Big O, tendría una complejidad O(n), ya que en
 * este caso solo se llama una vez a la función recursiva y la variable de
 * control 'n' disminuye en un valor constante de 1.
 */ == ==
    == == == == == == == == == == == == == == == == == == == == == == == == ==
    == == == == ==
    = unsigned int sumaRecursiva(unsigned int n) {
  if (n <= 1)
    return 1;
  return n + sumaRecursiva(n - 1);
}
// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
/* @Complexity	Según la notación Big O, tendría una complejidad O(1), porque en
 * este caso solo es necesario 1 paso constante para obtener el resultado de la
 * suma iterativa.
 */ == ==
    == == == == == == == == == == == == == == == == == == == == == == == == ==
    == == == == ==
    = unsigned int sumaDirecta(unsigned int n) {
  int suma = (n * (n + 1)) / 2;
  return suma;
}

#endif /* ACTIVITY_H */
