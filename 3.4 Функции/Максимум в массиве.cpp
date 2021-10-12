//пишите вашу фукнцию get_max здесь

int get_max(int n, int sp[]){
    int maximum = 0;
    int index = 0;
    for (int i = 0; i < n; i++){
        if (i == 0 || sp[i] > maximum){
            maximum = sp[i];
            index = i;
        }
    }
    return index;
}
