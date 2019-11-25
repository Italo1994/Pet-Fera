#include "gerenciar_pet.hpp"
#include "anfibio.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"
#include <algorithm>

void cadastrar_animal(Animal & m_animal)
{
	/*int id;
	string classe;
	string nome_cientifico;
	string nome_batismo;
	char sexo;
	double tamanho;
	string dieta;*/

	string opcaoAnimal;

	cout << "Qual a classe de animal que você deseja cadastrar?" << endl;
	cin >> opcaoAnimal;

	transform(opcaoAnimal.begin(), opcaoAnimal.end(),opcaoAnimal.begin(), ::toupper);

	if( opcaoAnimal.compare("ANFIBIO") == 0 )
	{
		Anfibio anfibio;
	}
	else if( opcaoAnimal.compare("AVE") == 0 )
	{
		Ave ave;
	}
	else if( opcaoAnimal.compare("MAMIFERO") == 0 )
	{
		Mamifero mamifero;
	}
	else if( opcaoAnimal.compare("REPTIL") == 0 )
	{
		Reptil reptil;
	}
	
}