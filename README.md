# 🖨️ ft_printf

## 📝 Présentation

**ft_printf** est une **réimplémentation de la fonction `printf()`** de la **libc**.  
Ce projet permet d’explorer les **fonctions variadiques**, la **gestion de formats** et l’**affichage formaté avancé**.  

L'objectif est de créer une **bibliothèque `libftprintf.a`**, contenant une fonction `ft_printf()` qui reproduit le comportement de `printf()` avec certaines spécifications.

---

## 🛠️ Fonctionnalités

### ✅ Partie Obligatoire :
- **Gestion des conversions suivantes** :
  - `%c` : Affiche un **caractère**.
  - `%s` : Affiche une **chaîne de caractères**.
  - `%p` : Affiche un **pointeur** en **hexadécimal**.
  - `%d` / `%i` : Affiche un **entier signé**.
  - `%u` : Affiche un **entier non signé**.
  - `%x` : Affiche un **nombre en hexadécimal (base 16, minuscule)**.
  - `%X` : Affiche un **nombre en hexadécimal (base 16, majuscule)**.
  - `%%` : Affiche un **`%`** littéral.
- **Utilisation des fonctions variadiques** (`va_start`, `va_arg`, `va_end`).
- **Aucune gestion du buffer interne** comme dans `printf()`.
- **Création d'une bibliothèque `libftprintf.a`** avec `ar`.

---

## 📌 Technologies Utilisées

- **C (Norminette respectée)**
- **Gestion des arguments variadiques (`stdarg.h`)**
- **Manipulation avancée des chaînes (`malloc`, `free`, `write`)**
- **Création d’une bibliothèque (`ar`, `ranlib`)**
- **Optimisation de l'affichage et de la gestion mémoire**

---

## 🏗️ Structure du Projet

📂 headers  
┣ 📜 ft_printf.h  
┣ 📜 libft.h  

📂 libft  

📂 srcs  
┣ 📜 ft_utils.c  
┣ 📜 ft_utils_2.c  
┣ 📜 ft_utils_3.c  
┣ 📜 ft_utils_4.c  
┣ 📜 ft_utils_5.c  
┣ 📜 ft_printf.c  

📜 mytest.c  
📜 .gitignore  
📜 Makefile  
📜 Subject_PRINTF.pdf  

---

## 🔥 Difficultés Rencontrées

- **Gestion correcte des fonctions variadiques (`va_start`, `va_arg`, `va_end`)**.  
- **Affichage des pointeurs (`%p`) en format hexadécimal correct**.  
- **Gestion des **précisions et largeurs** pour tous les types de conversions**.  
- **Optimisation des performances** pour éviter les **appels répétés à `write()`**.  
- **Validation des entrées pour éviter des comportements indéfinis**.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :  
   ```bash
   git clone https://github.com/ton-repo/ft_printf.git
   cd ft_printf
2. **Compiler le projet** :
   ```bash
   make
3. **Compiler et exécuter un test** :
   ```bash
   gcc main.c libftprintf.a -o test_printf
   ./test_printf
4. **Nettoyer les fichiers compilés** :
   ```bash
   make clean
   make fclean

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
