#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
// #include "veterinario.hpp"
// #include "tratador.hpp"

using namespace std;

	class Animal {
		protected:
			int id;
			string classe;
			string nome_cientifico;
			string nome_batismo;
			char sexo;
			double tamanho;
			string dieta;
			// Veterinario veterinario;
			// Tratador tratador;
		public:
			Animal();
			Animal(int m_id, string m_classe, string m_nome_cientifico, string m_nome_batismo, char m_sexo, double m_tamanho, string m_dieta);
			~Animal();

			// virtual void cadastrar_animal();

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