#include "Carte.h"

using namespace MyGame;

/* ����� ����� ���������� */
int main(cli::array<String^>^ arr) {
	Application::EnableVisualStyles(); // ����������� ������ � ����������
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ������ ����������� ������
	Carte ^ startWindow = gcnew Carte;
	startWindow->Show();
	Application::Run();
	return 0;
}

