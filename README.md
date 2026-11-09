# Controle Bancário

Projeto em linguagem C para gerenciamento de contas bancárias e movimentações.

## Funcionalidades presentes no código
- Cadastro, consulta, alteração e remoção de contas.
- Inserção e consulta de movimentações.
- Menus para movimentações de débito e crédito.
- Transferência entre contas.
- Persistência de dados em arquivos (`contas.dat` e `movimentacoes.dat`).

> A lista acima descreve funções identificadas pelos nomes dos arquivos do projeto. Confirme cada comportamento executando os testes antes da entrega.

## Requisitos
- Windows.
- GCC instalado e disponível no `PATH` (por exemplo, via MinGW-w64).
- Terminal CMD.

O projeto utiliza cabeçalhos específicos do Windows, como `windows.h` e `conio.h`, portanto estes comandos são destinados ao Windows.

## Compilar e executar

Abra o CMD e execute:

```cmd
cd /d C:\\Users\\Cliente\\Desktop\\Controle-Bancario
if not exist output mkdir output
gcc -Wall -Wextra -g *.c -o output\\bancario.exe
output\\bancario.exe
```

Se a pasta estiver em outro local, substitua o caminho do primeiro comando pelo caminho real do projeto.

Se o compilador mostrar avisos ou erros, guarde a mensagem completa e corrija antes da entrega. A existência de um executável antigo na pasta `output` não comprova que o código atual compilou.

## Arquivos de dados
O programa contém `contas.dat` e `movimentacoes.dat`. Faça uma cópia desses arquivos antes de testar operações que alteram ou removem dados.

## Documentação
- [Casos de teste](docs/TESTES.md)
- [Roteiro de apresentação individual](docs/ROTEIRO_APRESENTACAO.md)

## Controle de versão
Para enviar alterações ao repositório individual já configurado como remoto `individual`:

```cmd
git status
git add README.md docs
git commit -m "Documenta projeto e casos de teste"
git push individual main
```

Se o Git informar que não há alterações para registrar, confira `git status`. Não crie commits artificiais apenas para aumentar o histórico.

## Situação dos testes
Os casos em `docs/TESTES.md` são uma lista de verificação. Marque cada resultado somente depois de executar o teste na versão atual do programa.
