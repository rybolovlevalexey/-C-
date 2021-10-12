for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < n - 1; ++j){
            int i1 = a[j], i2 = a[j + 1];
            if (a[j] > a[j + 1]){
                a[j] = i2;
                a[j + 1] = i1;
            }
        }
    }
