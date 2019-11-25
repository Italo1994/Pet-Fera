#include "animal.hpp"

Animal::Animal()
{

}

Animal::Animal(int m_id, string m_classe, string m_nome_cientifico, string m_nome_batismo, char m_sexo, double m_tamanho, string m_dieta)
{
	id = m_id;
	classe = m_classe;
	nome_cientifico = m_nome_cientifico;
	nome_batismo = m_nome_batismo;
	sexo = m_sexo;
	tamanho = m_tamanho;
	dieta = m_dieta;
}

Animal::~Animal()
{

}

void Animal::setId(int m_id)
{
	id = m_id;
}

int Animal::getId()
{
	return id;
}

void Animal::setClasse(string m_classe)
{
	classe = m_classe;
}

string Animal::getClasse()
{
	return classe;
}

void Animal::setNomeCientifico(string m_nome_cientifico)
{
	nome_cientifico = m_nome_cientifico;
}

string Animal::getNomeCientifico()
{
	return nome_cientifico;
}

void Animal::setNomeBatismo(string m_nome_batismo)
{
	nome_batismo = m_nome_batismo;
}

string Animal::getNomeBatismo()
{
	return nome_batismo;
}

void Animal::setSexo(char m_sexo)
{
	sexo = m_sexo;
}

char Animal::getSexo()
{
	return sexo;
}

void Animal::setTamanho(double m_tamanho)
{
	tamanho = m_tamanho;
}

double Animal::getTamanho()
{
	return tamanho;
}

void Animal::setDieta(string m_dieta)
{
	dieta = m_dieta;
}

string Animal::getDieta()
{
	return dieta;
}

/*
void Animal::setTratador(Tratador & m_tratador)
{
	// m_tratador.setNivelDeSeguranca;
}
*/