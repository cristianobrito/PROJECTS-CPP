///////////////////////////////////////////////////////////
/*

	AUTHOR: NANUS DATA: 04/04/2023
	identação 2 espaços ou um tab limite de linhas 60
	comentarios apartir da coluna 30
	Define a classe CodeBook que contém um membro de dados NameBook
	e funções-membro para configurar e obter seu valor;
	Cria e manipula um objeto CodeBook com essas funções.
  
*/
///////////////////////////////////////////////////////////
#include <iostream>         
using namespace std;        
#include <string>         
using std::string;         
using std::getline;

class CodeBook
{
public: 
	void setNameBook(string name)
	{
		NameBook = name;
	}
	string getNameBook()
	{
		return NameBook;     
	}
	void displayMessage()  
	{
		cout << "Bem vindo ao livro: " << getNameBook() << endl;
	}
private:                      
	string NameBook;         
};

int main()
{
	string NameDoBook;       
	CodeBook meuCodeBook;    
	cout << "nome atual: " << meuCodeBook.getNameBook() << endl;
	cout << "Digite o novo nome: " << endl;
	getline(cin, NameDoBook);
	meuCodeBook.setNameBook(NameDoBook);
	cout << endl;            
	meuCodeBook.displayMessage();
	system("Pause");
	return 0;
}