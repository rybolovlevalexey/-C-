//Пишите вашу рекурсивную функцию f здесь



void f(int n){
    if (n == 1){
        int number;
        cin >> number;
        cout << number << " ";
    } else {
        int number;
        cin >> number;
        f(n - 1);
        cout << number << " ";
    }
}
