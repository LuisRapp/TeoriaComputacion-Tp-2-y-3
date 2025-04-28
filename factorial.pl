:- initialization(main).

main :- 
    factorial(3, Resultado),
    write('El factorial es: '),
    write(Resultado),
    nl.

% Base case: el factorial de 0 es 1
factorial(0, 1).

% Regla recursiva: factorial(N) = N * factorial(N-1)
factorial(N, F) :-
    N > 0,
    N1 is N - 1,
    factorial(N1, F1),
    F is N * F1.