# PSD - Esercitazione 11

### Esercizio 1

#### Esercizio 1a

Sviluppare la funzione mergeSortSoloStampe(int n) che stampa
la sequenza di operazioni necessarie per eseguire il merge sort iterativo di
un array di n elementi ("dal basso verso l'alto").
NOTE: la funzione stampa solo la descrizione delle chiamate a merge necessarie, ma non ordina un array.
Di seguito per n-m si intende il sottoarray dall'elemento con indice n all'elemento con indice m.
0-0 indica il sottoarray dall'elemento con indice 0 a quello con indice 0 (quindi di grandezza 1).
0-1 indica il sottoarray dall'elemento con indice 0 a quello con indice 1 (quindi di grandezza 2).
ecc.

#### Esercizio 1b

Sviluppare la funzione mergeSort in forma iterativa. Suggerimento: potete riutilizzare la funzione merge (vedi file caricati nel canale Teoria)

Come si individuano gli intervalli da fondere?
- curr_size: la dimensione corrente dei blocchi (1 → 2 → 4...)
- left_start: inizia da 0 e avanza a passi di 2 * curr_size
- left_end: left_start + curr_size - 1
- right_end: min(left_start + 2 * curr_size - 1, n - 1)

Scrivere inoltre un file main.c che utilizza le due funzioni.

### Esercizio 2

Si implementi, usando il progetto ADT Stack, un nuovo modulo “queue” basata sull’uso di due stack. Uno stack per la memorizzazione dei dati e uno di supporto per svolgere le operazioni della “queue”. Nello specifico, si implementino i seguenti operatori:
- newQueue: inizializza una nuova coda che utilizza i due stack
- isEmptyQueue: data una coda controlla che questa sia vuota o meno
- enqueue: data una coda e un item inserisce l’item nella coda
- dequeue: data una coda procede all’operazione di dequeue
- printQueue: data una coda stampa a video tutti i suoi item
Una volta terminato lo sviluppo del modulo, si prepari un makefile per compilare il progetto ed un file main.c che usa il modulo queue.
