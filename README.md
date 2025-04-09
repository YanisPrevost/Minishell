# Minishell

## Description
Minishell est une implémentation simplifiée d'un shell Unix écrit en C. Ce projet reproduit les fonctionnalités de base d'un interpréteur de commandes comme bash, permettant d'exécuter des commandes, de gérer les variables d'environnement et d'utiliser des redirections.

## Fonctionnalités

### Commandes intégrées
- `cd` : Changer de répertoire
- `env` : Afficher les variables d'environnement
- `setenv` : Définir une variable d'environnement
- `unsetenv` : Supprimer une variable d'environnement
- `exit` : Quitter le shell

### Exécution
- Exécution de commandes avec chemin absolu ou relatif
- Recherche automatique dans le PATH
- Gestion des erreurs d'exécution

### Redirections
- `>` : Redirection de sortie standard
- `<` : Redirection d'entrée standard
- `>>` : Redirection de sortie standard en mode ajout

### Interface
- Affichage d'un prompt coloré avec le répertoire courant
- Gestion des entrées utilisateur

## Installation

```bash
# Cloner le repository
git clone [URL du repository] Minishell
cd Minishell

# Compiler le projet
make
```

## Utilisation

```bash
./mysh
```

Une fois lancé, vous verrez apparaître un prompt `-> Minishell--/chemin/courant ->` où vous pourrez entrer vos commandes.

### Exemples d'utilisation

```bash
-> Minishell--/home/user -> ls -l
# Affiche le contenu du répertoire en format détaillé

-> Minishell--/home/user -> cd Documents
# Change le répertoire courant vers Documents

-> Minishell--/home/user/Documents -> echo "Hello" > file.txt
# Écrit "Hello" dans le fichier file.txt

-> Minishell--/home/user/Documents -> cat file.txt
# Affiche le contenu de file.txt

-> Minishell--/home/user/Documents -> setenv MA_VAR valeur
# Définit la variable d'environnement MA_VAR

-> Minishell--/home/user/Documents -> env
# Affiche toutes les variables d'environnement

-> Minishell--/home/user/Documents -> exit
# Quitte le shell
```

## Structure du projet

- `code/` : Contient les fichiers source du shell
  - `main.c` : Point d'entrée du programme
  - `minishell1.c` : Boucle principale du shell
  - `cd.c` : Implémentation de la commande cd
  - `env.c` : Gestion des variables d'environnement
  - `executing.c` : Exécution des commandes
  - `redir.c` : Gestion des redirections
  - `parasite.c` : Fonctions utilitaires diverses
  - `my.h` : Fichier d'en-tête principal

- `lib/my/` : Bibliothèque de fonctions utilitaires
  - Fonctions de manipulation de chaînes de caractères
  - Fonctions d'affichage et de formatage

## Projet éducatif
Ce projet a été développé dans le cadre d'un projet EPITECH (2023) et vise à comprendre le fonctionnement interne d'un shell Unix.

## Auteur
Yanis Prevost - EPITECH 2023