#pragma once
#include<iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
using namespace std;

class Arista {
private:
	int capacidad;
	int flujo;
	bool full;
	bool edit;
	int nodoFinalID;
public:
	Arista() {}
	Arista(int nodoFinalID, int capacidad) {
		this->nodoFinalID = nodoFinalID;
		this->capacidad = capacidad;
		flujo = 0;
		full = edit = false;
	}
	Arista(int nodoFinalID, int capacidad, int flujo, bool edit, bool full) {
		this->nodoFinalID = nodoFinalID;
		this->capacidad = capacidad;
		this->flujo = flujo;
		this->edit = edit;
		this->full = full;
	}

	~Arista() {}

	void setnodoFinalID(int nodoFinalID) { this->nodoFinalID = nodoFinalID; }
	void setflujo(int flujo) { this->flujo = flujo; }
	void setfull(bool full) { this->full = full; }
	void setedit(bool edit) { this->edit = edit; }

	int getnodoFinalID() { return nodoFinalID; }
	int getcapacidad() { return capacidad; }
	int getflujo() { return flujo; }
	bool getfull() { return full; }
	bool getedit() { return edit; }
};


class Nodo {
private:
	int ID;
	bool full;
	vector<Arista> ListaArista;
public:
	Nodo() {}
	Nodo(int ID) {
		this->ID = ID;
		full=false;
	}
	~Nodo() {}
	void setID(int ID) { this->ID = ID; }
	void setFull(bool full) { this->full = full; }

	int getID() { return ID; }
	bool getfull() { return full; }
	vector<Arista> getListaArista() { return ListaArista; }
	void setListaArista(vector<Arista> ListaArista) { this->ListaArista = ListaArista; }

	string print() {
		string s = "[";
		for (int it = 0; it<ListaArista.size(); it++) {
			s+= to_string(ListaArista[it].getnodoFinalID()+1) + "(" + to_string(ListaArista[it].getcapacidad()) + "/" + to_string(ListaArista[it].getflujo()) + "), ";
		}
		s+= "]";
		return s;
	}

	void agregarArista_ListaArista(int vid, int capacidad) {
		ListaArista.push_back(Arista(vid, capacidad));
	}

	/*vector<Arista> getListaArista()
	{
		return ListaArista;
	}*/

};


class Grafo {
private:
	vector<Nodo> Nodos;
public:
	Grafo() {}
	~Grafo() {}

	vector<Nodo> getTotalNodos() { return Nodos; }

	bool verificarSiNodoExistePorID(int vid) {
		bool band = false;
		for (int i = 0; i < Nodos.size(); i++) {
			if (Nodos.at(i).getID() == vid) {
				band = true;
				break;
			}
		}
		return band;
	}

	bool verificarSiAristaExistePorId(int vid1, int vid2) {
		Nodo v = getNodoPorID(vid1);
		vector<Arista> e;
		bool band = false;
		e = v.getListaArista();
		for (auto it = e.begin(); it != e.end(); it++) {
			if (it->getnodoFinalID() == vid2) {
				band = true;
				break;
			}
		}
		return band;
	}

	void agregarNodo(Nodo nuevoNodo) {
		bool check = verificarSiNodoExistePorID(nuevoNodo.getID());
		if (check == true) {
			cout << "Ya existe el Nodo con este ID" << endl;
		}
		else {
			Nodos.push_back(nuevoNodo);
		}
	}

	Nodo getNodoPorID(int vid) {
		Nodo temp;
		for (int i = 0; i < Nodos.size(); i++) {
			temp = Nodos.at(i);
			if (temp.getID() == vid) {
				return temp;
			}
		}
		return temp;
	}

	void agregarAristaPorID(int V1, int V2, int capacidad) {
		bool check1 = verificarSiNodoExistePorID(V1);
		bool check2 = verificarSiNodoExistePorID(V2);

		bool check3 = verificarSiAristaExistePorId(V1, V2);
		if ((check1 == true) && (check2 == true)) {
			if (check3 != true) {
				for (int i = 0; i < Nodos.size(); i++) {
					if (Nodos.at(i).getID() == V1) {
						Nodos.at(i).agregarArista_ListaArista(V2, capacidad);
					}
				}
			}
		}
	}

	string print() {
		string s;
		for (int i = 0; i < Nodos.size(); i++) {
			Nodo temp;
			temp = Nodos.at(i);
			s+= "\n(" + to_string(temp.getID()+1) + ") --> ";
			s+=temp.print();
		}
		return s;
	}

	vector<Nodo> getNodos()
	{
		return Nodos;
	}

	Nodo getnodo(int i)
	{
		return Nodos.at(i);
	}
	void actualizarNodo(int ID, vector<Arista> newListaArista, bool full) {
		bool check = verificarSiNodoExistePorID(ID);
		if (check == true) {
			for (int i = 0; i < Nodos.size(); i++) {
				if (Nodos.at(i).getID() == ID) {
					Nodos.at(i).setListaArista(newListaArista);
					Nodos.at(i).setFull(full);
					break;
				}
			}
		}
	}

};