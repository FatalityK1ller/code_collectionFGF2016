pai(paulo, ana).
pai(paulo, pedro).
pai(paulo, tiago).
pai(jose, cecilia).
pai(jose, lucas).
pai(inacio, lara).
pai(lucas, beatriz).
pai(pedro, sofia).
pai(tiago, joao).
pai(tiago, miguel).
mae(maria, ana).
mae(maria, pedro).
mae(maria, tiago).
mae(lia, lucas).
mae(lia, cecilia).
mae(lucia, lara).
mae(ana, beatriz).
mae(cecilia, joao).
mae(cecilia, miguel).
mae(lara, sofia).

pais(Y, X) :- pai(Y, X); mae(Y, X).

irmaos(X, Y) :- pai(P, X), (pai(P, Y), mae(M, X), mae(M, Y)), X \= Y.

avo(X, Y) :- pai(X, Z), pai(Z, Y).

avoh(X, Y) :- mae(X, Z), mae(Z, Y).

primos(X, Y) :- irmaos(P1, P2), pais(P1, X), pais(P2, Y), X \= Y.

tios(X, Y) :- irmaos(P1, X), pais(P1, Y).