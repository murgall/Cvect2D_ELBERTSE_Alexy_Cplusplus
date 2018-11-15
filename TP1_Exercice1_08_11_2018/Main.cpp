#include <iostream>
#include <stdlib.h>
#include<stdio.h>



using namespace std;

#include"Cvect2D.h"

int main() {
	
	float fltX;
	float fltY;
	float scal = 4.0;

	CVect2D cVectMonVecteur;
	CVect2D cVectMonVecteur2;
	CVect2D cVectMonVecteur3;



	cout << "Coordonnee en X du premier vecteur" << endl;
	cin >> fltX;
	cVectMonVecteur.setVecteurEnX(fltX);
	

	cout << "Coordonnee en Y du premier vecteur" << endl;
	cin >> fltY;
	cVectMonVecteur.setVecteurEnY(fltY);

	cout << "Coordonnee en X du deuxieme vecteur" << endl;
	cin >> fltX;
	cVectMonVecteur2.setVecteurEnX(fltX);

	cout << "Coordonnee en Y du deuxieme vecteur" << endl;
	cin >> fltY;
	cVectMonVecteur2.setVecteurEnY(fltY);
	

	cVectMonVecteur3.somme_vectorielle(cVectMonVecteur, cVectMonVecteur2, cVectMonVecteur3);

	cout << "Somme en X du premier et second vecteur : " << cVectMonVecteur3.getVecteurEnX() << endl;
	cout << "Somme en Y du premier et second vecteur : " << cVectMonVecteur3.getVecteurEnY() << endl;

	cVectMonVecteur3.soustraction_vectorielle(cVectMonVecteur, cVectMonVecteur2, cVectMonVecteur3);

	cout << "difference en X du premier et second vecteur : " << cVectMonVecteur3.getVecteurEnX() << endl;
	cout << "difference en Y du premier et second vecteur : " << cVectMonVecteur3.getVecteurEnY() << endl;




	cVectMonVecteur3 = cVectMonVecteur;

	cVectMonVecteur.produit_scalaire(cVectMonVecteur3, scal);

	cout << "produit en X du vecteur : " << cVectMonVecteur3.getVecteurEnX() << endl;
	cout << "produit en Y du vecteur : " << cVectMonVecteur3.getVecteurEnY() << endl;

	cout << "produit scalaire entre le premier et le second vecteur : " << cVectMonVecteur.multiplication_vecteurs(cVectMonVecteur, cVectMonVecteur2) << endl;

	cout << "produit des normes entre le premier et le second vecteur : " << cVectMonVecteur.produit_norme(cVectMonVecteur, cVectMonVecteur2) << endl;


	



	system("pause");

	return 0;
}