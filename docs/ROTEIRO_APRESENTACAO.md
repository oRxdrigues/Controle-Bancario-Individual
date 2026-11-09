# Roteiro para apresentação individual

Use este material para estudar e explicar o código real do projeto. Não decore afirmações sem conferir a implementação.

## 1. Visão geral
Explique que o sistema foi desenvolvido em C para gerenciar contas e registrar movimentações bancárias, usando funções separadas por arquivo.

## 2. Estruturas de dados
No arquivo `funcoes.h`, localize as estruturas `reg_contas`, `TipoItem_conta`, `Lista_Conta`, `reg_movimentacao`, `TipoItem_movim` e `Lista_Movim`.

Prepare-se para explicar:
- O que cada campo representa;
- Como um nó armazena os dados;
- A diferença entre uma lista simplesmente encadeada e uma duplamente encadeada;
- Como `inicio`, `fim` e `qtd` são usados;
- Como os ponteiros `prox` e `ant` conectam os nós.

## 3. Ponteiros e memória
Revise no código:
- Onde nós são alocados com `malloc`;
- Como se verifica falha de alocação, se implementado;
- Como os ponteiros são atualizados ao inserir e remover;
- Onde a memória é liberada com `free`;
- Como os casos de lista vazia, primeiro nó, último nó e nó intermediário são tratados.

## 4. Operações bancárias
Abra os arquivos correspondentes e consiga explicar, com suas próprias palavras:
- Cadastro e consulta de conta;
- Alteração e remoção;
- Crédito e débito;
- Transferência entre contas;
- Registro e consulta de movimentações;
- Salvamento e leitura dos arquivos de dados.

## 5. Persistência
Explique o papel de `contas.dat` e `movimentacoes.dat` e identifique no código onde os dados são gravados e lidos. Confirme com um teste se os dados continuam disponíveis depois de fechar e abrir o programa.

## 6. Demonstração sugerida
1. Iniciar o programa.
2. Cadastrar uma conta de teste.
3. Consultar a conta.
4. Registrar um crédito e um débito de teste.
5. Consultar as movimentações.
6. Demonstrar uma transferência, se estiver funcionando.
7. Encerrar e reabrir para verificar persistência.
8. Mostrar o README e o registro dos testes.

Use somente dados fictícios. Faça uma cópia dos arquivos `.dat` antes de testar, pois operações podem alterar os dados existentes.

## 7. Perguntas que você deve conseguir responder
- Por que o projeto usa listas encadeadas?
- O que acontece com `inicio` e `fim` quando a lista fica vazia?
- Como se evita perder a referência para o restante da lista ao remover um nó?
- Como a função de busca encontra uma conta?
- Como o programa associa uma movimentação à conta correta?
- Como você testou os casos de erro?
- Quais limitações ou defeitos ainda foram encontrados?

Responda de acordo com o código e os testes que você realmente executou.
