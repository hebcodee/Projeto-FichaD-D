#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar os atributos do personagem
struct FichaPersonagem {
    char nome[50];
    char raca[50];
    char classe[50];
    // Adicione outros atributos conforme necessário
};

int main() {
    struct FichaPersonagem personagem;

    printf("Digite o nome do personagem: ");
    fgets(personagem.nome, sizeof(personagem.nome), stdin);
    personagem.nome[strcspn(personagem.nome, "\n")] = 0; // Remover o '\n'

    printf("Escolha sua raça: ");
    fgets(personagem.raca, sizeof(personagem.raca), stdin);
    personagem.raca[strcspn(personagem.raca, "\n")] = 0; // Remover o '\n'

    printf("Escolha sua classe: ");
    fgets(personagem.classe, sizeof(personagem.classe), stdin);
    personagem.classe[strcspn(personagem.classe, "\n")] = 0; // Remover o '\n'

    // Exibir as informações capturadas
    printf("\nFicha do Personagem:\n");
    printf("Nome: %s\n", personagem.nome);
    printf("Raça: %s\n", personagem.raca);
    printf("Classe: %s\n", personagem.classe);

    return 0