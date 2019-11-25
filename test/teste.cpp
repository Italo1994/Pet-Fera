#include <iostream>
#include <string>
#include "anfibio.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "funcionario.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "gerenciar_pet.hpp"

using namespace std;

int main(int argc, char * argv[]) {
	Reptil animal1;

	animal1.setId(20);
	animal1.setClasse("Classe 1");
	animal1.setNomeCientifico("BUMBALAMBADA");
	animal1.setNomeBatismo("CHACHAPUM");
	animal1.setSexo('m');
	animal1.setDieta("Carne");

	cout << "ID do animal: " << animal1.getId() << endl;
	cout << "Classe: " << animal1.getClasse() << endl;
	cout << "Nome Científico: " << animal1.getNomeCientifico() << endl;
	cout << "Nome de Batismo: " << animal1.getNomeBatismo() << endl;
	cout << "Sexo: " << animal1.getSexo() << endl;
	cout << "Dieta: " << animal1.getDieta() << endl;

	return 0;
}