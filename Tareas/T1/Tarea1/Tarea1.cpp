// Tarea1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Node{
public:
    int carnet;
    string nombre;
    Node* next;
    Node(int carnet,string nombre) {
        this->carnet = carnet;
        this->nombre = nombre;
        next = NULL;
    }
};

class Lista {
    private:
        Node *header;
        Node* tail;
        int size;
    public:
        Lista() {
            header = NULL;
            tail = NULL;
            size = 0;
        }
        int getSize() {
            return size;
        }

 void insertar(int carnet,string nombre) {
            Node* n = new Node(carnet,nombre);

            if (header == NULL) {
                header = n;
                tail = n;
            }
            else {
                tail->next = n;
                tail = n;

            }

            size++;
        }
 void prepend(int carnet,string nombre) {
     Node* n = new Node(carnet,nombre);
     if (header == NULL) {
         header = n;
         tail = n;
     }
     else {
         Node* temp = header;
         header = n;
         n->next=temp;
     }
     size++;
}
 void toString() {
     Node* temp = header;

     while (temp != NULL) {
         cout << temp->carnet << temp->nombre << " // ";
         temp = temp->next;
     }
     cout << endl;
 }
 bool search(int x)
 {
     Node* temporal = header; // Initialize current  
     while (temporal != NULL)
     {
         if (temporal->carnet == x)
             return true;
         temporal = temporal->next;
     }
     return false;
 }

};
int main()
{
    Lista probando;
    Node* head = NULL;
    int encontrarPrimero = 201320201;
    int encontrarSegundo = 200154321;

    probando.insertar(201413473,"Maynor Garcia");
    probando.insertar(201820201, "Juan Perez");
    probando.insertar(201320201, "pedro Garcia");
    probando.insertar(201220201, "Raul Garcia");
    probando.prepend(202012345, "Mario Casanova");
    probando.toString();
    cout << "--------------------- \n";
    probando.search(encontrarPrimero) ? cout << "si se encontgro" << encontrarPrimero : cout << "No se encontro" << encontrarPrimero;
    cout << "--------------------- \n";
    probando.search(encontrarSegundo) ? cout << "si se encontgro" << encontrarSegundo : cout << "No se encontro" << encontrarSegundo;
    cout << "--------------------- \n";


}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
