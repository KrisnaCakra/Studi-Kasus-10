using namespace std;

class Studi_kasus{
  public:
    void input();
    void proses ();
    void output ();
  private:
    int *nim; //menggunakan Operator reference nim
    int nimMhs[5];
    string *nama; //menggunakan Operator reference nama
    string namaMhs[5];
};

void Studi_kasus :: input(){
  cout << "=============================================="<<endl;
  cout << "|\tInput Data Mahasiswa Yang Berhasil Masuk |\n";
  cout << "|\t\tBabak Final Lomba Parmatika \t\t |\n";
  cout << "----------------------------------------------";
  for (int i = 0; i < 5; i++){
    cout << endl;
    cout << "Masukkan NIM Mahasiswa  : ";
    cin >> nimMhs[i];
    cout << "Masukkan Nama Mahasiswa : ";
    cin.ignore();
    getline(cin, (namaMhs[i]));
  }
}