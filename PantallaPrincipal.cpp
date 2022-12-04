#include "PantallaPrincipal.h"

using namespace System;
using namespace Windows::Forms;
using namespace RedDeFlujos;
void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew RedDeFlujos::PantallaPrincipal);
}