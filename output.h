 void Studi_kasus :: output(){
  nim -= 5 ; //Pengisian dan Pengurangan contoh nim = nim - 1
  nama -= 5; //Pengisian dan Pengurangan contoh nim = nim - 1
  cout << "\n\nKelompok STORMI :" << endl; 
  cout << "1. Krisna Cakra NIngrat (449) \n2. Anela Indra (454) \n3. Sasqia Aulia Nur Aini (456)\n" << endl;
  cout << "\n========================";
  cout << "\n    Menampilkan Data \n";
  cout << "------------------------\n";
  for (int i = 0; i < 5; i++) {
    cout << "\nNama ke-" << i+1 << " : ";
    cout << *nama ;
    nama += 1; //Pengisian dan Penambahan contoh nama = nama + 1
    cout << "\nNim       : "<< *nim ;
    nim += 1; //Pengisian dan Penambahan contoh nim = nim + 1
  }
  cout << "\n========================\n";
  cout<<endl;
}