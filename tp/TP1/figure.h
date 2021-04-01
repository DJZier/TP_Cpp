#ifndef FIGURE_H
#define FIGURE_H

#include <string>

using namespace std;

class Figure{
    public: 
        static int compteur;
        //virtual float perimetre() const=0;
        virtual void afficher_caracteristiques() const=0;
        int nb_fig() const {return compteur;}
};



////////////////////////////////////POLYGONE//////////////////////////////////////////


class Polygone : public Figure{
    public:
        Polygone();
        Polygone(int nb);
        //virtual float perimetre() const =0.0;
        virtual void afficher_caracteristiques() const;
    
    protected:
        int nb_cotes=3;
};


////////////////////////////////////RECTANGLE//////////////////////////////////////////


class Rectangle : public Polygone{
    public:
        Rectangle();
        Rectangle(float Long, float Larg);
        float get_long() const {return Longueur;};
        float get_larg() const {return Largeur;};
        void set_long(float new_long){Longueur = new_long;};
        void set_larg(float new_larg){Largeur = new_larg;};
        virtual float perimetre() const;
        virtual void afficher_caracteristiques() const;
    
    protected:
        float Longueur;
        float Largeur;
};

////////////////////////////////////CARRE//////////////////////////////////////////
class Carre : public Rectangle{
    public :
        Carre();
        Carre(float cote);
};

////////////////////////////////////TriangleEquilateral//////////////////////////////////////////
class TriangleEquilateral : public Polygone{
    public:
    TriangleEquilateral();
    TriangleEquilateral(float cote);
    virtual float perimetre() const;
    virtual void afficher_caracteristiques() const;

    protected:
    float dim_cote;
};
////////////////////////////////////Coloriable//////////////////////////////////////////

class coloriable{
protected :
    string couleur;
public :
    coloriable();
    coloriable(string coul);
    string getCouleur(){return couleur;}
    void setCouleur(string coul){couleur=coul;}
};


////////////////////////////////////Cercle//////////////////////////////////////////
class Cercle : public Figure , public coloriable{
    public:
    Cercle();
    Cercle(float rayon, string couleur);
    virtual float perimetre() const;
    virtual void afficher_caracteristiques() const;

    protected:
    float r;
};









#endif