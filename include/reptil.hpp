#ifndef REPTIL_H_
#define REPTIL_H_

#include <iostream>
#include <string>
#include "animal.hpp"

using namespace std;

	class Reptil : public Animal {
		private:
			bool venenoso; // se o animal é veneno ou não
			string tipo_veneno; // tipo do veneno do animal

		public:
			// construtores e destrutor da classe
			Reptil();
			Reptil(bool m_venenoso, string m_tipo_veneno);
			~Reptil();

			// métodos getters e setters referentes a classe
			void setVenenoso(bool m_venenoso);
			bool getVenenoso();

			void setTipoVeneno(string m_tipo_veneno);
			string getTipoVeneno();
	};

#endif