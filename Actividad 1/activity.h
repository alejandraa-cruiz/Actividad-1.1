// =================================================================
//
// File: activity.h
// Author: Alejandra Cabrera Ruiz A01704463
// Date:26/08/2022
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
// @Complexity O(n), n es un límite en las iteraciones y las sentencias
// son simples y tenemos solo un ciclo for
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int sum=0;
	for (int i=0;i<=n;i++){
		sum=sum+i;
	}
	return sum;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) porque n es un limite en la recursión. 
// Lo podemos comprobar porque T(1)=1 y T(n+1)=1+T(n)
// =================================================================

unsigned int sumaRecursiva(unsigned int n) {
	if(n==1){
		return 1; //el caso baso es que si n es igual a 1 entonces la suma regresa 1
	}
	
	else{
		return n + sumaRecursiva(n-1);

	}	
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1) porque son operaciones simples
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int sum=(n*(n+1))/2;
	return sum;
}

#endif /* ACTIVITY_H */
