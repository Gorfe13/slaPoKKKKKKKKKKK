int main() {
    float nota;

    // Solicita ao usuário para inserir a nota
    cout << "Digite a nota (0 a 100): ";
    cin >> nota;

    // Verifica a classificação com base nos critérios
    if (nota >= 90) {
        cout << "Classificacao: A" << endl;
    } else if (nota >= 80) {
        cout << "Classificacao: B" << endl;
    } else if (nota >= 70) {
        cout << "Classificacao: C" << endl;
    } else if (nota >= 60) {
        cout << "Classificacao: D" << endl;
    } else {
        cout << "Classificacao: F" << endl;
    }

    return 0;
}