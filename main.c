#include <stdio.h>
#include "include/type.h>"
#include "include/matrix.h" // Inclure le fichier d'en-tête contenant les opérations sur les matrices

int main() {
    // Déclarer les variables nécessaires
    int choice;
    Matrix result;

    // Afficher le menu
    printf("Menu:\n");
    printf("1. Addition de matrices\n");
    printf("2. Substraction de matrices\n");
    printf("3. Multiplication de matrices\n");
    printf("4. Transposition de matrice\n");
    printf("5. Mltiplication d'une matrice par un scalaire\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choice);

    // Effectuer l'opération en fonction du choix de l'utilisateur
    switch (choice) {
        case 1:
            // Effectuer l'addition de matrices et stocker le résultat dans 'result'
            // Exemple : result = add_matrices(matrix1, matrix2);
            break;
        case 2:
            // Effectuer la multiplication de matrices et stocker le résultat dans 'result'
            // Exemple : result = multiply_matrices(matrix1, matrix2);
            break;
        case 3:
            // Effectuer la transposition d'une matrice et stocker le résultat dans 'result'
            // Exemple : result = transpose_matrix(matrix);
            break;
        default:
            printf("Choix invalide.\n");
            return 1;
    }

    // Écrire le résultat dans un fichier
    FILE *file = fopen("result.txt", "w");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    // Écrire le résultat dans le fichier
    // Exemple : write_matrix_to_file(result, file);

    // Fermer le fichier
    fclose(file);

    printf("Résultat écrit dans 'result.txt'.\n");

    return 0;
}
