        #include "triangle.h" //including the header file we would like to use
        #include <iostream>
        using namespace std;

        shapes :: triangle:: triangle() //constructor
              {
            tbase=0;
            theight=0;
              }
        shapes :: triangle:: triangle(int tb,int th) {
            tbase=tb;
            theight=th;
        }

        //destructor implementation
        shapes ::triangle::~triangle() {
            cout<<"triangle destructor called"<<endl;
        }

        void shapes ::triangle::setTBase(int sl) {
                tbase=sl;
        }

        void shapes :: triangle::setTHeight(int h){
                theight=h;
        }

        int  shapes ::triangle:: getTBase(){
            return tbase;
        }

        int  shapes ::triangle:: getTHeight(){

            return theight;
        }
        float shapes :: triangle::calculateTArea(){
        return  0.5 *tbase*theight;
        }