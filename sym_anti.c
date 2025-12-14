int est_symetrique(int **T, int nl, int nc) {
    int i, j ;
    if (nl != nc) {
        printf("\n La matrice n'est pas carrée, donc elle ne peut pas être symétrique ou antisymétrique.") ;
        return -1 ;
    }

    int sym = 1, antisym = 1 ;
    for (i = 0 ; i < nl ; i++) {
        for (j = 0 ; j < nc ; j++) {
            if (T[i][j] != T[j][i])
                sym = 0 ;
            if (T[i][j] != -T[j][i])
                antisym = 0 ;
        }
    }

    if (sym)
        printf("\n La matrice est symétrique.") ;
    else if (antisym)
        printf("\n La matrice est antisymétrique.") ;
    else
        printf("\n La matrice n'est ni symétrique ni antisymétrique.") ;

    return 0 ;
}