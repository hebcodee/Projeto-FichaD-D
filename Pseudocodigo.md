- So pode criar até 4 personagens

**Tela Inicial**
(1) - Criar Novo Personagem  
(2) - Carregar Fichas
(3) - Criar ficha aleatoria
-> Depois (6) -  Criar ficha aleatoria
----------------------------------------
Carregar ficha:
(1) - Editar Fichas
(2) - Deletar Ficha

Fichas [4] - [Personagem1, Personagem2, Personagem3, Personagem4]

def EscolherNome
-Pedir nome
-Coletar nome
-Adicionar Personagem1.Nome

def Escolher Raça
-Pedir Raca
-(Opcional)Exibir mais detalhes das raças
-Coletar Raca
-Adicionar Raca.<raçaescolhida>
-Adicionar Personagem1.raca

def Escolher Classe
-Pedir Classe
-(Opcional)Exibir mais detalhes das classes
-Coletar Classe
-Adicionar Classe.<raçaescolhida>
-Adicionar Personagem1.classe

def Escolher Atributos
-MaxAtributo: 72 + <Vantagens Classe + Raça + Antecedente>
-Distribua seus pontos de atributos
-For:
-Des:
-Const:
-Int:
-Sab:
-Car:
-VerificarPontosAtributos
-Adicionar atributos a personagem1.atributos

def VerificarPontosAtributos
-if MaxAtributos == Personagem1.Atributos
    Ok.
-else
    Valores inseridos errados. A soma dos valores tem que ser = MaxAtributos
----------------------------------------

def Escolher Antecedentes
-Escolher antedecentes
-Exibir mais informacoes de antecedentes
-Adicionar Personagem1.Antecedentes

def Escolher Itens

def AjudaCriarHistoria

def DicasDeInterpretacao

------------ Banco de dados
-Todas as Raças, com seus detalhes e incrementos de vantagem ou desvantagem.
-Todas as Classes, com seus detalhes e incrementos de vantagem ou desvantagem.
-Todos itens com danos, peso e valores.
-Todos Alinhamentos.


