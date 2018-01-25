# C Perguntas e Respostas de Programação 

![](https://i.pinimg.com/236x/d6/7e/6e/d67e6ef74c9cba51d157c719e7494fae--programming-languages-logos.jpg)

**Nomes de variáveis - 1**

Esta seção sobre perguntas e respostas da entrevista da linguagem C concentra-se em "Nomes de variáveis". Um estudante deve praticar essas perguntas de entrevista para melhorar suas habilidades de programação C necessárias para várias entrevistas (entrevistas no campus, entrevistas de walkin, entrevistas de empresa), colocações, exames de admissão e outros exames competitivos. Essas questões podem ser tentadas por qualquer pessoa focada em aprender linguagem de programação C. Eles podem ser iniciantes, inermédiarios, graduados em engenharia ou profissionais de TI experientes. As nossas perguntas da entrevista C traz explicação detalhada das respostas que ajudam na melhor compreensão dos conceitos C.

Aqui está uma lista de perguntas da entrevista sobre a Linguagem C abordando o tópico "Nomes de variáveis", juntamente com respostas, explicações e / ou soluções:

**1. O padrão C99 garante singularidade de ____ caracteres para nomes internos.**

- a) 31
- b) 63
- c) 12
- d) 14

<details>
 <summary>Ver resposta</summary>
 
    Resposta: b
   
    Explicação: o compilador do ISO C99 pode considerar apenas os primeiros 63 caracteres para o interno.
</details>

---

**2. C99 standard garantia de unicidade de _____ caracteres para nomes externos.**

- a) 31
- b) 6
- c) 12
- d) 14

<details>
 <summary>Ver resposta</summary>
 
    Resposta: a
    
    Explicação: o compilador ISO C99 pode considerar apenas os primeiros 31 caracteres para o variáveis externas
    com 31 caracteres devido a que pode não ser exclusivo.

 
</details>

---

**3. Qual dos seguintes não é uma declaração de nome de variável válida?**

- a) int __a3;
- b) int __3a;
- c) int __A3;
- d) Nenhum dos mencionados

<details>
 <summary>Ver resposta</summary>
 
    Resposta: d
    
    Explicação: Nenhum.

 
</details>

---

**4. Qual dos seguintes não é uma declaração de nome de variável válida?**

- a) int _a3;
- b) int a_3;
- c) int 3_a;
- d) int _3a

<details>
 <summary>Ver resposta</summary>
 
    Resposta: c
    
    Explicação: O nome da variável não pode começar com um dígito.

 
</details>

---

**5. Os nomes de variáveis que começam com o sublinhado não são encorajados. Por que?**

- a) Não está padronizado
- b) Para evitar conflitos, uma vez que assemblers e loaders utilizam esses nomes
- c) Para evitar conflitos, uma vez que as rotinas da biblioteca usam esses nomes
- d) Para evitar conflitos com variáveis de ambiente de um sistema operacional

<details>
 <summary>Ver resposta</summary>
 
    Resposta: c
    
    Explicação: Nenhuma.

 
</details>

---

**6. Todas as palavras-chave em C estão em**

- a) LowerCase letters
- b) UpperCase letters
- c) CamelCase letters
- d) Nenhum dos mencionados

<details>
 <summary>Ver resposta</summary>
 
    Resposta: a
    
    Explicação: Nenhuma.

 
</details>

---

**7. Resolução de nome de variável (número de caracteres significativos para singularidade de variável) depende de**

- a) Implementações de compilador e linker
- b) Implementações de assemblers e loaders
- c) linguagem C
- d) Nenhum dos mencionados

<details>
 <summary>Ver resposta</summary>
 
    Resposta: a
    
    Explicação: depende do padrão ao qual o compilador e linkers estão aderindo.

 
</details>

---

**8. Qual dos seguintes não é um nome de variável C válido?**

- a) int number;
- b) float rate;
- c) int variable_count;
- d) int $main;

<details>
 <summary>Ver resposta</summary>
 
    Resposta: d
    
    Explicação: Uma vez que apenas o sublinhado e nenhum outro caractere especial é permitido em um nome de variável, isso resulta em um erro.

 
</details>

---

**9. Qual dos seguintes itens é verdadeiro para nomes de variáveis em C?**

- a) Eles podem conter caracteres alfanuméricos, bem como caracteres especiais
- b) Não é um erro declarar uma variável como uma das palavras-chave (como goto, static)
- c) Os nomes das variáveis não podem começar com um dígito
- d) Variável pode ser de qualquer comprimento

<details>
 <summary>Ver resposta</summary>
 
    Resposta: c
    
    Explicação: De acordo com a sintaxe do nome da variável C, não pode começar com um dígito.

 
</details>

---

### Sanfoundry Global Education & Learning Series - C Linguagem de programação.

[Aqui está a lista dos melhores livros de referência em linguagem de programação C.](http://www.sanfoundry.com/best-reference-books-c-programming-data-structures-algorithms/)

