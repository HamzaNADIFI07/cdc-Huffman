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

