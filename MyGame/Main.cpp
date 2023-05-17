#include "Carte.h"

using namespace MyGame;

/* Application entry point */
int main(cli::array<String^>^ arr) {
	Application::EnableVisualStyles(); // Connecting styles to an application
	Application::SetCompatibleTextRenderingDefault(false); // Setting the text display method
	Carte ^ startWindow = gcnew Carte;
	startWindow->Show();
	Application::Run();
	return 0;
}

