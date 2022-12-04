#pragma once

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include "Grafo.h"

class Controladora {
private:
	Grafo g;
	int** matriz;
	int n;
	int flujoTemporal;
	int flujoMaximo;
	int* A ;

public:
	Controladora(int n, int** matriz) {
		this->n = n;
		this->matriz = matriz;
		flujoTemporal = 1000;
		flujoMaximo = 0;
		A = new int[n];
	}
	~Controladora() {}

	string mostrarMatriz() {
		string s = "";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
			{
				if (j > i && matriz[i][j]>=0) s += "[" + to_string(matriz[i][j]) + "] ";
				else s+= "[ ] ";
			}
			s+= "\n";
		}
		return s;
	}
	int getN()
	{
		return n;	
	
	}
	void InsertarNodos() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matriz[i][j] != -1) {
					Nodo nodo(i);
					g.agregarNodo(nodo);
				}
				if (i==n-1&&j==n-1) {
					Nodo nodo(i);
					g.agregarNodo(nodo);
				}
			}
		}
		
	}

	void InsertarAristas() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((j > i) && (matriz[i][j]!=-1)) {
					g.agregarAristaPorID(i, j, matriz[i][j]);
				}
				
			}
		}
	}

	string imprimirGrafo() {
		return g.print();
	}
	Grafo getgrafo()
	{
	
		return g;
	}

	bool NodoLleno(Nodo temp) {
		int contNodoFull = 0;
		for (int i = 0; i < temp.getListaArista().size(); i++) {
			if (temp.getListaArista()[i].getfull())contNodoFull++; 
		}

		if (contNodoFull != temp.getListaArista().size() || contNodoFull == 0) {
			return false;
		}
		else return true;
	}

	bool verificarNodoLleno(Nodo temp) {
		int contNodoFull = 0;
		Nodo temp2;
		int nodoDestino = g.getTotalNodos()[n - 1].getID();

		for (int i = 0; i < temp.getListaArista().size(); i++) {
			if (temp.getListaArista()[i].getfull())contNodoFull++;
		}

		if (contNodoFull == 0 ) {
			return false;
		}
		else {
			if (contNodoFull == temp.getListaArista().size()) { //nodo siguiente lleno
				return true;
			}
			else {
				contNodoFull = 0;
				for (int i = 0; i < temp.getListaArista().size(); i++) {
					if (temp.getListaArista()[i].getfull())contNodoFull++;
					else {
						temp2 = g.getNodoPorID(temp.getListaArista()[i].getnodoFinalID());
						if (NodoLleno(temp2) == true)  contNodoFull++;
					}
					
				}
				if (contNodoFull == temp.getListaArista().size()){ //nodo siguiente del siguiente lleno
					return true;
				}
				else return false;
			}
		}
	}

	int explorarCaminos() {
		int flujoActual = 0;
		int nodoIDsiguiente = 0;
		Nodo nodoTemp;
		bool esNodoLleno = false;
		bool caminoTomado = false;
		flujoTemporal = 1000;

		for (int i = 0; i < g.getTotalNodos().size(); i++) {
			vector<Arista> LstAristaTemp;
			Arista aristaTemp;
			if ((g.getTotalNodos()[i].getID() == nodoIDsiguiente) || (i ==0)) {

				for (int j = 0; j < g.getTotalNodos()[i].getListaArista().size(); j++) {

					nodoTemp = g.getNodoPorID(g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID());
					esNodoLleno = verificarNodoLleno(nodoTemp);
					if (esNodoLleno == true) {
						//nodo inutilizable 
						aristaTemp = Arista(g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID(), g.getTotalNodos()[i].getListaArista()[j].getcapacidad(), g.getTotalNodos()[i].getListaArista()[j].getflujo(), false, true);
					}
					else {
						if ((g.getTotalNodos()[i].getListaArista()[j].getfull() == false) && (caminoTomado == false) && (esNodoLleno == false)) {

							caminoTomado = true;
							nodoIDsiguiente = g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID();

							if (g.getTotalNodos()[i].getListaArista()[j].getflujo() == 0) flujoActual = g.getTotalNodos()[i].getListaArista()[j].getcapacidad();
							else flujoActual = g.getTotalNodos()[i].getListaArista()[j].getcapacidad() - g.getTotalNodos()[i].getListaArista()[j].getflujo();

							if (flujoActual < flujoTemporal) flujoTemporal = flujoActual;

							//se puede editar
							aristaTemp = Arista(g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID(), g.getTotalNodos()[i].getListaArista()[j].getcapacidad(), g.getTotalNodos()[i].getListaArista()[j].getflujo(), true, g.getTotalNodos()[i].getListaArista()[j].getfull());
						}
						else {
							//no se puede editar
							aristaTemp = g.getTotalNodos()[i].getListaArista()[j];
						}
					}
					LstAristaTemp.push_back(aristaTemp);
				}

				g.actualizarNodo(g.getTotalNodos()[i].getID(),LstAristaTemp, false);
				caminoTomado = false;
			}
		}

		return nodoIDsiguiente;
	}

	void setearCaminos() {
		int flujoMaximo = 0;
		int nodoIDsiguiente = 0;

		int flujoCalculo;
		bool fullTemp=false;

		int contNodoFull = 0;

		for (int i = 0; i < g.getTotalNodos().size(); i++) {
			vector<Arista> LstAristaTemp;
			Arista aristaTemp;

			for (int j = 0; j < g.getTotalNodos()[i].getListaArista().size(); j++) {
				if (g.getTotalNodos()[i].getListaArista()[j].getedit() == true) {
					nodoIDsiguiente = g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID();

					//datos para cambiar
					flujoCalculo = g.getTotalNodos()[i].getListaArista()[j].getflujo() + flujoTemporal;
					if (g.getTotalNodos()[i].getListaArista()[j].getcapacidad() == flujoCalculo) {
						fullTemp = true; 
					}

					//actualizar datos
					aristaTemp = Arista(g.getTotalNodos()[i].getListaArista()[j].getnodoFinalID(), g.getTotalNodos()[i].getListaArista()[j].getcapacidad(), flujoCalculo, false, fullTemp);
					fullTemp = false;


				}
				else {
					//no se actualizan datos
					aristaTemp = g.getTotalNodos()[i].getListaArista()[j];
				}
				LstAristaTemp.push_back(aristaTemp);
				
			}
			
			
			g.actualizarNodo(g.getTotalNodos()[i].getID(), LstAristaTemp, false);

		}
	}


	string FordFulkerson() {
		int i=0;
		string s = "";
		string tempFlujoTemporal = "";
		int nodoDestino = g.getTotalNodos()[n - 1].getID();
		int nodoIDsiguiente = explorarCaminos();
		int cont=0;
		int contprueba = 0;
		while (nodoIDsiguiente == nodoDestino) {
			setearCaminos();
			flujoMaximo += flujoTemporal;
			tempFlujoTemporal += to_string(flujoTemporal) + "  ";
			cont++;
			A[i] = flujoTemporal;
			nodoIDsiguiente = explorarCaminos();
			contprueba++;
			i++;
		}

		s += "El flujo maximo de la red es: \n" + to_string(flujoMaximo) + 
			+ "\n\n" + "La cantidad de iteraciones es: \n" + to_string(contprueba) +
			+ "\n\n" + "El flujo maximo se hallo a partir de la suma de estos flujos: \n" + tempFlujoTemporal;
		
		
		return s;
		
		
	}
	int* getA()
	{
		
		
		return A;
	}
	int getflujomax()
	{
		return flujoMaximo;
	}
};