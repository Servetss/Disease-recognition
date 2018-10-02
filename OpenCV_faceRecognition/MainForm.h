#pragma once
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/ml.hpp>
#include "jackylib.h"
#include <iostream>






namespace OpenCV_faceRecognition {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;
	using namespace jacky_lib;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  ptbVideo;
	//protected:

	//protected:
	private: System::Windows::Forms::Button^  btnStart;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;




	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ptbVideo = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbVideo))->BeginInit();
			this->SuspendLayout();
			// 
			// ptbVideo
			// 
			this->ptbVideo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ptbVideo->Location = System::Drawing::Point(12, 12);
			this->ptbVideo->Name = L"ptbVideo";
			this->ptbVideo->Size = System::Drawing::Size(464, 330);
			this->ptbVideo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ptbVideo->TabIndex = 0;
			this->ptbVideo->TabStop = false;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(482, 12);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"Zrob zdjecia";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MainForm::btnStart_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(563, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Podiez dane";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(483, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(119, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(481, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(481, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(109, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(481, 271);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(481, 222);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(52, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(596, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(574, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Max";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(654, 322);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(52, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(481, 322);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(52, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(539, 322);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(51, 20);
			this->textBox8->TabIndex = 16;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(596, 322);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(52, 20);
			this->textBox9->TabIndex = 17;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(482, 67);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(120, 20);
			this->textBox10->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(613, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Ospa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(613, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Zoltaczka";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(574, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Min";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(574, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Max - 1";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(538, 271);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(52, 20);
			this->textBox11->TabIndex = 23;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(597, 270);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(48, 20);
			this->textBox12->TabIndex = 24;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(654, 270);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(52, 20);
			this->textBox13->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(596, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Max Pixels";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(539, 221);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(51, 20);
			this->textBox14->TabIndex = 27;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(597, 221);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(48, 20);
			this->textBox15->TabIndex = 28;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(654, 221);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(52, 20);
			this->textBox16->TabIndex = 29;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(483, 169);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(107, 20);
			this->textBox17->TabIndex = 30;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(596, 169);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(110, 20);
			this->textBox18->TabIndex = 31;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 354);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->ptbVideo);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptbVideo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion
	private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e)
	{
		VideoCapture videoCap;
		videoCap.open(0);
		Mat frame;
		mat2picture mat2bmp;
		/** Global variables */
		string face_cascade_name = "haarcascade_frontalface_alt.xml";
		string eyes_cascade_name = "haarcascade_eye_tree_eyeglasses.xml";
		string nose_cascade_name = "haarcascade_nosez.xml";
		string mouth_cascade_name = "haarcascade_mouth.xml";
		CascadeClassifier face_cascade;
		CascadeClassifier eyes_cascade;
		CascadeClassifier nose_cascade;
		CascadeClassifier mouth_cascade;
		// Load the cascades
		face_cascade.load(face_cascade_name);
		eyes_cascade.load(eyes_cascade_name);
		nose_cascade.load(nose_cascade_name);
		mouth_cascade.load(mouth_cascade_name);
		while (true)
		{
			Mat frame;
			videoCap.read(frame);
			//imshow("Video by OpenCV", frame);
			// Face & eye detection 

			//Image pre-processing
			resize(frame, frame, cv::Size(640, 480));
			std::vector<Rect> faces;
			Mat frame_gray;
			videoCap.read(frame_gray);
			//cvtColor(frame, frame_gray, CV_BGR2GRAY);
			//equalizeHist(frame_gray, frame_gray);

			//-- Detect faces

			face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(30, 30));

			for (size_t i = 0; i < faces.size(); i++)
			{
				cv::Point center(faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5);
				ellipse(frame, center, cv::Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(0, 255, 0), 4, 8, 0);

				Mat faceROI = frame_gray(faces[i]);
				//imshow("face", faceROI);
				std::vector<Rect> eyes;
				std::vector<Rect> nose;
				std::vector<Rect> mouth;

				int counter = 0;
				char filename[512];


				Rect  eyes1ROI((int)faces[i].width / 4, (int)(faces[i].height / 10), (int)faces[i].width / 2, (int)faces[i].height / 5);
				Rect mouthROI((int)faces[i].width / 4, (int)(faces[i].height / 4)*2.9, (int)faces[i].width / 2, (int)faces[i].height / 5);
				Rect noseROI((int)faces[i].width / 11, (int)(faces[i].height / 2), (int)faces[i].width / 4, (int)faces[i].height / 4);
				imshow("nose", faceROI(noseROI));
				imshow("mouth", faceROI(mouthROI));
				imshow("eyes", faceROI(eyes1ROI));

				//-- In each face, detect eyes,nose,mouth
				eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(50, 50));
				for (size_t j = 0; j < eyes.size(); j++)
				{
					cv::Point center(faces[i].x + eyes[j].x + eyes[j].width*0.5, faces[i].y + eyes[j].y + eyes[j].height*0.5);
					int radius = cvRound((eyes[j].width + eyes[j].height)*0.25);
					circle(frame, center, radius, Scalar(255, 0, 0), 3, 8, 0);
				}


				nose_cascade.detectMultiScale(faceROI(noseROI), nose, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(50, 50));
				for (size_t j = 0; j < nose.size(); j++)
				{
					cv::Point center(faces[i].x + nose[j].x + noseROI.x + nose[j].width*0.5, faces[i].y + nose[j].y + noseROI.y + nose[j].height*0.5);
					int radius = cvRound((nose[j].width + nose[j].height)*0.25);
					circle(frame, center, radius, Scalar(0, 255, 85), 3, 8, 0);
				}

				mouth_cascade.detectMultiScale(faceROI(mouthROI), mouth, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(50, 50));
				for (size_t j = 0; j < mouth.size(); j++)
				{
					cv::Point center(faces[i].x + mouth[j].x + mouthROI.x + mouth[j].width*0.5, faces[i].y + mouth[j].y + mouthROI.y + mouth[j].height*0.5);
					int radius = cvRound((mouth[j].width + mouth[j].height)*0.25);
					circle(frame, center, radius, Scalar(85, 100, 255), 2, 8, 0);
				}

				//char c = cvWaitKey(33);
				//if (c == 27) { // нажата ESC
				//	break;
				//}
				//else if (c == 13) { // Enter
				//					// сохраняем кадр в файл
				sprintf(filename, "Сheek.jpg", counter);
				printf("[i] capture... %s\n", filename);
				imwrite(filename, faceROI(noseROI));

				sprintf(filename, "mouth.jpg", counter);
				printf("[i] capture... %s\n", filename);
				imwrite(filename, faceROI(mouthROI));


				sprintf(filename, "forehead.jpg", counter);
				printf("[i] capture... %s\n", filename);
				imwrite(filename, faceROI(eyes1ROI));
				counter++;

				//}
			}

			//show on picture box
			ptbVideo->Image = mat2bmp.Mat2Bimap(frame);
			ptbVideo->Refresh();
			if (waitKey(10) == 27)
			{
				break;
			}

		}

	}
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//---------------dane wyciągane z bazy---------------
		int NWD_R[2] = {243, 241};
		int NWD_G[2] = {63, 217};// kolor śriedni z bazy
		int NWD_B[2] = {48, 86};

		bool BolieznBoolCzolo[2] = { false,true};
		bool BolieznBoolPoliczek[2] = { false,true};

		//----------------Ospa-------------------------
		int CzoloOspa[4][2] = {
			{ 4,1 },
			{ 3,9 },                  //Procent zapełniena obrazku i ille raz on występiał
			{ 2,5 },
			{1,1}
		};

		int PoliczekOspa[4][2] = {
			{4,4},
			{3,10},                   //Procent zapełniena obrazku i ille raz on występiał
			{2,7},
			{1,1}
		};
		//-------------------Zeltucha-----------------
		int CzoloZelt[4][2] = {
			{ 70,2 },
			{ 65,3 },                  //Procent zapełniena obrazku i ille raz on występiał
			{ 58,6 },
			{ 50,5 }
		};

		int PoliczekZelt[4][2] = {
			{ 70, 3 },
			{ 65, 3 },                   //Procent zapełniena obrazku i ille raz on występiał
			{ 58, 7 },
			{ 50, 5}
		};
		//
		//
		//----------- deklaracja niezbednnych pol --------
		//
		//------------------- czolo ----------------------
		//
		bool gustotaForehead[3] = { false, false, false };
		float procentForehead[6][37];

		//
		// ------------------ policzek --------------------
		//
		bool gustotaCheek[3] = { false, false, false };
		float procentCheek[6][37];
		//
		//------------------ usta ---------------------
		//
		bool gustotaMouth[3] = { false, false, false };
		float procentMouth[6][37];
		//
		//-------- chorby ---
		/*char *zapytSqlChoroby[6][1];
		zapytSqlChoroby[0][0] = "choroba1";
		zapytSqlChoroby[1][0] = "choroba2";
		zapytSqlChoroby[2][0] = "choroba3";
		zapytSqlChoroby[3][0] = "choroba4";
		zapytSqlChoroby[4][0] = "choroba5";
		zapytSqlChoroby[5][0] = "choroba6";*/
		//
		//
		//-------- petla przebiera i obrabia kazdy sektor po kolei
		//
		for (int sektor = 1; sektor < 5; sektor++)
		{
			//--- 1 - czolo ---
			//--- 2 - policzek ---
			//--- 3 - usta ---
			//--- 4 - oko ---
			//--- 5 - nos ---
			//
			//--- deklaroowanie tablic koordynat ---
			//
			int LeftC[37];
			int TopC[37];
			int RightC[37];
			int BotC[37];
			//
			//--- tablica kolorow z bazy odnosnie chorob
			//
			char *zapytSqlChoroby[6][1];
			zapytSqlChoroby[0][0] = "choroba1";
			zapytSqlChoroby[1][0] = "choroba2";
			zapytSqlChoroby[2][0] = "choroba3";
			zapytSqlChoroby[3][0] = "choroba4";
			zapytSqlChoroby[4][0] = "choroba5";
			zapytSqlChoroby[5][0] = "choroba6";
			//
			//--- wiersz jest jednym kolorem sektoru czyli kolorem srednim jednej choroby trzymanym z bazy
			//
			int zapytSql[3][3];
			zapytSql[0][0] = NWD_B[0];//1-b z Bazy
			zapytSql[0][1] = NWD_G[0];//1-g z Bazy
			zapytSql[0][2] = NWD_R[0];//1-r z Bazy

			zapytSql[1][0] = NWD_B[1];//2-b
			zapytSql[1][1] = NWD_G[1];//2-g
			zapytSql[1][2] = NWD_R[1];//2-r

			zapytSql[2][0] = 56;//3-b
			zapytSql[2][1] = 56;//3-g
			zapytSql[2][2] = 61;//3-r
			//
			//
			//
			int pozycjaIteratrKoordynat = 0;
			//--- deklaracja macierz dla obrabiania obrazkow
			Mat imageSektor;
			Mat imageSektor01;
			Mat imageSektor02;
			Mat search;
			switch (sektor)
			{
			case 1:
				imageSektor = imread("forehead.jpg");
				imageSektor01 = imread("forehead01.jpg");
				search = imread("forehead02.jpg");
				break;
			case 2:
				imageSektor = imread("Сheek.jpg");
				imageSektor01 = imread("cheek01.jpg");
				search = imread("cheek02.jpg");
				break;
			case 3:
				imageSektor = imread("forehead.jpg");
				imageSektor01 = imread("forehead01.jpg");
				search = imread("forehead02.jpg");
				break;
			case 4:
				imageSektor = imread("Сheek.jpg");
				imageSektor01 = imread("cheek01.jpg");
				search = imread("cheek02.jpg");
				break;
			case 5:
				break;
			default:
				break;
			}
			//
			//--- wyznaczenie ilosci pikseli na podsektry ---
			//
			int Rpixels = imageSektor.rows / 6;
			int Cpixels = imageSektor.cols / 6;
			//
			//--- ilsc pixeli sprawdzajacych warunek ---
			//
			float countPixelsIn = 0;
			float maxPixel = search.rows * search.cols;
			//
			//--- zapelnienie tablic koordynatowych ---
			//
			for (int count = 0; count < 36; count++)
			{
				LeftC[count] = 0;
				TopC[count] = 0;
				RightC[count] = Cpixels;
				BotC[count] = Rpixels;
			}
			//--- druga czesc ----
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if (i != 0)
					{
						TopC[j + 6 * i] += Rpixels * i;
					}
					LeftC[j + 6 * i] += Cpixels * j;
				}
			}


			switch (sektor)
			{
			case 1:
				imwrite("forehead01.jpg", imageSektor);
				break;
			case 2:
				imwrite("cheek01.jpg", imageSektor);
				break;
			case 3:
				imwrite("forehead01.jpg", imageSektor);
				break;
			case 4:
				imwrite("cheek01.jpg", imageSektor);
				break;
			case 5:
				break;
			default:
				break;
			}
			//
			//-------- prces obrabiania brazu
			//
			for (int wiersz = 0; wiersz < 2; wiersz++)//przechodzenie po kolorach w tablicy
			{
					for (int c = 0; c < 36; c++) //perebor kazdego podsektoru i szuka poodany kolor
					{
						//Wybranie obrazow po koordynatom JPG dane brane z tablicy koordynat
						Rect rect(LeftC[c], TopC[c], RightC[c], BotC[c]);//koordynaty lewo i werh zmienne, praw niz nie i sa dlugscia w pikselah
						imageSektor01(rect).copyTo(imageSektor02);
						switch (sektor)
						{
						case 1:
							imwrite("forehead02.jpg", imageSektor02);
							break;
						case 2:
							imwrite("cheek02.jpg", imageSektor02);
							break;
						case 3:
							imwrite("forehead02.jpg", imageSektor02);
							break;
						case 4:
							imwrite("cheek02.jpg", imageSektor02);
							break;
						case 5:
							break;
						default:
							break;
						}
						// Koniec
						for (int i = 0; i < search.rows; i++)
							for (int j = 0; j < search.cols; j++)//sprawdzenie koloru z zasiegiem
								if (search.at<Vec3b>(i, j)[0] >= zapytSql[wiersz][0] - 20 && search.at<Vec3b>(i, j)[0] <= zapytSql[wiersz][0] + 20 &&
									search.at<Vec3b>(i, j)[1] >= zapytSql[wiersz][1] - 20 && search.at<Vec3b>(i, j)[1] <= zapytSql[wiersz][1] + 20 &&
									search.at<Vec3b>(i, j)[2] >= zapytSql[wiersz][2] - 20 && search.at<Vec3b>(i, j)[2] <= zapytSql[wiersz][2] + 20)
									countPixelsIn++;
						//Znalezienie kolorowych zon 
						float maxPixel = search.rows * search.cols;
						if (sektor == 0)
						{
							if (wiersz == 0)
							{
								procentForehead[wiersz][c] = countPixelsIn * 100 / maxPixel;
							}
							else
							{
								procentCheek[wiersz][c] = countPixelsIn * 100 / maxPixel;
							}
						}
						else
						{
							if (wiersz == 0)
							{
								procentForehead[wiersz][c] = countPixelsIn * 100 / maxPixel;
							}
							else
							{
								procentCheek[wiersz][c] = countPixelsIn * 100 / maxPixel;
							}
						}
						countPixelsIn = 0;
						//Koniec
					}
			}
			for (int wier = 0; wier < 2; wier++)
			{
				//wypelnia tablice prcentow dla kloru z tablicy
				int Ha4[6][6];
				int PozycjaKolumna = 0;
				for (int i = 0; i < 6; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						switch (sektor)
						{
						case 1:
							if (wier == 0)
							{
								Ha4[i][j] = procentForehead[wier][PozycjaKolumna];
							}
							else
							{
								Ha4[i][j] = procentCheek[wier][PozycjaKolumna];
							}
							break;
						case 2:
							if (wier == 0)
							{
								Ha4[i][j] = procentForehead[wier][PozycjaKolumna];
							}
							else
							{
								Ha4[i][j] = procentCheek[wier][PozycjaKolumna];
							}
							break;
						default:
							break; 
						}
						PozycjaKolumna++;
					}
				}
				int GustotaOn = 0;
				//szuka sosiedne zageszczne kmorki
				for (int Szuk1 = 0; Szuk1 < 5; Szuk1++)
				{
					for (int Szuk2 = 0; Szuk2 < 5; Szuk2++)
					{
						if (Ha4[Szuk1][Szuk2] >= 60)
						{
							
							if (Szuk2 != 5 && Ha4[Szuk1][Szuk2 + 1] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk2 != 0 && Ha4[Szuk1][Szuk2 - 1] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 5 && Ha4[Szuk1 + 1][Szuk2] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 0 && Ha4[Szuk1 - 1][Szuk2] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 0 && Szuk2 != 5 && Ha4[Szuk1 - 1][Szuk2 + 1] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 0 && Szuk2 != 5 && Ha4[Szuk1 + 1][Szuk2 - 1] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 5 && Szuk2 != 0 && Ha4[Szuk1 + 1][Szuk2 - 1] >= 60)
							{
								GustotaOn++;
							}
							if (Szuk1 != 5 && Szuk2 != 0 && Ha4[Szuk1 - 1][Szuk2 + 1] >= 60)
							{
								GustotaOn++;
							}
						}
					}
					//Koniec
				}
				if (GustotaOn >= 3)
				{
					switch (sektor)
					{
					case 1:
						gustotaForehead[wier] = true;
						this->textBox17->Text += " 1";
						break;
					case 2:
						gustotaCheek[wier] = true;
						this->textBox17->Text += " 2";
						break;
					case 3:
						gustotaForehead[wier] = true;
						this->textBox18->Text += " 3";
						break;
					case 4:
						gustotaCheek[wier] = true;
						this->textBox18->Text += " 4";
						break;
					case 5:
						break;
					default:
						break;
					}
				}
				else
				{
					switch (sektor)
					{
					case 1:
						this->textBox17->Text += " 0";
						break;
					case 2:
						this->textBox17->Text += " 0";
						break;
					case 3:
						this->textBox18->Text += " 0";
						break;
					case 4:
						this->textBox18->Text += " 0";
						break;
					case 5:
						break;
					default:
						break;
					}
				}
			}


	//		//zwidsy
	////===================================================================================

	//		//-------------Dane dla policzek------------------
	//		Mat imgСheek = imread("Cheek.jpg"); // Открытие файла 
	//		Mat imgСheek02;
	//		Mat imgСheek01 = imread("Cheek01.jpg");
	//		Mat searchСheek = imread("Cheek02.jpg"); // Открытие файла 
	//		int LewoСheek[40];
	//		int VerchСheek[40];
	//		int PrawoСheek[40];
	//		int NizСheek[40];
	//		int PozycjaСheek = 0;

	//		bool GustotaСheek = false;

	//		//wyznacza ilsc pikseli w jednym z 36 pol sekotru
	//		int RСheek = imgСheek.rows / 6;
	//		int CСheek = imgСheek.cols / 6;

	//		float PixBolСheek = 0; //
	//		float ProcСheek[40]; //procent zapelnienia wybranym klorem
	//		float MaxСheek = searchСheek.rows * searchСheek.cols;

	//		//=============================================================================================

	//		//----------------Данные для Рта-----------------------------
	//		int LewoMouth[40];
	//		int VerchMouth[40];
	//		int PrawoMouth[40];
	//		int NizMouth[40];

	//		bool GustotaMouth = false;
	//		float PixBolMouth = 0;
	//		float ProcMouth[3][40];

	//		Mat imgMouth = imread("mouth.jpg");
	//		Mat imgMouth01 = imread("mouth01.jpg");
	//		Mat imgMouth02;
	//		Mat searchMouth = imread("mouth02.jpg");

	//		int RMouth = imgMouth.rows / 6;
	//		int CMouth = imgMouth.cols / 6;


	//		int PozycjaMouth = 0;
	//		//==================================================================Koniec


	//		//------------------------------Dane dla Lob-------------------
	//		Mat imgForehead = imread("forehead.jpg"); // Otwieranie pliku jpg
	//		Mat imgForehead01 = imread("forehead01.jpg");
	//		Mat imgForehead02;
	//		Mat search = imread("forehead02.jpg"); // Открытие файла 

	//		//
	//		int LewoForehead[40];
	//		int VerchForehead[40];
	//		int PrawoForehead[40];
	//		int NizForehead[40];

	//		bool GustotaForehead = false;

	//		int RForehead = imgForehead.rows / 6;
	//		int CForehead = imgForehead.cols / 6;

	//		float PixBolForehead = 0;
	//		float ProcForehead[3][36];
	//		//=====================================================Koniec

	//		//Zapelnienie koordynat w tablicu po 0
	//		for (int count = 0; count < 40; count++)
	//		{
	//			LewoForehead[count] = 0;
	//			VerchForehead[count] = 0;
	//			PrawoForehead[count] = CForehead;
	//			NizForehead[count] = RForehead;
	//		}
	//		//Koniec

	//		// Koordynaty 
	//		for (int i = 0; i <= 5; i++)
	//		{
	//			for (int j = 0; j <= 5; j++)
	//			{
	//				if (i != 0)
	//				{
	//					VerchForehead[j + 6 * i] += RForehead * i;
	//				}
	//				LewoForehead[j + 6 * i] += CForehead * j;
	//			}
	//		}

	//		imwrite("forehead01.jpg", imgForehead);
	//		//Koniec Koordynat

	//		//tablica kolorow
	//		int zapytSql[3][3];
	//		zapytSql[0][0] = 77;//1-b
	//		zapytSql[0][1] = 100;//1-g
	//		zapytSql[0][2] = 210;//1-r

	//		zapytSql[1][0] = 99;//2-b
	//		zapytSql[1][1] = 123;//2-g
	//		zapytSql[1][2] = 188;//2-r

	//		zapytSql[2][0] = 56;//3-b
	//		zapytSql[2][1] = 56;//3-g
	//		zapytSql[2][2] = 61;//3-r

	//		for (int wiersz = 0; wiersz < 3; wiersz++)//przechodzenie po kolorach w tablicy
	//		{
	//			for (int c = 0; c < 36; c++) //perebor kazdego podsektoru i szuka poodany kolor
	//			{
	//				//Wybranie obrazow po koordynatom JPG dane brane z tablicy koordynat
	//				Rect rect(LewoForehead[c], VerchForehead[c], PrawoForehead[c], NizForehead[c]);//koordynaty lewo i werh zmienne, praw niz nie i sa dlugscia w pikselah
	//				imgForehead01(rect).copyTo(imgForehead02);
	//				imwrite("forehead02.jpg", imgForehead02);
	//				// Koniec
	//				for (int i = 0; i < search.rows; i++)
	//					for (int j = 0; j < search.cols; j++)//sprawdzenie koloru z zasiegiem
	//						if (search.at<Vec3b>(i, j)[0] >= zapytSql[wiersz][0] - 20 && search.at<Vec3b>(i, j)[0] <= zapytSql[wiersz][0] + 20 &&
	//							search.at<Vec3b>(i, j)[1] >= zapytSql[wiersz][1] - 20 && search.at<Vec3b>(i, j)[1] <= zapytSql[wiersz][1] + 20 &&
	//							search.at<Vec3b>(i, j)[2] >= zapytSql[wiersz][2] - 20 && search.at<Vec3b>(i, j)[2] <= zapytSql[wiersz][2] + 20)
	//							PixBolForehead++;


	//				//Znalezienie kolorowych zon 
	//				float maxForehead = search.rows * search.cols;
	//				/*for (int i = 0; i < search.rows; i++)
	//					for (int j = 0; j < search.cols; j++)
	//						if (search.at<Vec3b>(i, j)[0] < search.at<Vec3b>(i, j)[2] - 90 &&
	//							search.at<Vec3b>(i, j)[1] < search.at<Vec3b>(i, j)[2] - 90 &&
	//							search.at<Vec3b>(i, j)[2] > 150)
	//						{
	//							search.at<Vec3b>(i, j)[0] = 255;
	//							search.at<Vec3b>(i, j)[1] = 0;
	//							search.at<Vec3b>(i, j)[2] = 0;

	//							PixBolForehead++;
	//						}*/
	//				ProcForehead[wiersz][c] = PixBolForehead * 100 / maxForehead;
	//				PixBolForehead = 0;
	//				imwrite("forehead03.jpg", search);
	//				//Koniec
	//			}
	//		}



	//		//for (int c = 0; c < 36; c++) //perebor kazdego podsektoru i szuka poodany kolor
	//		//{
	//		//	//Wybranie obrazow po koordynatom JPG dane brane z tablicy koordynat
	//		//	Rect rect(LewoForehead[c], VerchForehead[c], PrawoForehead[c], NizForehead[c]);//koordynaty lewo i werh zmienne, praw niz nie i sa dlugscia w pikselah
	//		//	imgForehead01(rect).copyTo(imgForehead02);
	//		//	imwrite("forehead02.jpg", imgForehead02);
	//		//	// Koniec

	//		//	//Znalezienie kolorowych zon 
	//		//	float maxForehead = search.rows * search.cols;
	//		//	for (int i = 0; i < search.rows; i++)
	//		//		for (int j = 0; j < search.cols; j++)
	//		//			if (search.at<Vec3b>(i, j)[0] < search.at<Vec3b>(i, j)[2] - 90 &&
	//		//				search.at<Vec3b>(i, j)[1] < search.at<Vec3b>(i, j)[2] - 90 &&
	//		//				search.at<Vec3b>(i, j)[2] > 150)
	//		//			{
	//		//				search.at<Vec3b>(i, j)[0] = 255;		
	//		//				search.at<Vec3b>(i, j)[1] = 0;
	//		//				search.at<Vec3b>(i, j)[2] = 0;

	//		//				PixBolForehead++;
	//		//			}
	//		//	ProcForehead[c] = PixBolForehead * 100 / maxForehead;
	//		//	PixBolForehead = 0;
	//		//	imwrite("forehead03.jpg", search);
	//		//	//Koniec
	//		//}
	//		bool gust[3] = { false,false,false };//tablica gustoty kolrw
	//		for (int wier = 0; wier < 3; wier++)
	//		{
	//			//wypelnia tablice prcentow dla kloru z tablicy
	//			int Ha4Forehead[6][6];
	//			int PozycjaForeheadKolumna = 0;
	//			for (int i = 0; i <= 5; i++)
	//			{
	//				for (int j = 0; j <= 5; j++)
	//				{
	//					Ha4Forehead[i][j] = ProcForehead[wier][PozycjaForeheadKolumna];
	//					PozycjaForeheadKolumna++;
	//				}
	//			}

	//			//szuka sosiedne zageszczne kmorki
	//			for (int Szuk1 = 0; Szuk1 < 5; Szuk1++)
	//			{
	//				for (int Szuk2 = 0; Szuk2 < 5; Szuk2++)
	//				{
	//					if (Ha4Forehead[Szuk1][Szuk2] >= 70)
	//					{
	//						int GustotaOnForehead = 0;
	//						if (Szuk2 != 5 && Ha4Forehead[Szuk1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk2 != 0 && Ha4Forehead[Szuk1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 5 && Ha4Forehead[Szuk1 + 1][Szuk2] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 0 && Ha4Forehead[Szuk1 - 1][Szuk2] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 0 && Szuk2 != 5 && Ha4Forehead[Szuk1 - 1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 0 && Szuk2 != 5 && Ha4Forehead[Szuk1 + 1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 5 && Szuk2 != 0 && Ha4Forehead[Szuk1 + 1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (Szuk1 != 5 && Szuk2 != 0 && Ha4Forehead[Szuk1 - 1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaOnForehead++;
	//						}
	//						if (GustotaOnForehead >= 4)
	//						{
	//							gust[wier] = true;
	//						}
	//					}
	//				}
	//				//Koniec
	//			}

	//		}


	//		// Macierza Proc gustoty dla klrow
	//			//int Ha4Forehead1[6][6];//1-szy kolor
	//			//int PozycjaForeheadKolumna = 0;
	//			//for (int i = 0; i <= 5; i++)
	//			//{				 
	//			   // for (int j = 0; j <= 5; j++)
	//			   // {
	//			   //	 Ha4Forehead1[i][j] = ProcForehead[0][PozycjaForeheadKolumna];
	//			   //	 PozycjaForeheadKolumna++;
	//			   // }				 
	//			//}
	//			//int Ha4Forehead2[6][6];//2-gi kolor
	//			//PozycjaForeheadKolumna = 0;
	//			//for (int i = 0; i <= 5; i++)
	//			//{
	//			   // for (int j = 0; j <= 5; j++)
	//			   // {
	//			   //	 Ha4Forehead1[i][j] = ProcForehead[1][PozycjaForeheadKolumna];
	//			   //	 PozycjaForeheadKolumna++;
	//			   // }
	//			//}
	//			//int Ha4Forehead3[6][6];//3-ci kolor
	//			//int PozycjaForeheadKolumna = 0;
	//			//for (int i = 0; i <= 5; i++)
	//			//{
	//			   // for (int j = 0; j <= 5; j++)
	//			   // {
	//			   //	 Ha4Forehead1[i][j] = ProcForehead[2][PozycjaForeheadKolumna];
	//			   //	 PozycjaForeheadKolumna++;
	//			   // }
	//			//}
	//			//Koniec

	//			//Poszukiewanie zageszczanych sasiadow
	//			//for (int Szuk1 = 0; Szuk1 < 5; Szuk1++)
	//			//{
	//			   // for (int Szuk2 = 0; Szuk2<5; Szuk2++)
	//			   // {
	//			   //	 if(Ha4Forehead[Szuk1][Szuk2] >= 70)
	//			   //	 {
	//			   //		 int GustotaOnForehead = 0;
	//			   //		 if (Szuk2 != 5 && Ha4Forehead[Szuk1][Szuk2 + 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if(Szuk2 != 0 && Ha4Forehead[Szuk1][Szuk2 - 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if(Szuk1 != 5 && Ha4Forehead[Szuk1 + 1][Szuk2] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (Szuk1 != 0 && Ha4Forehead[Szuk1 - 1][Szuk2] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (Szuk1 != 0 && Szuk2 != 5 && Ha4Forehead[Szuk1 - 1][Szuk2 + 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (Szuk1 != 0 && Szuk2 != 5 && Ha4Forehead[Szuk1 + 1][Szuk2 - 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (Szuk1 != 5 && Szuk2 != 0 && Ha4Forehead[Szuk1 + 1][Szuk2 - 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (Szuk1 != 5 && Szuk2 != 0 && Ha4Forehead[Szuk1 - 1][Szuk2 + 1] >= 70)
	//			   //		 {
	//			   //			 GustotaOnForehead++;
	//			   //		 }
	//			   //		 if (GustotaOnForehead >= 4)
	//			   //		 {
	//			   //			 GustotaForehead = true;
	//			   //		 }
	//			   //	 }
	//			   // }
	//			   // //Koniec
	//			//}

	//			//¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬`


	//		for (int count = 0; count < 40; count++)
	//		{
	//			LewoMouth[count] = 0;
	//			VerchMouth[count] = 0;
	//			PrawoMouth[count] = CMouth;
	//			NizMouth[count] = RMouth;
	//		}

	//		for (int i = 0; i <= 5; i++)
	//		{
	//			for (int j = 0; j <= 5; j++)
	//			{
	//				if (i != 0)
	//				{
	//					VerchMouth[j + 6 * i] += RMouth * i;
	//				}
	//				LewoMouth[j + 6 * i] += CMouth * j;
	//			}
	//		}
	//		imwrite("mouth01.jpg", imgMouth);



	//		for (int wierszSZ = 0; wierszSZ < 3; wierszSZ++)//przechodzenie po kolorach w tablicy
	//		{
	//			for (int c = 0; c < 36; c++)
	//			{
	//				Rect rectMouth(LewoMouth[c], VerchMouth[c], PrawoMouth[c], NizMouth[c]);
	//				imgMouth01(rectMouth).copyTo(imgMouth02);
	//				imwrite("mouth02.jpg", imgMouth02);
	//				float MaxMouth = searchMouth.rows * searchMouth.cols;


	//				for (int i = 0; i < search.rows; i++)
	//					for (int j = 0; j < search.cols; j++)//sprawdzenie koloru z zasiegiem
	//						if (search.at<Vec3b>(i, j)[0] >= zapytSql[wierszSZ][0] - 20 && search.at<Vec3b>(i, j)[0] <= zapytSql[wierszSZ][0] + 20 &&
	//							search.at<Vec3b>(i, j)[1] >= zapytSql[wierszSZ][1] - 20 && search.at<Vec3b>(i, j)[1] <= zapytSql[wierszSZ][1] + 20 &&
	//							search.at<Vec3b>(i, j)[2] >= zapytSql[wierszSZ][2] - 20 && search.at<Vec3b>(i, j)[2] <= zapytSql[wierszSZ][2] + 20)
	//							PixBolMouth++;


	//				ProcMouth[wierszSZ][c] = PixBolMouth * 100 / MaxMouth;
	//				PixBolMouth = 0;
	//				imwrite("mouth03.jpg", searchMouth);
	//			}
	//		}
	//		//Пробую
	//		int Ha4eMouth[6][6];
	//		int PozycjaMouthKolumna = 0;
	//		bool gustMouth[3];
	//		for (int wier = 0; wier < 3; wier++)
	//		{
	//			for (int i = 0; i <= 5; i++)
	//			{
	//				for (int j = 0; j <= 5; j++)
	//				{
	//					Ha4eMouth[i][j] = ProcForehead[wier][PozycjaMouthKolumna];
	//					PozycjaMouthKolumna++;
	//				}
	//			}
	//			//Пробую

	//			for (int Szuk1 = 0; Szuk1 < 5; Szuk1++)
	//			{
	//				for (int Szuk2 = 0; Szuk2 < 5; Szuk2++)
	//				{
	//					if (Ha4eMouth[Szuk1][Szuk2] >= 70)
	//					{
	//						int GustotaMouth = 0;
	//						if (Szuk2 != 5 && Ha4eMouth[Szuk1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk2 != 0 && Ha4eMouth[Szuk1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 5 && Ha4eMouth[Szuk1 + 1][Szuk2] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 0 && Ha4eMouth[Szuk1 - 1][Szuk2] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 0 && Szuk2 != 5 && Ha4eMouth[Szuk1 - 1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 0 && Szuk2 != 5 && Ha4eMouth[Szuk1 + 1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 5 && Szuk2 != 0 && Ha4eMouth[Szuk1 + 1][Szuk2 - 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (Szuk1 != 5 && Szuk2 != 0 && Ha4eMouth[Szuk1 - 1][Szuk2 + 1] >= 70)
	//						{
	//							GustotaMouth++;
	//						}
	//						if (GustotaMouth >= 4)
	//						{
	//							gustMouth[wier] = true;
	//						}
	//					}
	//				}
	//			}
	//		}
			////¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬

			/*for (int count = 0; count < 40; count++)
			{
				LewoСheek[count] = 0;
				VerchСheek[count] = 0;
				PrawoСheek[count] = CСheek;
				NizСheek[count] = RСheek;
			}

			for (int i = 0; i <= 5; i++)
			{
				for (int j = 0; j <= 5; j++)
				{
					if (i != 0)
					{
						VerchСheek[j + 6 * i] += RСheek * i;
					}
					LewoСheek[j + 6 * i] += CСheek * j;
				}
			}
			imwrite("Cheek01.jpg", imgСheek);

			for (int c = 0; c < 36; c++)
			{
				Rect rect1(LewoСheek[c], VerchСheek[c], PrawoСheek[c], NizСheek[c]);
				imgСheek01(rect1).copyTo(imgСheek02);
				imwrite("Cheek02.jpg", imgСheek02);

				for (int i = 0; i < searchСheek.rows; i++)
					for (int j = 0; j < searchСheek.cols; j++)
						if (searchСheek.at<Vec3b>(i, j)[0] < searchСheek.at<Vec3b>(i, j)[2] - 90 &&
							searchСheek.at<Vec3b>(i, j)[1] < searchСheek.at<Vec3b>(i, j)[2] - 90 &&
							searchСheek.at<Vec3b>(i, j)[2] > 150)
						{
							searchСheek.at<Vec3b>(i, j)[0] = 255;
							searchСheek.at<Vec3b>(i, j)[1] = 0;
							searchСheek.at<Vec3b>(i, j)[2] = 0;

							PixBolСheek++;
						}
				ProcСheek[c] = PixBolСheek * 100 / MaxСheek;
				PixBolСheek = 0;
				imwrite("Cheek03.jpg", searchСheek);
			}

			for (int i = 0; i <= 5; i++)
			{
				for (int j = 0; j <= 5; j++)
				{
					HaСheek[i][j] = ProcСheek[PozycjaСheek];
					PozycjaСheek++;
				}
			}

			for (int Szuk1 = 0; Szuk1 < 5; Szuk1++)
			{
				for (int Szuk2 = 0; Szuk2<5; Szuk2++)
				{
					if (HaСheek[Szuk1][Szuk2] >= 70)
					{
						int GustotaСheek = 0;
						if (Szuk2 != 5 && HaСheek[Szuk1][Szuk2 + 1] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk2 != 0 && HaСheek[Szuk1][Szuk2 - 1] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 5 && HaСheek[Szuk1 + 1][Szuk2] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 0 && HaСheek[Szuk1 - 1][Szuk2] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 0 && Szuk2 != 5 && HaСheek[Szuk1 - 1][Szuk2 + 1] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 0 && Szuk2 != 5 && HaСheek[Szuk1 + 1][Szuk2 - 1] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 5 && Szuk2 != 0 && HaСheek[Szuk1 + 1][Szuk2 - 1] >= 70)
						{
							GustotaСheek++;
						}
						if (Szuk1 != 5 && Szuk2 != 0 && HaСheek[Szuk1 - 1][Szuk2 + 1] >= 70)
						{
							GustotaСheek++;
						}
						if (GustotaСheek >= 4)
						{
							GustotaСheek = true;
						}
					}
				}
			}*/
		}

		//dane dla pracy nad całym obrazkiem
		Mat foto= imread("forehead01.jpg");
		int countPixelFoto = 0;
		int proc = 0;

		for (int KoniecBoliezn = 0; KoniecBoliezn < 2; KoniecBoliezn++)
		{
			bool boliezn = false;
			for (int Koniec = 0; Koniec < 2; Koniec++)
			{
				//----------------Procent zapełnienia kolorem wszystkiego obrazu------------
				for (int i = 0; i < foto.rows; i++)
					for (int j = 0; j < foto.cols; j++)//sprawdzenie koloru z zasiegiem
						if (foto.at<Vec3b>(i, j)[0] >= NWD_B[KoniecBoliezn] - 20 && foto.at<Vec3b>(i, j)[0] <= NWD_B[KoniecBoliezn] + 20 &&
							foto.at<Vec3b>(i, j)[1] >= NWD_G[KoniecBoliezn] - 20 && foto.at<Vec3b>(i, j)[1] <= NWD_G[KoniecBoliezn] + 20 &&
							foto.at<Vec3b>(i, j)[2] >= NWD_R[KoniecBoliezn] - 20 && foto.at<Vec3b>(i, j)[2] <= NWD_R[KoniecBoliezn] + 20)
						{
							foto.at<Vec3b>(i, j)[0] = 255;
							foto.at<Vec3b>(i, j)[1] = 0;
							foto.at<Vec3b>(i, j)[2] = 0;
							countPixelFoto++;
						}
				//
				imwrite("Lobiesznik.jpg", foto);

				//Znalezienie kolorowych zon 
				float maxPixelfoto = foto.rows * foto.cols;
				proc = countPixelFoto * 100 / maxPixelfoto;
				this->textBox2->Text += " " + countPixelFoto.ToString();
				this->textBox3->Text += " " + proc.ToString();
				//В if стоит предохранитель, что бы не обробатывался код дальше, есть нет причины
				if (gustotaForehead[KoniecBoliezn] == BolieznBoolCzolo[KoniecBoliezn] && gustotaForehead[KoniecBoliezn] == BolieznBoolPoliczek[KoniecBoliezn])
				{
					int max;
					int max2;
					int min;
					if (KoniecBoliezn == 0)
					{
						if (Koniec == 0)
						{
							min = CzoloOspa[0][1];
						}
						else
						{
							min = PoliczekOspa[0][1];
						}
					}
					else
					{
						if (Koniec == 0)
						{
							min = CzoloZelt[0][1];
						}
						else
						{
							min = PoliczekZelt[0][1];
						}
					}
					

					int tabMax[4] = { 0,0,0,0 };
					int tabProc[4] = { 0,0,0,0 };

					for (int q1 = 0; q1 < 4; q1++)
					{
						if (KoniecBoliezn == 0)
						{
							if (Koniec == 0)
							{
								if (CzoloOspa[q1][1] < min) { min = CzoloOspa[q1][1]; }
								tabMax[q1] = CzoloOspa[q1][1];
								tabProc[q1] = CzoloOspa[q1][0];
							}
							else
							{
								if (PoliczekOspa[q1][1] < min) { min = PoliczekOspa[q1][1]; }
								tabMax[q1] = PoliczekOspa[q1][1];
								tabProc[q1] = PoliczekZelt[q1][0];
							}

						}
						else
						{
							if (Koniec == 0)
							{
								if (CzoloZelt[q1][1] < min) { min = CzoloZelt[q1][1]; }
								tabMax[q1] = CzoloZelt[q1][1];
								tabProc[q1] = CzoloZelt[q1][0];
							}
							else
							{
								if (PoliczekZelt[q1][1] < min) { min = PoliczekZelt[q1][1]; }
								tabMax[q1] = PoliczekZelt[q1][1];
								tabProc[q1] = PoliczekZelt[q1][0];
							}
						}

					}

					for (int couuntSort = 0; couuntSort < 4; couuntSort++)
					{
						for (int q2 = 3; q2 > 0; q2--)
						{
							if (tabMax[q2] < tabMax[q2 - 1])
							{
								max = tabMax[q2];
								tabMax[q2] = tabMax[q2 - 1];
								tabMax[q2 - 1] = max;

								max2 = tabProc[q2];
								tabProc[q2] = tabProc[q2 - 1];
								tabProc[q2 - 1] = max2;
							}
						}
					}
					max = tabProc[3];
					min = tabProc[0];
					if (KoniecBoliezn == 0)
					{
						if (Koniec == 0)
							this->textBox5->Text = min.ToString();
						else
							this->textBox14->Text = min.ToString();
					}
					else
					{
						if (Koniec == 0)
							this->textBox15->Text = min.ToString();
						else
							this->textBox16->Text = min.ToString();
					}


					if (proc >= tabProc[2] && proc <= tabMax[3])
					{
						switch (KoniecBoliezn)
						{
						case 0:
							this->textBox1->Text = "Ospa";
							break;
						case 1:
							this->textBox1->Text = "Zaltaczka";
							break;
						default:
							break;
						}
					}

					else if (proc >= min && proc <= max)
					{
						if (KoniecBoliezn == 0)
						{
							this->textBox1->Text = "Nie mam takiego w bazie. Pojdz do lekarza i powiedz jaka chorobe masz. Mozliwo jestes chory na Ospe";
							break;
						}
						else
						{
							this->textBox1->Text = "Nie mam takiego w bazie. Pojdz do lekarza i powiedz jaka chorobe masz. Mozliwo jestes chory na Zoltaczka";
							break;
						}

					}

					else
					{

						for (int j = 0; j < 4; j++)
							if (proc == tabProc[j])
							{
								boliezn = true;
							}

					}
					

					if (KoniecBoliezn == 0)
					{
						if (Koniec == 0)
							this->textBox4->Text = tabProc[2].ToString();
						else
							this->textBox11->Text = tabProc[2].ToString();
					}
					else
					{
						if (Koniec == 0)
							this->textBox12->Text = tabProc[2].ToString();
						else
							this->textBox13->Text = tabProc[2].ToString();
					}



					if (KoniecBoliezn == 0)
					{
						if (Koniec == 0)
							this->textBox7->Text = tabProc[3].ToString();
						else
							this->textBox8->Text = tabProc[3].ToString();
					}
					else
					{
						if (Koniec == 0)
						{
							this->textBox9->Text = tabProc[3].ToString();
						}
						else
						{
							this->textBox6->Text = tabProc[3].ToString();
						}
					}
				}
				
				if (KoniecBoliezn == 0)
				{
					if (boliezn == true)
					{
						this->textBox1->Text = "Mozliwo Ospa";
						break;
					}
					else
						this->textBox1->Text = "Jestes Zdrowy";
				}
				else
				{
					if (boliezn == true)
					{
						this->textBox10->Text = "Mozliwo Zaltaczka";
						break;
					}
					else
						this->textBox10->Text = "Jestes Zdrowy";
				}
			}
			
}
		
		/*private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}*/
	};
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
}; };