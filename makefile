CC = g++ #compilador

CPPFLAGS = -Wall -std=c++11 #flags

#executavel
Pet_Fera: animal.o anfibio.o ave.o mamifero.o  reptil.o gerenciar_pet.o funcionario.o tratador.o veterinario.o main.o
	@$(CC) $(CPPFLAGS) -Iinclude animal.o anfibio.o ave.o mamifero.o  reptil.o gerenciar_pet.o funcionario.o tratador.o veterinario.o main.o -o Pet_Fera										
		
	@mv *.o build/ #enviando os .o para pasta objects
	
# o -I include diz que a biblioteca está nessa pasta

animal.o: src/animal.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animal.cpp
	@echo "Instalando animal..."

anfibio.o: src/anfibio.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibio.cpp
	@echo "Instalando anfibio..."

ave.o: src/ave.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/ave.cpp
	@echo "Instalando ave..."

mamifero.o: src/mamifero.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mamifero.cpp
	@echo "Instalando mamifero..."

reptil.o: src/reptil.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/reptil.cpp
	@echo "Instalando reptil..."

gerenciar_pet.o: src/gerenciar_pet.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/gerenciar_pet.cpp
	@echo "Instalando gerenciar_pet..."

funcionario.o: src/funcionario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/funcionario.cpp
	@echo "Instalando funcionario..."

tratador.o: src/tratador.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/tratador.cpp
	@echo "Instalando tratador..."

veterinario.o: src/veterinario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/veterinario.cpp
	@echo "Instalando veterinario..."

main.o: src/main.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/main.cpp
	@echo "Aguarde..."
	@echo "Pronto!!!\nPara mais informações digite o comando --> ./Pet_Fera\n"
clean:
	@rm -rf Pet_Fera
	@echo "Diretorio limpo"