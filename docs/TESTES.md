# Casos de teste — Controle Bancário

**Importante:** todos os casos abaixo começam como **Não executado**. Atualize o resultado após testar a versão atual. Não informe “Aprovado” sem ter executado o teste.

Antes de começar, faça uma cópia de `contas.dat` e `movimentacoes.dat` para poder restaurar os dados.

| ID | Caso de teste | Procedimento | Resultado esperado | Resultado real |
|---|---|---|---|---|
| T01 | Iniciar o programa | Executar `output\bancario.exe` | O menu principal é exibido sem encerrar inesperadamente | Não executado |
| T02 | Cadastrar conta válida | Informar todos os campos obrigatórios com valores válidos | A conta é cadastrada e fica disponível para consulta | Não executado |
| T03 | Consultar conta existente | Consultar pelo código de uma conta cadastrada | Os dados da conta correta são exibidos | Não executado |
| T04 | Consultar conta inexistente | Informar um código não cadastrado | O sistema informa que não encontrou a conta | Não executado |
| T05 | Cadastrar código duplicado | Tentar cadastrar outra conta com código já existente | A duplicidade é impedida ou tratada claramente | Não executado |
| T06 | Alterar conta existente | Alterar dados de uma conta cadastrada | Os novos dados são exibidos na consulta | Não executado |
| T07 | Inserir conta no início | Usar a opção correspondente, se disponível no fluxo | A lista mantém a conta e os vínculos corretos | Não executado |
| T08 | Inserir conta no fim | Usar a opção correspondente, se disponível no fluxo | A lista mantém a conta e os vínculos corretos | Não executado |
| T09 | Inserir conta em posição | Informar uma posição válida | A conta fica na posição prevista e a lista permanece íntegra | Não executado |
| T10 | Remover primeira conta | Remover o primeiro nó da lista | A conta é removida sem corromper a lista | Não executado |
| T11 | Remover última conta | Remover o último nó da lista | A conta é removida sem corromper a lista | Não executado |
| T12 | Remover conta intermediária | Remover um nó entre outros dois | Os nós anterior e próximo ficam ligados corretamente | Não executado |
| T13 | Crédito válido | Registrar crédito em conta existente | Saldo e registro da movimentação são atualizados corretamente | Não executado |
| T14 | Débito válido | Registrar débito dentro das regras do sistema | Saldo e registro da movimentação são atualizados corretamente | Não executado |
| T15 | Débito inválido | Tentar débito com valor inválido ou acima do permitido | A operação é recusada ou tratada conforme as regras implementadas | Não executado |
| T16 | Transferência válida | Transferir entre duas contas existentes | Débito e crédito correspondem ao mesmo valor e os saldos são consistentes | Não executado |
| T17 | Transferência para conta inexistente | Informar código de destino inexistente | A transferência não é concluída e os saldos não são alterados | Não executado |
| T18 | Consultar movimentações | Consultar o histórico de uma conta com movimentações | São exibidas as movimentações associadas à conta correta | Não executado |
| T19 | Persistência de contas | Cadastrar conta, encerrar e abrir novamente o programa | A conta continua disponível, caso a persistência esteja implementada | Não executado |
| T20 | Persistência de movimentações | Registrar movimentação, encerrar e reabrir | O histórico continua disponível, caso a persistência esteja implementada | Não executado |
| T21 | Opção de menu inválida | Digitar uma opção inexistente | O programa informa o erro e permite continuar ou retornar ao menu | Não executado |
| T22 | Lista vazia | Consultar ou remover quando não há contas cadastradas | O programa trata a lista vazia sem acessar ponteiros inválidos | Não executado |

## Registro da execução

Para cada teste realizado, registre:
- Data da execução;
- ID do teste;
- Dados usados (evite publicar dados bancários reais);
- Resultado observado;
- Aprovado ou reprovado;
- Descrição do defeito, se houver.

### Modelo

| Data | ID | Resultado observado | Status | Observações |
|---|---|---|---|---|
| preencher | preencher | preencher após executar | Aprovado/Reprovado | preencher |

Não apresente esta lista como prova de que todos os testes passaram: ela é um roteiro para documentar a execução real.
