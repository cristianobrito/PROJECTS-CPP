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
#include <iostream>          // - includes imports 
using namespace std;         // - usando toda lib

#include <string>            // - class de string padrão c++
using std::string;           // - usando tipo especifico
using std::getline;

// DEFINIÇÃO DA CLASS
class CodeBook               // - nome da class
{
public:                      // - tipo de acesso
	void setNameBook(string name)// - func configura o nome do cruso
	{
		NameBook = name;     // - armazena o nome do curso no obj
	}
	string getNameBook()     // - func obtem o nome do cruso
	{
		return NameBook;     // - retorna o NameBook do obj
	}
	void displayMessage()    // - exibe o nome
	{
		// chama getNameBook para obter o nome do curso que esse CodeBook representa
		cout << "Bem vindo ao livro: " << getNameBook() << endl;
	}
private:                     // - tipo de acesso da var 
	string NameBook;         // - var string local
	// NOME DO CRUSO PARA ESSE CodeBook
};

int main()
{
	string NameDoBook;       // - string para armazenar o nome do cruso
	CodeBook meuCodeBook;    // - instancia(cria) obj

	// EXIBE O VALOR INICIAL DO NameBook
	cout << "nome atual: " << meuCodeBook.getNameBook() << endl;
	
	// SOLICITA, INSERE E CONFIGURA O NOME DO CRUSO
	cout << "Digite o novo nome: " << endl;
	getline(cin, NameDoBook);// - le a linha
    meuCodeBook.setNameBook(NameDoBook);// - set(configura) o nome do cruso
	
	cout << endl;            // - pula linha
	meuCodeBook.displayMessage();// - mostra o novo nome

	system("Pause");
	return 0;
}