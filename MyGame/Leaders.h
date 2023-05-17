#include "Oop.h"

namespace MyGame {
	public ref class Leaders : public System::Windows::Forms::Form
	{
	public:
		Leaders(void)
		{
			InitializeComponent();
		}

	protected:
		~Leaders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ exit;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ score;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ level;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ speed;
	private:
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->score = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->level = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->speed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exit = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel->Controls->Add(this->dataGridView1);
			this->panel->Controls->Add(this->exit);
			this->panel->Controls->Add(this->title);
			this->panel->Controls->Add(this->pictureBox1);
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(342, 406);
			this->panel->TabIndex = 39;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->username,
					this->score, this->level, this->speed
			});
			this->dataGridView1->Location = System::Drawing::Point(-40, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(381, 371);
			this->dataGridView1->TabIndex = 41;
			// 
			// username
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->username->DefaultCellStyle = dataGridViewCellStyle1;
			this->username->HeaderText = L"User";
			this->username->Name = L"username";
			this->username->Width = 120;
			// 
			// score
			// 
			this->score->HeaderText = L"Record";
			this->score->Name = L"score";
			this->score->Width = 80;
			// 
			// level
			// 
			this->level->HeaderText = L"Level";
			this->level->Name = L"level";
			this->level->Width = 70;
			// 
			// speed
			// 
			this->speed->HeaderText = L"Speed";
			this->speed->Name = L"speed";
			this->speed->Width = 70;
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
			this->exit->TabIndex = 40;
			this->exit->Text = L"X";
			this->exit->Click += gcnew System::EventHandler(this, &Leaders::exit_Click);
			this->exit->MouseEnter += gcnew System::EventHandler(this, &Leaders::exit_MouseEnter);
			this->exit->MouseLeave += gcnew System::EventHandler(this, &Leaders::exit_MouseLeave);
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
			this->title->Size = System::Drawing::Size(154, 25);
			this->title->TabIndex = 39;
			this->title->Text = L"Game Leaders";
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
			// Leaders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(342, 406);
			this->Controls->Add(this->panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Leaders";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Leaders";
			this->Load += gcnew System::EventHandler(this, &Leaders::Leaders_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		#pragma endregion
		private: Void exit_Click(Object^  sender, EventArgs^  e) {
			Owner->Show();
			this->Close();
		}
		private: Void exit_MouseEnter(Object^  sender, EventArgs^  e) {
			exit->ForeColor = Color::DodgerBlue;
		}
		private: Void exit_MouseLeave(Object^  sender, EventArgs^  e) {
			exit->ForeColor = Color::White;
		}
		private: Void Leaders_Load(Object^ sender, EventArgs^ e) {
			String^ connectionString = "provider = Microsoft.Jet.OLEDB.4.0;Data source = db.mdb";
			OleDbConnection^ dbConntection = gcnew OleDbConnection(connectionString); // settings
			dbConntection->Open(); // opening a connection
			String^ query = "SELECT * FROM [leader] ORDER BY [level] DESC, [score] DESC"; // request
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConntection); // command
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); // data reading
			if (dbReader->HasRows == false) {
				MessageBox::Show("Data read error!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				while (dbReader->Read()) {
					dataGridView1->Rows->Add(dbReader["username"], dbReader["score"], dbReader["level"], dbReader["speed"]);
				}
			}
			dbReader->Close();
			dbConntection->Close(); // close the connection
		}
	};
}
