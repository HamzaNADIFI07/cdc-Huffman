# TP3 — Algorithme de Huffman

## Mise en œuvre de l’algorithme de Huffman

### Q1.3:

Après avoir implémenter la fonction `create_huffman_forest` du fichier `huffman_algo.c`, et en compilant le programme `main`, présent dans le répertoire racine du projet, via la commande `make`.

**L'éxecution du premier test avec la commande `./main tests/test1`, affiche le résultat suivant:**

```bash
[5, 97] [1, 98] [3, 99] 
[5, 97] [3, 99] [1, 98]
```
On peut bien voir que dans ces résultats sur le fichier `test/test1` et qui contient la chaine de caractère suivante **`caaccabaa`**, que on affiche dans un premier lieu les feuilles de l'arbre avec à gauche le **nombre d'occurence** du caractère et à droite son **code ascii** et triées en ordre croissant en fonction des valeurs ascii associée aux feuilles, et dans la deuxième ligne on affiche ces meme feuilles mais en version triée en ordre croissant en fonction des nombres d'occurences.

**`caaccabaa`:**

| Caractère | Code ASCII | Nombre d'occurrences |
|-----------|------------|----------------------|
| a         | 97         | 5                    |
| b         | 98         | 1                    |
| c         | 99         | 3                    |


**L'éxecution du deuxième test avec la commande `./main tests/test3`, affiche le résultat suivant:**

```bash
[6, 97] [1, 98] [4, 110] [2, 115] 
[6, 97] [4, 110] [2, 115] [1, 98] 
```
On peut bien voir que dans ces résultats sur le fichier `test/test3` et qui contient la chaine de caractère suivante **`ananasbananas`**, que on affiche dans un premier lieu les feuilles de l'arbre avec à gauche le **nombre d'occurence** du caractère et à droite son **code ascii** et triées en ordre croissant en fonction des valeurs ascii associée aux feuilles, et dans la deuxième ligne on affiche ces meme feuilles mais en version triée en ordre croissant en fonction des nombres d'occurences.

**`ananasbananas`:**
| Caractère | Code ASCII | Nombres d'occurrences |
|-----------|------------|-----------------------|
| a         | 97         | 6                     |
| b         | 98         | 1                     |
| s         | 115        | 2                     |
| n         | 110        | 4                     |

### Q1.4:

- À quelle condition doivent s’arrêter les itérations ?

Les itérations doivent s'arrêter quand il ne reste plus qu’un seul arbre à combiner 

```C
nb_leaves + nb_nodes - start_nodes == 1
```

- À chaque itération, comment évoluent start_nodes, nb_nodes et nb_leaves, en fonction des résultats renvoyés par la fonction get_min_nodes ?

    - **nb_nodes** augmente à chaque création de noeud.

    - **start_nodes** augmente chaque fois qu’un noeud est utilisé.

    - **nb_leaves** diminue quand une feuille est utilisée.

- À quelle position dans nodes est stocké le nouveau nœud créé à chaque itération ?

La position dans nodes où est stocké le nouveau noeud créé à chaque itération est `nodes[nb_nodes]`.

### Q1.6:

Après avoir compilé avec la commande `make`, et executer le test avec la commande `./test_huffman`, j'ai eu comme résultat:

```bash
ALL TESTS PASSED
Tests run: 2 (including 520 assertions)
```
### Q1.7:

Après avoir décommenter les lignes de `main.c` qui construisent et affichent un arbre de Huffman. 

En lançant le programme sur le fichier `tests/test1` via la commande `./main tests/test1`.

J'ai eu comme résultat:

```bash
[5, 97] [1, 98] [3, 99] 
[5, 97] [3, 99] [1, 98] 

        [5, 97]
(9)
                [3, 99]
        (4)
                [1, 98]
```

Et en lançant le programme sur le fichier `tests/test3` via la commande `./main tests/test3`.

J'ai eu comme résultat:

```bash
[6, 97] [1, 98] [4, 110] [2, 115] 
[6, 97] [4, 110] [2, 115] [1, 98] 

                [4, 110]
        (7)
                        [2, 115]
                (3)
                        [1, 98]
(13)
        [6, 97]
```
