#include "Carte.h"

using namespace MyGame;

/* Точка входа приложения */
int main(cli::array<String^>^ arr) {
	Application::EnableVisualStyles(); // Подключение стилей к приложению
	Application::SetCompatibleTextRenderingDefault(false); // Установка метода отображения текста
	Carte ^ startWindow = gcnew Carte;
	startWindow->Show();
	Application::Run();
	return 0;
}

