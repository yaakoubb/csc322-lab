 A = atoi(argv[1]);
    B = atoi(argv[2]);
    sel0 = atoi(argv[3]);
    sel1 = atoi(argv[4]);
    sel2 = atoi(argv[5]);
    printf("A = %d, B = %d, sel0 = %d, sel1 = %d, sel2 = %d\n", A, B, sel0, sel1, sel2);
    add_sub(A, B, sel0, &Result);
    printf("add_sub(A, B, sel0) = %d\n", Result);
    add_sub(A, B, sel1, &Result);
    printf("add_sub(A, B, sel1) = %d\n", Result);
    add_sub(A, B, sel2, &Result);
    printf("add_sub(A, B, sel2) = %d\n", Result);
    or(A, B, &Result);
    printf("or(A, B) = %d\n", Result);
    and(A, B, &Result);
    printf("and(A, B) = %d\n", Result);
    xor(A, B, &Result);
    printf("xor(A, B) = %d\n", Result);
    mul(A, B, &Result);
    printf("mul(A, B) = %d\n", Result);
    divs(A, B, &Result);
    printf("div(A, B) = %d\n", Result);
    return 0;