#pragma once
#include "Controladora.h"
#include<iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
#include<conio.h>
using namespace std;
using namespace System;
using namespace System::Drawing;
 class DibujagraF
{
private:
	int **arra;
	Controladora *C;
	int N;
	int* Posx;
	int* Posy;
	Grafo ga;
	int* veri;
	int* A;
public:

	DibujagraF(Controladora* c,int*PX,int*PY, int**m) 
	{
		arra = m;
		C = c;
		N = C->getN();
		Posx = new int[N];
		Posy = new int[N];
		for (int i = 0; i < N; i++)
		{
			Posx[i] = PX[i];
			Posy[i] = PY[i];
		}

		ga = C->getgrafo();
		A = c->getA();
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

	
		

		for (int i = 0; i <= N; i++)
		{

			//xx = xx + dado.Next(70, 150);
			
				//y = yy;
				//y = y - dado.Next(150,300);
				g->DrawString("" + i, mifuente, Brushes::Black, Posx[i-1]+5,Posy[i-1]);
				g->DrawEllipse(Pens::Black, Posx[i] , Posy[i] - 7, 30, 30);
				//calcu(i - 1, xx - 5, y);
			
			

		}

	}
	void Line(Graphics^ g)
	{
		Font^ mifuente = gcnew Font("Arial Black", 10);

		if(arra[0][1] > 0)
			g->DrawLine(Pens::Black, Posx[0], Posy[0], Posx[1], Posy[1]);

			for (int i = 0; i < N ; i++)
			{
			
				for (int j = 0; j < N; j++)
				{


					if (i<j&&arra[i][j]>0&&j%2==0)
					{
						
						g->DrawLine(Pens::Black, Posx[i], Posy[i], Posx[j], Posy[j]);
					//	g->DrawLine(Pens::Blue, Posx[j]-15, Posy[j]-30, Posx[j], Posy[j]);
						//g->DrawLine(Pens::Blue, Posx[j ]-30, Posy[j]+90, Posx[j], Posy[j]);
					
					
					}
					else
					{
						if (i < j && arra[i][j]>=0)
						{
							g->DrawLine(Pens::Black, Posx[i], Posy[i], Posx[j], Posy[j]);
							//g->DrawLine(Pens::Blue, Posx[j] - 30, Posy[j] + 90, Posx[j], Posy[j]);
							//g->DrawLine(Pens::Blue, Posx[j] - 15, Posy[j] + 90, Posx[j], Posy[j]);
						}
					}
					if (i == N - 1 && j == N - 1)
					{
						g->DrawLine(Pens::Black, Posx[j], Posy[j], Posx[j] + 100, Posy[j]);
						if (C->getflujomax() != 0)
						{
							int mediox = 0;
							int medioy = 0;
							mediox = Posx[j] + ((Posx[j]+100 - Posx[j]) / 2);
					
							g->DrawString("" + C->getflujomax() , mifuente, Brushes::Red, mediox,Posy[j]);

						}
						g->DrawLine(Pens::Blue, Posx[j] + 100 - 30, Posy[j] - 30, Posx[j] + 100, Posy[j]);

						g->DrawLine(Pens::Blue, Posx[j] + 100 - 30, Posy[j] + 30, Posx[j] + 100, Posy[j]);
					}
					
				}
				
			}


			g->DrawString("" + C->getflujomax(), mifuente, Brushes::Red, 0, 0);






			
	}
	
	void tamaño(Graphics^ g)
	{
		int mediox;
		int medioy;

		vector<Arista> ListaArista;
		Font^ mifuente = gcnew Font("Arial Black", 10);
		int La = 0;
		vector<Nodo> Nodos = ga.getNodos();
		int x, y;
		x = y = 10;
		int ji, Lj;
		for (int i = 0; i < Nodos.size(); i++)
		{
			Nodo temp;
			temp = Nodos.at(i);
			ListaArista = temp.getListaArista();

			Lj = 0;
			for (int j = 0; j < ListaArista.size(); j++)
			{


				ji = ListaArista[La].getnodoFinalID();
				mediox = Posx[Nodos[i].getID()] + ((Posx[ji] - Posx[Nodos[i].getID()]) / 2);
				medioy = Posy[Nodos[i].getID()] + ((Posy[ji] - Posy[Nodos[i].getID()]) / 2);
				g->DrawString("" + ListaArista[j].getcapacidad() + "/" + ListaArista[j].getflujo(), mifuente, Brushes::Red, mediox, medioy);
				//g->DrawLine(Pens::Blue, Posx[ji]  - 30, Posy[ji] +10, Posx[ji] , Posy[ji]);
				//g->DrawLine(Pens::Blue, Posx[ji] , Posy[ji] + 20, Posx[ji], Posy[ji]);


				La++;
			}

			La = 0;

		}



	

	}
};

