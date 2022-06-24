void Studi_kasus :: proses(){
  cout << "\n=====================";
  cout << "\n   Menyimpan Data\n";
  cout << "---------------------\n";
  cout << "\nLagi niympen data nihhh\n";
  nim = new int[5];
  nama = new string[5];
  for(int i = 0; i < 5; i++){
    *nim = nimMhs[i]; // Pointer reference nim
    nim += 1;
    *nama = namaMhs[i]; // Pointer reference nim
    nama += 1;
  }
}