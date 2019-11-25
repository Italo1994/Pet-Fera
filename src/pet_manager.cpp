#include "pet_manager.hpp"

int interface_grafica()
{
	int alternativa = 0;

	cout << "******** MENU *********" << endl << endl;
	cout << "(1) - Cadastrar animal" << endl;
	cout << "(2) - Remover animal" << endl;
	cout << "(3) - Alterar dados" << endl;
	cout << "(5) - Pesquisar animal" << endl;
	cout << "(0) - Sair do programa" << endl << endl;
	cout << "********	   *********" << endl;

	cout << "ESCOLHA UMA OPÇÃO PARA OPERAR NO SISTEMA:" << endl;
	cin >> alternativa;

	return alternativa;
}

int opcoesAnimais()
{
	int option = 0;

	cout << "Informe a classe de animal que deseja cadastrar" << endl;

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

void cadastrarAnfibio(Anfibio &m_anfibio)
{
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

		m_anfibio.setTotalDeMudas(total_de_mudas);
		m_anfibio.setId(id);
		m_anfibio.setClasse(classe);
		m_anfibio.setNomeCientifico(nome_cientifico);
		m_anfibio.setNomeBatismo(nome_batismo);
		m_anfibio.setSexo(sexo);
		m_anfibio.setTamanho(tamanho);
		m_anfibio.setDieta(dieta);
}

void cadastrarAve(Ave &m_ave)
{
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

		m_ave.setTamanhoDoBico(tamanho_do_bico);
		m_ave.setEnvergaduraDasAsas(envergadura_das_asas);
		m_ave.setId(id);
		m_ave.setClasse(classe);
		m_ave.setNomeCientifico(nome_cientifico);
		m_ave.setNomeBatismo(nome_batismo);
		m_ave.setSexo(sexo);
		m_ave.setTamanho(tamanho);
		m_ave.setDieta(dieta);
}

void cadastrarMamifero(Mamifero &m_mamifero)
{
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

		m_mamifero.setCorDoPelo(cor_pelo);
		m_mamifero.setId(id);
		m_mamifero.setClasse(classe);
		m_mamifero.setNomeCientifico(nome_cientifico);
		m_mamifero.setNomeBatismo(nome_batismo);
		m_mamifero.setSexo(sexo);
		m_mamifero.setTamanho(tamanho);
		m_mamifero.setDieta(dieta);
}

void cadastrarReptil(Reptil &m_reptil)
{
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

		m_reptil.setVenenoso(venenoso);
		m_reptil.setTipoVeneno(tipo_veneno);
		m_reptil.setId(id);
		m_reptil.setClasse(classe);
		m_reptil.setNomeCientifico(nome_cientifico);
		m_reptil.setNomeBatismo(nome_batismo);
		m_reptil.setSexo(sexo);
		m_reptil.setTamanho(tamanho);
		m_reptil.setDieta(dieta);
}