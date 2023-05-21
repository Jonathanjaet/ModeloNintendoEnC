#include "ModeloNintendo.h"

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
   this->nombre = nombre;
   this->color = color;
   this->edad = edad;
   this->esHumano = esHumano;
   this->posicionX = 0;
   this->posicionY = 0;
   // Resto del constructor
}

ModeloNintendo::~ModeloNintendo() {
   // Destructor
}

void ModeloNintendo::saludar(string nombre) {
   cout << "Hola, " << nombre << "!" << endl;
}

void ModeloNintendo::saltar(char tecla) {
   // Lógica para saltar
}

void ModeloNintendo::agacharse(char tecla) {
   // Lógica para agacharse
}

int ModeloNintendo::avanzar(char tecla) {
   // Lógica para avanzar
   return 0;
}

void ModeloNintendo::danio(string grito) {
   grito="Ay!";
   cout << grito;
}

void ModeloNintendo::setNombre(string nuevoNombre) {
   this->nombre = nuevoNombre;
}

void ModeloNintendo::setColor(string nuevoColor) {
   this->color = nuevoColor;
}

string ModeloNintendo::getNombre() {
   return this->nombre;
}

string ModeloNintendo::getColor() {
   return this->color;
}

void ModeloNintendo::mover(int deltaX, int deltaY) {
   this->posicionX += deltaX;
   this->posicionY += deltaY;
}

void mostrarMenu() {
   cout << "----- Menú -----" << endl;
   cout << "1. Saludar" << endl;
   cout << "2. Saltar" << endl;
   cout << "3. Agacharse" << endl;
   cout << "4. Avanzar" << endl;
   cout << "5. Recibir daño" << endl;
   cout << "6. Crear nuevo personaje" << endl;
   cout << "7. Mover personaje" << endl;
   cout << "8. Mostrar información del personaje" << endl;
   cout << "9. Salir" << endl;
   cout << "----------------" << endl;
   cout << "Ingrese una opción: ";
}

int main() {
   ModeloNintendo personaje("Mario", "Rojo", 30, 100, true);
   bool salir = false;
   
   while (!salir) {
      mostrarMenu();
      int opcion;
      cin >> opcion;
      
      switch (opcion) {
         case 1: {
            cout << "Opción 1 seleccionada: Saludar" << endl;
            personaje.saludar(personaje.getNombre());
            break;
         }
         case 2: {
            cout << "Opción 2 seleccionada: Saltar" << endl;
            personaje.saltar('S');
            break;
         }
         case 3: {
            cout << "Opción 3 seleccionada: Agacharse" << endl;
            personaje.agacharse('A');
            break;
         }
         case 4: {
            cout << "Opción 4 seleccionada: Avanzar" << endl;
            personaje.avanzar('D');
            break;
         }
         case 5: {
            cout << "Opción 5 seleccionada: Recibir daño" << endl;
            personaje.danio("Ay!!!");
            break;
         }
         case 6: {
            cout << "Ingrese el nombre del nuevo personaje: ";
            string nombreNuevo;
            cin >> nombreNuevo;
            
            cout << "Ingrese el color del nuevo personaje: ";
            string colorNuevo;
            cin >> colorNuevo;
            
            personaje.setNombre(nombreNuevo);
            personaje.setColor(colorNuevo);
            cout << "¡Nuevo personaje creado!" << endl;
            break;
         }
         case 7: {
            int deltaX, deltaY;
            cout << "Ingrese el desplazamiento en X: ";
            cin >> deltaX;
            cout << "Ingrese el desplazamiento en Y: ";
            cin >> deltaY;
            personaje.mover(deltaX, deltaY);
            cout << "Personaje movido a la posición (" << personaje.posicionX << ", " << personaje.posicionY << ")" << endl;
            break;
         }
         case 8:{
            cout << "Información del personaje:" << endl;
            cout << "Nombre: " << personaje.getNombre() << endl;
            cout << "Color: " << personaje.getColor() << endl;
            cout << "Edad: " << personaje.edad << endl;
            cout << "Es humano: " << (personaje.esHumano ? "Sí" : "No") << endl;
            cout << "Posición: (" << personaje.posicionX << ", " << personaje.posicionY << ")" << endl;
            break;
         }
         case 9:
            salir = true;
            break;
         default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
      }
      
      cout << endl;
      getchar();

   }
   
   return 0;
}

