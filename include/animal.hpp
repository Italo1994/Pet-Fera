#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
// #include "veterinario.hpp"
// #include "tratador.hpp"

using namespace std;

	class Animal {
		protected:
			int id; //id do animal
			string classe; // classe do animal
			string nome_cientifico; // nome cientifico do animal
			string nome_batismo; // nome de batismo do animal
			char sexo; //sexo do animal
			double tamanho; //tamanho do animal
			string dieta; //dieta do animal
			// Veterinario veterinario;
			// Tratador tratador;
		public:
			// construtor
			Animal();
			// construtor parametrizado
			Animal(int m_id, string m_classe, string m_nome_cientifico, string m_nome_batismo, char m_sexo, double m_tamanho, string m_dieta);
			// destrutor
			~Animal();

			// virtual void cadastrar_animal();

			/*
			*Métodos setters e getters referentes 
			* a classe Animal
			*/
			void setId(int m_id);
			int getId();

			void setClasse(string m_classe);
			string getClasse();

			void setNomeCientifico(string m_nome_cientifico);
			string getNomeCientifico();

			void setNomeBatismo(string m_nome_batismo);
			string getNomeBatismo();

			void setSexo(char m_sexo);
			char getSexo();

			void setTamanho(double m_tamanho);
			double getTamanho();

			void setDieta(string m_dieta);
			string getDieta();

			// void setVeterinario(Veterinario & m_veterinario);
			// Veterinario getVeterinario();

			// void setTratador(Tratador & m_tratador);
			// Tratador getTratador();
	};

#endif