r[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int foundIndex = Searching(arr, n, key);

    printf("%d", foundIndex);