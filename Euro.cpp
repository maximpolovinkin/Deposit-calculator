#include "Euro.h"
#include"Dollar.h"
#include"MyForm.h"
#include"Functions.h"

System::Void vklad::Euro::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����������, � ������� �� ������ ��������������� ���� �����.", "���������� � ����������");
}

System::Void vklad::Euro::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	Dollar^ form = gcnew Dollar();
	this->Hide();
	form->Show();
}

System::Void vklad::Euro::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}


void vklad::Euro::efrash() {

	if (checkBox4->Checked) {
		//	vklad::Euro::checkBox4->Checked == true;
		textBox1->Text = Convert::ToString((trackBar3->Value) * 100);

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1)) + " �";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " ����";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5)) + " �";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar3->Value) * 100);
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " �";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " ����";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " �";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}


System::Void vklad::Euro::trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Euro::efrash();

	/*textBox1->Text = Convert::ToString((trackBar3->Value) * 100);
	if (trackBar1->Value == 1) {

		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " �";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";

	}
	if (trackBar1->Value == 2) {

		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " �";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
	}*/

}

System::Void vklad::Euro::trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
{

	vklad::Euro::efrash();
	//if (trackBar1->Value == 1) textBox2->Text = Convert::ToString(1) + " ���";
	/*if (trackBar1->Value == 1) {

		textBox2->Text = Convert::ToString(1) + " ���";
		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " �";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";

	}
	if (trackBar1->Value == 2) {
		textBox2->Text = Convert::ToString(1.5) + " ����";
		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " �";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
	} */
}

System::Void vklad::Euro::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Euro::efrash();

	/*if (checkBox4->Checked == true) {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1)) + " �";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " ����";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5)) + " �";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}

	}

	else {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " �";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " �";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " ����";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " �";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " �";
		}

	}*/
	

}

System::Void vklad::Euro::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����� ������������ ���������� ������ ��� �����������, ������� �������� �������, � ����� ��������� ������� ����� � ��������������� �����.", "������");
}
