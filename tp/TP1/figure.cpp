#include "figure.h"
#include <iostream>
#include <string>

using namespace std;

int Figure::compteur=0;

Polygone::Polygone(){
    nb_cotes = 0;
    compteur++;
}

Polygone::Polygone(int nb){
    nb_cotes = nb;
    compteur++;
}

void Polygone::afficher_caracteristiques() const {
    try
    {   if (nb_cotes<5){
            cout << "caractéristiques polygones : " << endl;
            cout << "nombre de côtés : " << nb_cotes << endl;
        }
        else{
            throw string ("le nb de côtés doit être inférieur à 5");
        }
    }
    catch(const string& error)
    {
        cerr << error << endl;
        exit(-1);
    }
    
    
}

Rectangle::Rectangle(){
    nb_cotes = 4;
    Longueur = 1;
    Largeur = 1;
}

Rectangle::Rectangle(float Long, float Larg){
    nb_cotes = 4;
    Longueur = Long;
    Largeur = Larg;
}

float Rectangle::perimetre() const{
    return 2*Longueur+2*Largeur;
}

void Rectangle::afficher_caracteristiques() const{
    cout << "caractéristiques Rectangle : " << endl;
    cout << "Longueur : " << Longueur << endl;
    cout << "Largeur : " << Largeur << endl;
    cout << "nombre de côtés : " << nb_cotes << endl;
    cout << "périmetre : " << perimetre() <<endl;
}

Carre::Carre(){
    Longueur = 1;
    Largeur = 1;
}

Carre::Carre(float cote){
    Longueur = cote;
    Largeur = cote;
}

TriangleEquilateral::TriangleEquilateral(){
    nb_cotes = 3;
    dim_cote = 1;
}

TriangleEquilateral::TriangleEquilateral(float cote){
    nb_cotes = 3;
    dim_cote = cote;
}

float TriangleEquilateral::perimetre() const{
    return 3*dim_cote;
}

void TriangleEquilateral::afficher_caracteristiques() const{
    cout << "caractéristiques Triangle : " << endl;
    cout << "périmetre : " << perimetre() <<endl;
}

coloriable::coloriable(){
    couleur="blanc";
}

coloriable::coloriable(string coul){
    couleur=coul;
}

Cercle::Cercle(){
    r=1;
    //this->couleur = "blanc";
    compteur++;
}

Cercle::Cercle(float rayon, string coul){

    r=rayon;
    couleur= coul;
    compteur++;
}


float Cercle::perimetre() const{
    return 2*r*3.14;
}
void Cercle::afficher_caracteristiques() const{
    cout << "caractéristiques Cercle : " << endl;
    cout << "rayon : " << r << endl;
    cout << "périmetre : " << perimetre() <<endl;
    cout << "couleur : " << couleur << endl;
}