#ifndef MODELO_NINTENDO_H
#define MODELO_NINTENDO_H

#include <iostream>
#include <string>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;
      int posicionX;
      int posicionY;

      ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      ~ModeloNintendo();
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void danio(string grito);
      
      // Setters
      void setNombre(string nuevoNombre);
      void setColor(string nuevoColor);
      
      // Getters
      string getNombre();
      string getColor();
      
      // Nuevo método
      void mover(int deltaX, int deltaY);

   protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
   private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);
};

#endif