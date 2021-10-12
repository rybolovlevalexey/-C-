void my_sort(int n, int sp[]){
        for (int i = 0; i < n; i++){
            for (int j = 0; j + 1 < n; j++){
                if (sp[j] <= sp[j + 1]){
                    int a = sp[j];
                    int b = sp[j + 1];
                    sp[j] = b;
                    sp[j + 1] = a;
                }
            }
        }
}
