#include "gerenciar_pet.hpp"
#include "anfibio.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"
#include <algorithm>

// template <typename T>

void interface_grafica()
{
	cout << "******** MENU *********" << endl << endl;
	cout << "(1) - Adicionar animal" << endl;
	cout << "(2) - Remover animal" << endl;
	cout << "(3) - Alterar dados" << endl;
	cout << "(5) - Pesquisar animal" << endl;
	cout << "(0) - Sair do programa" << endl;
	cout << "********	   *********" << endl;
}

int opcoes()
{
	int option = 0;

	cout << "1 - ANFÍBIO" << endl;
	cout << "2 - AVE" << endl;
	cout << "3 - MAMÍFERO" << endl;
	cout << "4 - REPTIL" << endl;

	cin >> option;

	if(option == 1)
	{
		return 1;
	}

	else if(option == 2)
	{
		return 2;
	}

	else if(option == 3)
	{
		return 3;
	}
	else if(option == 4)
	{
		return 4;
	}

}

Animal cadastrar_animal(int opcaoAnimal)
{

	if( opcaoAnimal == 1 )
	{
		Anfibio anfibio;

		int total_de_mudas;
		int id;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		char sexo;
		double tamanho;
		string dieta;

		cout << "DIGITE O TOTAL DE MUDAS DO ANFÍBIO:" << endl;
		cin >> total_de_mudas;

		cout << "DIGITE A IDENTIFICAÇÃO(ID) DO ANFÍBIO:" << endl;
		cin >> id;

		cout << "DIGITE A CLASSE DO ANFÍBIO:" << endl;
		cin >> classe;

		cout << "DIGITE O NOME CIENTÍFICO DO ANFÍBIO:" << endl;
		cin >> nome_cientifico;

		cout << "DIGITE O NOME DE BATISMO DO ANFÍBIO:" << endl;
		cin >> nome_batismo;

		cout << "DIGITE O SEXO DO ANFÍBIO:" << endl;
		cin >> sexo;

		cout << "DIGITE O TAMANHO DO ANFÍBIO:" << endl;
		cin >> tamanho;

		cout << "DIGITE A DIETA DO ANFÍBIO:" << endl;
		cin >> dieta;

		anfibio.setTotalDeMudas(total_de_mudas);
		anfibio.setId(id);
		anfibio.setClasse(classe);
		anfibio.setNomeCientifico(nome_cientifico);
		anfibio.setNomeBatismo(nome_batismo);
		anfibio.setSexo(sexo);
		anfibio.setTamanho(tamanho);
		anfibio.setDieta(dieta);

		return anfibio;
	}

	else if( opcaoAnimal == 2 )
	{
		Ave ave;

		double tamanho_do_bico;
		double envergadura_das_asas;
		int id;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		char sexo;
		double tamanho;
		string dieta;

		cout << "DIGITE O TAMANHO DO BICO DA AVE:" << endl;
		cin >> tamanho_do_bico;

		cout << "DIGITE A ENVERGADURA DAS ASAS DA AVE:" << endl;
		cin >> envergadura_das_asas;

		cout << "DIGITE A IDENTIFICAÇÃO(ID) DA AVE:" << endl;
		cin >> id;

		cout << "DIGITE A CLASSE DA AVE:" << endl;
		cin >> classe;

		cout << "DIGITE O NOME CIENTÍFICO DA AVE:" << endl;
		cin >> nome_cientifico;

		cout << "DIGITE O NOME DE BATISMO DA AVE:" << endl;
		cin >> nome_batismo;

		cout << "DIGITE O SEXO DA AVE:" << endl;
		cin >> sexo;

		cout << "DIGITE O TAMANHO DA AVE:" << endl;
		cin >> tamanho;

		cout << "DIGITE A DIETA DA AVE:" << endl;
		cin >> dieta;

		ave.setTamanhoDoBico(tamanho_do_bico);
		ave.setEnvergaduraDasAsas(envergadura_das_asas);
		ave.setId(id);
		ave.setClasse(classe);
		ave.setNomeCientifico(nome_cientifico);
		ave.setNomeBatismo(nome_batismo);
		ave.setSexo(sexo);
		ave.setTamanho(tamanho);
		ave.setDieta(dieta);

		return ave;

	}

	else if( opcaoAnimal == 3 )
	{
		Mamifero mamifero;

		string cor_pelo;
		int id;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		char sexo;
		double tamanho;
		string dieta;

		cout << "DIGITE A COR DO PELO DO MAMÍFERO:" << endl;
		cin >> cor_pelo;

		cout << "DIGITE A IDENTIFICAÇÃO(ID) DO MAMÍFERO:" << endl;
		cin >> id;

		cout << "DIGITE A CLASSE DO MAMÍFERO:" << endl;
		cin >> classe;

		cout << "DIGITE O NOME CIENTÍFICO DO MAMÍFERO:" << endl;
		cin >> nome_cientifico;

		cout << "DIGITE O NOME DE BATISMO DO MAMÍFERO:" << endl;
		cin >> nome_batismo;

		cout << "DIGITE O SEXO DO MAMÍFERO:" << endl;
		cin >> sexo;

		cout << "DIGITE O TAMANHO DO MAMÍFERO:" << endl;
		cin >> tamanho;

		cout << "DIGITE A DIETA DO MAMÍFERO:" << endl;
		cin >> dieta;

		mamifero.setCorDoPelo(cor_pelo);
		mamifero.setId(id);
		mamifero.setClasse(classe);
		mamifero.setNomeCientifico(nome_cientifico);
		mamifero.setNomeBatismo(nome_batismo);
		mamifero.setSexo(sexo);
		mamifero.setTamanho(tamanho);
		mamifero.setDieta(dieta);

		return mamifero;
	}

	else if( opcaoAnimal == 4 )
	{
		Reptil reptil;

		bool venenoso;
		string tipo_veneno;
		int id;
		string classe;
		string nome_cientifico;
		string nome_batismo;
		char sexo;
		double tamanho;
		string dieta;

		cout << "INFORME SE O RÉPTIL É VENENOSO:" << endl;
		cin >> venenoso;

		cout << "DIGITE O TIPO DO VENENO DO RÉPTIL:" << endl;
		cin >> tipo_veneno;

		cout << "DIGITE A IDENTIFICAÇÃO(ID) DO RÉPTIL:" << endl;
		cin >> id;

		cout << "DIGITE A CLASSE DO RÉPTIL:" << endl;
		cin >> classe;

		cout << "DIGITE O NOME CIENTÍFICO DO RÉPTIL:" << endl;
		cin >> nome_cientifico;

		cout << "DIGITE O NOME DE BATISMO DO RÉPTIL:" << endl;
		cin >> nome_batismo;

		cout << "DIGITE O SEXO DO RÉPTIL:" << endl;
		cin >> sexo;

		cout << "DIGITE O TAMANHO DO RÉPTIL:" << endl;
		cin >> tamanho;

		cout << "DIGITE A DIETA DO RÉPTIL:" << endl;
		cin >> dieta;

		reptil.setVenenoso(venenoso);
		reptil.setTipoVeneno(tipo_veneno);
		reptil.setId(id);
		reptil.setClasse(classe);
		reptil.setNomeCientifico(nome_cientifico);
		reptil.setNomeBatismo(nome_batismo);
		reptil.setSexo(sexo);
		reptil.setTamanho(tamanho);
		reptil.setDieta(dieta);

		return reptil;
	}
	
}