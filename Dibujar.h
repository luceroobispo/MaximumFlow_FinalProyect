#pragma once
using namespace std;
using namespace System;
using namespace System::Drawing;
#include<iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
#include<conio.h>
#include"Controladora.h"
class Dibujar
{
private:
	int** matriz;
	int N;
	int* Posx;
	int* Posy;
	Controladora *C;
	Grafo ga;

public:

	Dibujar(Controladora* c,int number, int** mat,int *PX,int *PY)
	{
		C = c;
		this->matriz = mat;
		this->N = number;
		Posx = new int[N];
		Posy = new int[N];
		for (int i=0;i<N;i++)
		{
			Posx[i] =PX[i];
			Posy[i] = PY[i];
		}
		ga = C->getgrafo();

	}
	void calcu(int i, int x, int y)
	{

		Posx[i] = x;
		Posy[i] = y;

	}
	void Graficar(Graphics^ g)
	{
		Random dado;
		int sepx = 150;
		int sepy = 300;

		int xx = Posx[0];
		int y = Posy[0];
		int yy = 600;
		/*int xx = 20;
		int y = 600;
		*/


		Font^ mifuente = gcnew Font("Arial Black", 10);
		//int x = g->VisibleClipBounds.Width;
		g->DrawString("" + 1, mifuente, Brushes::Black, xx - 2, y - 1);
		g->DrawEllipse(Pens::Black, xx - 5, y - 5, 30, 30);
		//calcu(0, xx + 10, y);


		g->DrawString("" + 2, mifuente, Brushes::Black, Posx[1] + 5, Posy[1]);
		g->DrawEllipse(Pens::Black, Posx[1], Posy[1] - 7, 30, 30);


		for (int i = 2; i <= N; i++)
		{
			//xx = xx + dado.Next(70, 150);
			if (i % 2 == 0)
			{
				//y = yy;
				//y = y - dado.Next(150,300);
				g->DrawString("" + i, mifuente, Brushes::Black, Posx[i - 1] + 5, Posy[i - 1]);
				g->DrawEllipse(Pens::Black, Posx[i], Posy[i] - 7, 30, 30);
				//calcu(i - 1, xx - 5, y);
			}
			else
			{
				//y = yy;
				//y = y + dado.Next(150, 300);
				g->DrawString("" + i, mifuente, Brushes::Black, Posx[i - 1] + 5, Posy[i - 1]);
				g->DrawEllipse(Pens::Black, Posx[i], Posy[i] - 7, 30, 30);
				//calcu(i - 1, xx - 5, y);



			}

		}

	}
	void Line(Graphics^ g)
	{

		//int x = 20;
		//int xx = x+sepx;
		//int y = 150;
		//int yy ;

		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 1; j < N; j++)
			{

				g->DrawLine(Pens::Black, Posx[i], Posy[i], Posx[j], Posy[j]);
			}
		}


	}
	void tamaño(Graphics^ g)
	{
		int mediox;
		int medioy;
		vector<Arista> ListaArista;
		Font^ mifuente = gcnew Font("Arial Black", 10);

		vector<Nodo> Nodos = ga.getNodos();
		int x, y;
		x = y = 10;
		int ji;
		for (int i = 0; i < Nodos.size(); i++)
		{
			Nodo temp;
			temp = Nodos.at(i);
			ListaArista = temp.getListaArista();
			ji = i + 1;
			for (int j = 0; j < ListaArista.size(); j++)
			{
				mediox = Posx[i] + ((Posx[ji] - Posx[i]) / 2);
				medioy = Posy[i] + ((Posy[ji] - Posy[i]) / 2);
				g->DrawString("" + ListaArista[j].getcapacidad() + "/" + ListaArista[j].getflujo(), mifuente, Brushes::Red, mediox, medioy);

				ji++;
			}

		}


	}
};

