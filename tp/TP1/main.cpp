#include "figure.h"
#include <vector>
#include <iostream>
#include <list>
#include <typeinfo>

using namespace std;

int main(){


    /*Rectangle rect(2.0,3.0);
    rect.afficher_caracteristiques();
    Carre carre(10.0);
    carre.afficher_caracteristiques();
    TriangleEquilateral triangle(3);
    triangle.afficher_caracteristiques();
    Cercle cercle(3.0);
    cercle.afficher_caracteristiques();*/

    /*vector<Figure*> tab;
    tab.push_back(new Carre(5));
    tab.push_back(new Cercle(5, "bleu"));
    tab.push_back(new Polygone(14));
    tab.push_back(new TriangleEquilateral(5));

    for (const auto& figure : tab){
        figure->afficher_caracteristiques();
    }

    cout<< "nb figures : " << tab[2]->nb_fig() << endl;*/

    list<Figure*> Liste;
    list<Figure*>::iterator it;
    if (Liste.empty()) {
        cout << "liste vide" << endl;
    }
    else {
        cout << "liste non vide" << endl;
    }
    Figure * cercle1 = new Cercle(5, "rouge");
    Figure * rect = new Rectangle(4,8);
    Figure * carre = new Carre(5);
    Liste.push_back(cercle1);
    Liste.push_back(rect);
    Liste.push_back(carre);
    if (Liste.empty()) {
        cout << "liste vide" << endl;
    }
    else {
        cout << "liste non vide" << endl;
    }
    for (it = Liste.begin(); it != Liste.end(); ++it){
        if (typeid((**it)) == typeid(Cercle)){
            cout << "coucou je suis bien un cercle" << endl;
        }
        else{
            cout << "coucou je suis pas un cercle" << endl;

        }
        
        (*it)->afficher_caracteristiques();
    }

    
    return 0;

}