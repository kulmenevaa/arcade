#include "Oop.h"

namespace MyGame {
	public ref class Play : public System::Windows::Forms::Form
	{
	public:
		Play(void)
		{
			InitializeComponent();
		}

	protected:
		~Play()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^ line1;
	private: System::Windows::Forms::PictureBox^ line2;
	private: System::Windows::Forms::PictureBox^ line3;
	private: System::Windows::Forms::PictureBox^ line4;
	private: System::Windows::Forms::PictureBox^ line5;
	private: System::Windows::Forms::PictureBox^  let1;
	private: System::Windows::Forms::PictureBox^  let2;
	private: System::Windows::Forms::PictureBox^  let3;
	private: System::Windows::Forms::PictureBox^  let4;
	private: System::Windows::Forms::PictureBox^ right_border;
	private: System::Windows::Forms::PictureBox^ left_border;
	private: System::Windows::Forms::Label^  timer;
	private: System::Windows::Forms::PictureBox^ mycar;
	private: System::Windows::Forms::PictureBox^ top_border;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  result;
	private: System::Windows::Forms::Label^  exit;
	private: System::Windows::Forms::Panel^  over;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Button^  carte;
	private: System::Windows::Forms::Button^  restart;
	private: System::Windows::Forms::PictureBox^ bottom_border;
	private: System::Windows::Forms::Label^ mylvl;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ myspeed;
	private: System::Windows::Forms::Button^ save_result;
	private: System::Windows::Forms::TextBox^ username_field;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
	private:
		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Play::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->line1 = (gcnew System::Windows::Forms::PictureBox());
			this->line2 = (gcnew System::Windows::Forms::PictureBox());
			this->line3 = (gcnew System::Windows::Forms::PictureBox());
			this->line4 = (gcnew System::Windows::Forms::PictureBox());
			this->line5 = (gcnew System::Windows::Forms::PictureBox());
			this->let1 = (gcnew System::Windows::Forms::PictureBox());
			this->let2 = (gcnew System::Windows::Forms::PictureBox());
			this->let3 = (gcnew System::Windows::Forms::PictureBox());
			this->let4 = (gcnew System::Windows::Forms::PictureBox());
			this->right_border = (gcnew System::Windows::Forms::PictureBox());
			this->left_border = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->mycar = (gcnew System::Windows::Forms::PictureBox());
			this->top_border = (gcnew System::Windows::Forms::PictureBox());
			this->title = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Label());
			this->over = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->username_field = (gcnew System::Windows::Forms::TextBox());
			this->save_result = (gcnew System::Windows::Forms::Button());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->carte = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->bottom_border = (gcnew System::Windows::Forms::PictureBox());
			this->mylvl = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->myspeed = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right_border))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left_border))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mycar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top_border))->BeginInit();
			this->over->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bottom_border))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Play::timer1_Tick);
			// 
			// line1
			// 
			this->line1->BackColor = System::Drawing::Color::SandyBrown;
			this->line1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->line1->Location = System::Drawing::Point(236, 31);
			this->line1->Name = L"line1";
			this->line1->Size = System::Drawing::Size(8, 79);
			this->line1->TabIndex = 27;
			this->line1->TabStop = false;
			// 
			// line2
			// 
			this->line2->BackColor = System::Drawing::Color::SandyBrown;
			this->line2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->line2->Location = System::Drawing::Point(236, 151);
			this->line2->Name = L"line2";
			this->line2->Size = System::Drawing::Size(8, 79);
			this->line2->TabIndex = 52;
			this->line2->TabStop = false;
			// 
			// line3
			// 
			this->line3->BackColor = System::Drawing::Color::SandyBrown;
			this->line3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->line3->Location = System::Drawing::Point(236, 271);
			this->line3->Name = L"line3";
			this->line3->Size = System::Drawing::Size(8, 79);
			this->line3->TabIndex = 55;
			this->line3->TabStop = false;
			// 
			// line4
			// 
			this->line4->BackColor = System::Drawing::Color::SandyBrown;
			this->line4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->line4->Location = System::Drawing::Point(236, 391);
			this->line4->Name = L"line4";
			this->line4->Size = System::Drawing::Size(8, 79);
			this->line4->TabIndex = 58;
			this->line4->TabStop = false;
			// 
			// line5
			// 
			this->line5->BackColor = System::Drawing::Color::SandyBrown;
			this->line5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->line5->Location = System::Drawing::Point(236, 511);
			this->line5->Name = L"line5";
			this->line5->Size = System::Drawing::Size(8, 79);
			this->line5->TabIndex = 61;
			this->line5->TabStop = false;
			// 
			// let1
			// 
			this->let1->BackColor = System::Drawing::Color::Transparent;
			this->let1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"let1.Image")));
			this->let1->Location = System::Drawing::Point(37, 40);
			this->let1->Name = L"let1";
			this->let1->Size = System::Drawing::Size(45, 65);
			this->let1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->let1->TabIndex = 70;
			this->let1->TabStop = false;
			// 
			// let2
			// 
			this->let2->BackColor = System::Drawing::Color::Transparent;
			this->let2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"let2.Image")));
			this->let2->Location = System::Drawing::Point(154, 152);
			this->let2->Name = L"let2";
			this->let2->Size = System::Drawing::Size(45, 65);
			this->let2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->let2->TabIndex = 71;
			this->let2->TabStop = false;
			// 
			// let3
			// 
			this->let3->BackColor = System::Drawing::Color::Transparent;
			this->let3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"let3.Image")));
			this->let3->Location = System::Drawing::Point(291, 210);
			this->let3->Name = L"let3";
			this->let3->Size = System::Drawing::Size(45, 65);
			this->let3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->let3->TabIndex = 72;
			this->let3->TabStop = false;
			// 
			// let4
			// 
			this->let4->BackColor = System::Drawing::Color::Transparent;
			this->let4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"let4.Image")));
			this->let4->Location = System::Drawing::Point(386, 82);
			this->let4->Name = L"let4";
			this->let4->Size = System::Drawing::Size(45, 65);
			this->let4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->let4->TabIndex = 73;
			this->let4->TabStop = false;
			// 
			// right_border
			// 
			this->right_border->BackColor = System::Drawing::Color::SandyBrown;
			this->right_border->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->right_border->Location = System::Drawing::Point(469, 33);
			this->right_border->Name = L"right_border";
			this->right_border->Size = System::Drawing::Size(11, 534);
			this->right_border->TabIndex = 74;
			this->right_border->TabStop = false;
			// 
			// left_border
			// 
			this->left_border->BackColor = System::Drawing::Color::SandyBrown;
			this->left_border->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->left_border->Location = System::Drawing::Point(0, 33);
			this->left_border->Name = L"left_border";
			this->left_border->Size = System::Drawing::Size(11, 534);
			this->left_border->TabIndex = 75;
			this->left_border->TabStop = false;
			// 
			// timer
			// 
			this->timer->AutoSize = true;
			this->timer->BackColor = System::Drawing::Color::Transparent;
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timer->Location = System::Drawing::Point(7, 7);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(0, 20);
			this->timer->TabIndex = 77;
			// 
			// mycar
			// 
			this->mycar->BackColor = System::Drawing::Color::Transparent;
			this->mycar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mycar.Image")));
			this->mycar->Location = System::Drawing::Point(92, 487);
			this->mycar->Name = L"mycar";
			this->mycar->Size = System::Drawing::Size(45, 65);
			this->mycar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mycar->TabIndex = 78;
			this->mycar->TabStop = false;
			// 
			// top_border
			// 
			this->top_border->BackColor = System::Drawing::Color::SandyBrown;
			this->top_border->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->top_border->Location = System::Drawing::Point(0, 0);
			this->top_border->Name = L"top_border";
			this->top_border->Size = System::Drawing::Size(480, 34);
			this->top_border->TabIndex = 81;
			this->top_border->TabStop = false;
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
			this->title->Size = System::Drawing::Size(131, 25);
			this->title->TabIndex = 82;
			this->title->Text = L"Result:";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->BackColor = System::Drawing::Color::SandyBrown;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->Location = System::Drawing::Point(127, 5);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(25, 25);
			this->result->TabIndex = 83;
			this->result->Text = L"0";
			// 
			// exit
			// 
			this->exit->AutoSize = true;
			this->exit->BackColor = System::Drawing::Color::Tomato;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(449, 5);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(25, 24);
			this->exit->TabIndex = 84;
			this->exit->Text = L"X";
			this->exit->Click += gcnew System::EventHandler(this, &Play::exit_Click);
			this->exit->MouseEnter += gcnew System::EventHandler(this, &Play::exit_MouseEnter);
			this->exit->MouseLeave += gcnew System::EventHandler(this, &Play::exit_MouseLeave);
			// 
			// over
			// 
			this->over->BackColor = System::Drawing::Color::White;
			this->over->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->over->Controls->Add(this->pictureBox1);
			this->over->Controls->Add(this->username_label);
			this->over->Controls->Add(this->username_field);
			this->over->Controls->Add(this->save_result);
			this->over->Controls->Add(this->restart);
			this->over->Controls->Add(this->carte);
			this->over->Controls->Add(this->save);
			this->over->Controls->Add(this->label1);
			this->over->Controls->Add(this->pictureBox11);
			this->over->Location = System::Drawing::Point(0, 0);
			this->over->Name = L"over";
			this->over->Size = System::Drawing::Size(284, 360);
			this->over->TabIndex = 85;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 87);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 95;
			this->pictureBox1->TabStop = false;
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->username_label->ForeColor = System::Drawing::Color::Black;
			this->username_label->Location = System::Drawing::Point(33, 162);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(204, 18);
			this->username_label->TabIndex = 94;
			this->username_label->Text = L"Enter username:";
			// 
			// username_field
			// 
			this->username_field->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->username_field->Location = System::Drawing::Point(34, 183);
			this->username_field->Multiline = true;
			this->username_field->Name = L"username_field";
			this->username_field->Size = System::Drawing::Size(214, 32);
			this->username_field->TabIndex = 93;
			// 
			// save_result
			// 
			this->save_result->BackColor = System::Drawing::Color::SandyBrown;
			this->save_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_result->ForeColor = System::Drawing::Color::White;
			this->save_result->Location = System::Drawing::Point(33, 221);
			this->save_result->Name = L"save_result";
			this->save_result->Size = System::Drawing::Size(216, 53);
			this->save_result->TabIndex = 3;
			this->save_result->Text = L"Save";
			this->save_result->UseVisualStyleBackColor = false;
			this->save_result->Click += gcnew System::EventHandler(this, &Play::save_result_Click);
			// 
			// restart
			// 
			this->restart->BackColor = System::Drawing::Color::SandyBrown;
			this->restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restart->ForeColor = System::Drawing::Color::White;
			this->restart->Location = System::Drawing::Point(33, 162);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(216, 53);
			this->restart->TabIndex = 1;
			this->restart->Text = L"Restart";
			this->restart->UseVisualStyleBackColor = false;
			this->restart->Click += gcnew System::EventHandler(this, &Play::restart_Click);
			// 
			// carte
			// 
			this->carte->BackColor = System::Drawing::Color::SandyBrown;
			this->carte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->carte->ForeColor = System::Drawing::Color::White;
			this->carte->Location = System::Drawing::Point(33, 280);
			this->carte->Name = L"carte";
			this->carte->Size = System::Drawing::Size(216, 53);
			this->carte->TabIndex = 4;
			this->carte->TabStop = false;
			this->carte->Text = L"Main menu";
			this->carte->UseVisualStyleBackColor = false;
			this->carte->Click += gcnew System::EventHandler(this, &Play::carte_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::SandyBrown;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(33, 221);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(216, 53);
			this->save->TabIndex = 2;
			this->save->Text = L"Save result";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &Play::save_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 25);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Game Over";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::SandyBrown;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Location = System::Drawing::Point(-1, -1);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(284, 34);
			this->pictureBox11->TabIndex = 34;
			this->pictureBox11->TabStop = false;
			// 
			// bottom_border
			// 
			this->bottom_border->BackColor = System::Drawing::Color::SandyBrown;
			this->bottom_border->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bottom_border->Location = System::Drawing::Point(0, 566);
			this->bottom_border->Name = L"bottom_border";
			this->bottom_border->Size = System::Drawing::Size(480, 34);
			this->bottom_border->TabIndex = 88;
			this->bottom_border->TabStop = false;
			// 
			// mylvl
			// 
			this->mylvl->AutoSize = true;
			this->mylvl->BackColor = System::Drawing::Color::SandyBrown;
			this->mylvl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mylvl->ForeColor = System::Drawing::Color::White;
			this->mylvl->Location = System::Drawing::Point(98, 574);
			this->mylvl->Name = L"mylvl";
			this->mylvl->Size = System::Drawing::Size(19, 20);
			this->mylvl->TabIndex = 89;
			this->mylvl->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::SandyBrown;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(15, 573);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 20);
			this->label6->TabIndex = 90;
			this->label6->Text = L"Level:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::SandyBrown;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(310, 573);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 91;
			this->label7->Text = L"Speed:";
			// 
			// myspeed
			// 
			this->myspeed->AutoSize = true;
			this->myspeed->BackColor = System::Drawing::Color::SandyBrown;
			this->myspeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->myspeed->ForeColor = System::Drawing::Color::White;
			this->myspeed->Location = System::Drawing::Point(403, 574);
			this->myspeed->Name = L"myspeed";
			this->myspeed->Size = System::Drawing::Size(60, 20);
			this->myspeed->TabIndex = 92;
			this->myspeed->Text = L"0 km/h";
			// 
			// Play
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(480, 600);
			this->Controls->Add(this->myspeed);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->mylvl);
			this->Controls->Add(this->bottom_border);
			this->Controls->Add(this->over);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->result);
			this->Controls->Add(this->title);
			this->Controls->Add(this->top_border);
			this->Controls->Add(this->mycar);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->let3);
			this->Controls->Add(this->left_border);
			this->Controls->Add(this->right_border);
			this->Controls->Add(this->let4);
			this->Controls->Add(this->let2);
			this->Controls->Add(this->let1);
			this->Controls->Add(this->line5);
			this->Controls->Add(this->line4);
			this->Controls->Add(this->line3);
			this->Controls->Add(this->line2);
			this->Controls->Add(this->line1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"Play";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play";
			this->Load += gcnew System::EventHandler(this, &Play::Play_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Play::Play_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->line5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->let4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right_border))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left_border))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mycar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top_border))->EndInit();
			this->over->ResumeLayout(false);
			this->over->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bottom_border))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		#pragma endregion
		private :
			cli::array<PictureBox^>^ lines;
			cli::array<PictureBox^>^ obstacles; 
			int level;
			int increase_level;
			bool drive;
			int score;
			int speed;

		private: Void Play_Load(Object^  sender, EventArgs^  e) {
			lines = gcnew cli::array<PictureBox^>(5) { line1, line2, line3, line4, line5 }; // array of lines
			obstacles = gcnew cli::array<PictureBox^>(4) { let1, let2, let3, let4 }; // array of obstacles
			over->Visible = false; // hide game over form
			save_result->Visible = false; // hide save button
			username_label->Visible = false; // hide the name of the username input field
			username_field->Visible = false; // hide username input field
			timer1->Enabled = true; // start game timer

			Random rand;

			for (int i = 0; i < obstacles->Length; i++) { // placement of obstacles
				if (i < 2) {
					obstacles[i]->Location = Point(
						rand.Next(left_border->Width, this->Width / 2 - obstacles[i]->Width - line1->Width),
						rand.Next(0, this->Height / 2)
					);
				}
				else {
					obstacles[i]->Location = Point(
						rand.Next(this->Width / 2 + line1->Width, this->Width - obstacles[i]->Width - right_border->Width),
						rand.Next(0, this->Height / 2)
					);
				}
			}

			Gamer gamer(true, 2, 1, 0, 0, "default");
			gamer.SetDrive(true);
			gamer.SetSpeed(2);
			gamer.SetLevel(1);
			gamer.SetIncreaseLevel(0);
			gamer.SetScore(0);

			drive = gamer.GetDrive();
			speed = gamer.GetSpeed();
			level = gamer.GetLevel();
			increase_level = gamer.GetIncreaseLevel();
			score = gamer.GetScore();

			mycar->Location = Point(
				this->Width / 2 - mycar->Width / 2,
				this->Height - mycar->Height - bottom_border->Height
			); // user car location
		}

		private: Void Play_KeyDown(Object^  sender, KeyEventArgs^  e) {
			if (e->KeyCode == Keys::Left) {
				if (mycar->Left > left_border->Width + mycar->Width/2)
					mycar->Left += -25;
			}

			if (e->KeyCode == Keys::Right) {
				if (mycar->Right < this->Width - right_border->Width - mycar->Width/2)
					mycar->Left += 25;
			}
		}

		private: Void moveline(int speed) {
			for (int i; i < lines->Length; i++) {
				if (lines[i]->Top >= this->Height) {
					lines[i]->Top = 0;
				}
				else {
					lines[i]->Top += speed;
				}
			}
		}

		private: Void moveobstacle(int speed) {
			Random rand;
			int num = rand.Next(1, 9);
			for (int i = 0; i < obstacles->Length; i++) { // placement of obstacles
				if (obstacles[i]->Top >= this->Height) {
					switch (num) {
						case 1:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\ambulance.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\ambulance.png");
							break;
						case 2:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\carGreen.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\carGreen.png");
							break;
						case 3:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\carGrey.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\carGrey.png");
							break;
						case 4:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\carOrange.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\carOrange.png");
							break;
						case 5:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\carPink.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\carPink.png");
							break;
						case 6:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\CarRed.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\CarRed.png");
							break;
						case 7:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\carYellow.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\carYellow.png");
							break;
						case 8:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\TruckBlue.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\TruckBlue.png");
							break;
						case 9:
							obstacles[i]->Image = gcnew Bitmap("C:\\Users\\aak\\Desktop\\123\\Assets\\cars\\TruckWhite.png");
							//obstacles[i]->Image = gcnew Bitmap("C:\\Users\\KulmenevAA\\Desktop\\123\\Assets\\cars\\TruckWhite.png");
							break;
					}
					if (i < 2) {
						obstacles[i]->Location = Point(
							rand.Next(left_border->Width, this->Width / 2 - obstacles[i]->Width - line1->Width),
							rand.Next(- this->Height / 2, top_border->Height)
						);
					}
					else {
						obstacles[i]->Location = Point(
							rand.Next(this->Width / 2 + line1->Width, this->Width - obstacles[i]->Width - right_border->Width), 
							rand.Next(-this->Height / 2, top_border->Height)
						);
					}
				}
				else {
					obstacles[i]->Top += speed;
				}

				if (mycar->Bounds.IntersectsWith(obstacles[i]->Bounds))
					game_over();
			}
		}

		private: Void game_over() {
			timer1->Enabled = false;
			drive = false;
			over->Visible = true;
			over->Location = Point(
				this->Width / 2 - over->Width / 2,
				this->Height / 2 - over->Height / 2
			);
			Gamer gamer(speed, score, level, increase_level, drive, "default");
			gamer.Result(score, level, speed);
		}

		private: Void restart_game(Object^ sender, EventArgs^ e) {
			Play_Load(sender, e);
		}

		private: Void timer1_Tick(Object^  sender, EventArgs^  e) {
			moveline(speed);
			moveobstacle(speed);
			upgame();
			
			result->Text = score.ToString();
			mylvl->Text = level.ToString();
			myspeed->Text = speed.ToString() + " êì/÷";
		}

		private: Void upgame() {
			if (increase_level == 1000) {
				level++;
				increase_level = 0;
				if (speed < 20)
					speed += 2;
			}

			if (drive == true) {
				increase_level++;
				score++;
			}
		}
		private: Void restart_Click(Object^  sender, EventArgs^  e) {
			restart_game(sender, e);
		}
		private: Void save_result_Click(Object^ sender, EventArgs^ e) {
			String^ usernameField = username_field->Text;
			string username = marshal_as<std::string>(usernameField);
			Gamer gamer(drive, speed, level, increase_level, score, "default");
			gamer.SetUsername(username);
			gamer.Save(gamer.GetUsername(), score, level, speed);
			Owner->Show();
			this->Close();
		}

		private: Void save_Click(Object^ sender, EventArgs^ e) {
			restart->Visible = false;
			save->Visible = false;
			save_result->Visible = true;
			username_field->Visible = true;
			username_label->Visible = true;
		}
		private: Void carte_Click(Object^ sender, EventArgs^ e) {
			Owner->Show();
			this->Close();
		}
		private: Void exit_Click(Object^ sender, EventArgs^ e) {
			Owner->Show();
			this->Close();
		}
		private: Void exit_MouseEnter(Object^ sender, EventArgs^ e) {
			exit->ForeColor = Color::DodgerBlue;
		}
		private: Void exit_MouseLeave(Object^ sender, EventArgs^ e) {
			exit->ForeColor = Color::White;
		}
	};
}
