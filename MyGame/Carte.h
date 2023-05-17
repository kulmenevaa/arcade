#include "Oop.h"
#include "Play.h"
#include "Leaders.h"

namespace MyGame {
	public ref class Carte : public System::Windows::Forms::Form
	{
	public:
		Carte(void)
		{
			InitializeComponent();
		}

	protected:
		~Carte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  exit;
	private: System::Windows::Forms::Button^  game;
	private: System::Windows::Forms::Button^  settings;
	private: System::Windows::Forms::Button^  output;
	private: System::Windows::Forms::PictureBox^ logo;

	private: System::Windows::Forms::Panel^ panel;

	private:
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Carte::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->title = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Label());
			this->game = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::Button());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(342, 34);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::SandyBrown;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->ForeColor = System::Drawing::Color::White;
			this->title->Location = System::Drawing::Point(4, 4);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(168, 25);
			this->title->TabIndex = 35;
			this->title->Text = L"Главное меню";
			// 
			// exit
			// 
			this->exit->AutoSize = true;
			this->exit->BackColor = System::Drawing::Color::Tomato;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(311, 5);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(25, 24);
			this->exit->TabIndex = 37;
			this->exit->Text = L"X";
			this->exit->Click += gcnew System::EventHandler(this, &Carte::exit_Click);
			this->exit->MouseEnter += gcnew System::EventHandler(this, &Carte::exit_MouseEnter);
			this->exit->MouseLeave += gcnew System::EventHandler(this, &Carte::exit_MouseLeave);
			// 
			// game
			// 
			this->game->BackColor = System::Drawing::Color::SandyBrown;
			this->game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->game->ForeColor = System::Drawing::Color::White;
			this->game->Location = System::Drawing::Point(63, 205);
			this->game->Name = L"game";
			this->game->Size = System::Drawing::Size(216, 53);
			this->game->TabIndex = 40;
			this->game->Text = L"Играть";
			this->game->UseVisualStyleBackColor = false;
			this->game->Click += gcnew System::EventHandler(this, &Carte::game_Click);
			// 
			// settings
			// 
			this->settings->BackColor = System::Drawing::Color::SandyBrown;
			this->settings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->settings->ForeColor = System::Drawing::Color::White;
			this->settings->Location = System::Drawing::Point(63, 264);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(216, 53);
			this->settings->TabIndex = 41;
			this->settings->Text = L"Лидеры";
			this->settings->UseVisualStyleBackColor = false;
			this->settings->Click += gcnew System::EventHandler(this, &Carte::settings_Click);
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::Color::SandyBrown;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->output->ForeColor = System::Drawing::Color::White;
			this->output->Location = System::Drawing::Point(63, 323);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(216, 53);
			this->output->TabIndex = 42;
			this->output->Text = L"Выйти";
			this->output->UseVisualStyleBackColor = false;
			this->output->Click += gcnew System::EventHandler(this, &Carte::output_Click);
			// 
			// logo
			// 
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(63, 74);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(216, 107);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo->TabIndex = 43;
			this->logo->TabStop = false;
			// 
			// panel
			// 
			this->panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel->Controls->Add(this->output);
			this->panel->Controls->Add(this->exit);
			this->panel->Controls->Add(this->logo);
			this->panel->Controls->Add(this->title);
			this->panel->Controls->Add(this->settings);
			this->panel->Controls->Add(this->pictureBox1);
			this->panel->Controls->Add(this->game);
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(342, 406);
			this->panel->TabIndex = 1;
			// 
			// Carte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(342, 406);
			this->Controls->Add(this->panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Carte";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Carte";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: Void exit_Click(Object^  sender, EventArgs^  e) {
			Application::Exit();
		}
		private: Void exit_MouseEnter(Object^  sender, EventArgs^  e) {
			exit->ForeColor = Color::DodgerBlue;
		}
		private: Void exit_MouseLeave(Object^  sender, EventArgs^  e) {
			exit->ForeColor = Color::White;
		}
		private: Void output_Click(Object^  sender, EventArgs^  e) {
			Application::Exit();
		}
		private: Void game_Click(Object^  sender, EventArgs^  e) {
			this->Hide();
			Play ^ play = gcnew Play();
			play->Owner = this;
			play->Show();
		}
		private: Void settings_Click(Object^  sender, EventArgs^  e) {
			this->Hide();
			Leaders ^ leaders = gcnew Leaders;
			leaders->Owner = this;
			leaders->Show();
		}
	};
}
