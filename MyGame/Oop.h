#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace std;
using namespace msclr::interop;

class Track {
	protected:
		int score;
	public:
		Track(int score);
		int GetScore() { return score; };
		void SetScore(int score);
		~Track();
};

Track::Track(int score) {
	this->score = score;
}

void Track::SetScore(int score) {
	if (score != 0) {
		MessageBox::Show(
			"Старт подсчета результата игры был скорректирован!\nУказанные данные не соответствуют специфики игры!",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->score = score;
}

Track::~Track() {

}

/////////////////////////////////////////////////////////////////////////////////////////////////

class Gamer : public Track {
	private:
		bool drive;
		int speed;
		int level;
		int increase_level;
		string username;
	public:
		Gamer(bool drive, int speed, int score, int level, int increase_level, string username);
		bool GetDrive() { return drive; };
		int GetSpeed() { return speed; };
		int GetLevel() { return level; };
		int GetIncreaseLevel() { return increase_level; };
		string GetUsername() { return username; };
		void SetDrive(bool drive);
		void SetSpeed(int speed);
		void SetLevel(int level);
		void SetIncreaseLevel(int increase_level);
		void SetUsername(string username);
		void Save(string username, int score, int level, int speed);
		virtual void Result(int score, int level, int speed);
		~Gamer();
};

Gamer::Gamer(bool drive, int speed, int level, int increase_level, int score, string username) : Track(score) {
	this->drive = drive;
	this->speed = speed;
	this->level = level;
	this->increase_level = increase_level;
	this->username = username;
}

void Gamer::SetSpeed(int speed) {
	if (speed <= 0) {
		MessageBox::Show(
			"Скорость автомобиля была изменана!\nУказанные данные не соответствуют специфики игры!", 
			"Оповещение!", 
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->speed = speed;
}

void Gamer::SetDrive(bool drive) {
	if (drive == false) {
		MessageBox::Show(
			"Движение автомобиля скорректировано!\nУказанные данные не соответствуют специфики игры!",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->drive = drive;
}

void Gamer::SetLevel(int level) {
	if (level < 0) {
		MessageBox::Show(
			"Уровень пользователя был скорректирован!\nУказанные данные не соответствуют специфики игры!",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->level = level;
}

void Gamer::SetIncreaseLevel(int increase_level) {
	if (increase_level != 0) {
		MessageBox::Show(
			"Начало подсчета перехода на другой уровень был скорректирован!\nУказанные данные не соответствуют специфики игры!",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->increase_level = increase_level;
}

void Gamer::SetUsername(string username) {
	if (username == "") {
		MessageBox::Show(
			"Наименование пользователя было скорректировано!\nУказанные данные не соответствуют спецификации игры!",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
		return;
	}
	this->username = username;
}

void Gamer::Save(string username, int score, int level, int speed) {
	String^ username_str = gcnew System::String(username.c_str()); // конвертация из string в System::String
	String^ connectionString = "provider = Microsoft.Jet.OLEDB.4.0;Data source = db.mdb"; // настройки
	OleDbConnection^ dbConntection = gcnew OleDbConnection(connectionString); // подключение настроек
	dbConntection->Open(); // открытия соединения
	String^ query = "INSERT INTO [leader] ([username], [score], [level], [speed]) VALUES ('" + username_str + "', " + score + ", " + level + ", " + speed + ")"; // запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConntection); // команда выполнения запроса
	if (dbCommand->ExecuteNonQuery() == 1) { // проверка добавления записи в БД
		MessageBox::Show(
			"Результаты успешно сохранены в БД! Вы можете посмотреть все результате в разделе ЛИДЕРЫ",
			"Оповещение!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information
		);
	}
	else {
		MessageBox::Show(
			"Произошла ошибка при добавлении результатов в БД!",
			"Ошибка!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);
	}
	dbConntection->Close(); // закрытие соединения
}

void Gamer::Result(int score, int level, int speed) {
	MessageBox::Show(
		"Игра окончена!\n" +
		"Ваш результат : " + score + "\n" +
		"Уровень: " + level + "\n" +
		"Скорость: " + speed,
		"Оповещение!",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}

Gamer::~Gamer() {

}
