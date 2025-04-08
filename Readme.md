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
### Q1.11:
Après avoir implémenter la fonction `huffman_decoding`, et en testant avec les commandes suivantes:

```bash
./huffman -c tests/test1 test1.huff # comprésser le fichier tests/test1
./huffman -d test1.huff test1.out # comprésser le fichier test1.huff
diff tests/test1 test1.out # comparer les bits du fichier test1.out avec les bits du fichier original tests/test1
```
J'ai eu comme résultat:

```bash
1d0
< caaccabaa
\ No newline at end of file
```
Ce qui veux dire que le fichier `test1.huff` a été décompresser avec succès.

## Expériences

Après avoir repris les fichiers du **TP entropie** pour lesquels nous avions calculé l’entropie et en appliquant leur la compression avec l’algorithme de Huffman.

Pour executer le programme de compression des fichiers stockés dans le dossier `inputs/fichiers_exp`, il faudra se positionner dans le dossier inputs, et executer les commandes suivantes:

```bash
make # Pour compresser et décompresser les fichiers
make compare_size # Pour afficher les tailles des differents fichiers
make clean # Pour supprimer les fichiers compressés et décompressés
```
En ce qui concerne les tailles des fichiers, j'ai eu comme résultat:

```bash

--- Comparaison des tailles (original vs compressé) ---
4208640 fichiers_exp/archive_tar.tar
2606675 encode/archive_tar.huf
170358 fichiers_exp/archive_zip.zip
171613 encode/archive_zip.huf
28070 fichiers_exp/archive_zip2.zip
29252 encode/archive_zip2.huf
7375183 fichiers_exp/image1.jpg
7371783 encode/image1.huf
5846 fichiers_exp/image2.png
6823 encode/image2.huf
33253334 fichiers_exp/image3.bmp
30714114 encode/image3.huf
136121 fichiers_exp/audio1.mp3
136975 encode/audio1.huf
387342 fichiers_exp/audio2.ogg
387642 encode/audio2.huf
1076188 fichiers_exp/audio3.wav
931537 encode/audio3.huf
```

Ce qui ne correspond pas à ce qui était attendu car l'entropie donne une limite théorique du taux de compression, dans le cas idéal où chaque symbole est codé selon sa probabilité exacte.
