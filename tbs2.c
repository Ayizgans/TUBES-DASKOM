#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Siswa {
    char username[50];
    char password[50];
    char nama[100];
    // Informasi lain yang relevan
}data_siswa;

struct PaketBelajar {
    char jenjang[50];
    char guru[100];
    char mapel[100];
    // Informasi lain yang relevan
}paket;

struct JadwalBelajar {
    char hari[20];
    char jam[20];
    // Informasi lain yang relevan
}jadwal;

int admin ();
int siswa ();
int pengajar ();
int menu();

int main ()
{
    menu ();
    return 0;
}

int menu()
{
    system ("cls");
    int pilihan;

    printf ("siapa yang masuk?\n");
    printf ("1. Admin\n");
    printf ("2. siswa\n"); 
    printf ("3. pengajar\n");
    printf ("Masukkan pilihan Anda: "); scanf ("%d", &pilihan);

    if (pilihan == 1)
    {
        admin ();
    } if (pilihan == 2)
    {
        siswa ();
    } if (pilihan == 3)
    {
        pengajar ();
    }
    

    return 0;
}

int admin_list ();

int admin ()
{
    system ("cls");
    char user[20], pass[20], baru[20];

    while (1)
    {
        printf("\t===LOGIN===");
    printf("\n1. masukan username \t: "); scanf ("%s", &user);
    printf("\n2. masukan password \t: "); scanf ("%s", &pass);

    if(strcmp(user, "admin")==0 && strcmp(pass, "admin")==0)
    {
        admin_list ();
        return 0;
    }
    else
    {
        printf("\nUsername atau password salah!!\n\n");
        printf("Silahkan Ulangi\n");
    }
    }
}

int pengajar ()
{
    char user[20], pass[20], baru[20];

    while (1)
    {
        printf("\t===LOGIN===");
    printf("\n1. masukan nama anda \t: "); scanf ("%s", &user);
    printf("\n2. masukan password \t: "); scanf ("%s", &pass);

    if(strcmp(user, "cihuy")==0 && strcmp(pass, "naaah")==0)
    {
        printf ("login berhasil");
        return 0;
    }
    else
    {
        printf("\nUsername atau password salah!!\n\n");
        printf("Silahkan Ulangi\n");
    }
    }
}

int siswa ()
{
    char user[20], pass[20];
    int attempt = 0;

    do {
        printf("\t===LOGIN===\n");
        printf("1. Masukkan username \t: "); scanf("%s", user);
        printf("2. Masukkan password \t: "); scanf("%s", pass);

        if(strcmp(user, "siswa") == 0 && strcmp(pass, "punten") == 0)
        {
            printf("Login berhasil!\n");
            return 0;
        }
        else
        {
            printf("\nUsername atau password salah!!\n");
            printf("Silahkan Ulangi\n");
            attempt++;
        }
    } while(attempt < 3);

    printf("Anda telah mencoba 3 kali. Akses ditolak.\n");
    return 0;
}

int admin_list ()
{
    system ("cls");

    int pilihan; 

    printf ("====LIST====\n");
    printf ("1. Lihat data siswa mendaftar\n");
    printf ("2. Tambahkan jenjang pendidikan\n");
    printf ("3. Tambahkan paket belajar guru\n");
    printf ("4. Tambahkan jadwal belajar\n");
    printf ("5. Hitung penghasilan admin dan pengajar\n");
    printf ("6. penghasilan admin\n");
    printf ("7. log out\n");
    printf ("masukkan pilihan anda: "); scanf ("%d", &pilihan);

    if (pilihan == 1)
    {
        system ("cls");
        data_siswa_mendaftar ();
    } if (pilihan == 2)
    {
        system ("cls");
        menambah_jenjang_pendidikan ();
    } if (pilihan == 3)
    {
        system ("cls");
        penambahkan_paket_belajar_guru ();
    }if (pilihan == 4)
    {
        system ("cls");
        penambahan_jadwal_belajar ();
    } if (pilihan == 5)
    {
        system ("cls");
        pemasukan_gaji ();
    } if (pilihan == 6)
    {
        system ("cls");
        penghasilan_admin ();
    } if (pilihan == 7)
    {
        menu ();
    }
    return 0;
}

void data_siswa_mendaftar ()
{
    
    
}

void menambah_jenjang_pendidikan ()
{
    return 0;
}

void penambahkan_paket_belajar_guru ()
{
    return 0;
}

void penambahan_jadwal_belajar ()
{
    return 0;
}

void pemasukan_gaji ()
{
    return 0;
}

void penghasilan_admin ()
{
    return 0;
}
