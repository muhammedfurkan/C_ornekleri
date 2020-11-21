// Bu ödev https://www.youtube.com/watch?v=Z8rrIPvwTNk adresinde sorulan sorulara cevap olarak hazırlanmıştır
/**
 * Yazar:                   Muhammedfurkan
 * Oluşturulma Tarihi:      20.11.2020      
 * (c) Copyright by muhammedfurkan.
 **/

#include <stdio.h>

void ogrenciBilgileri(void);
void yasHesapla(int yil);
void selamfcn(int yil);
void yukleme(void);
void ciftsayilar(void);

int main(void)
{

    ogrenciBilgileri();
    yasHesapla(1982);
    selamfcn(3);
    yukleme();
    ciftsayilar();
    return 0;
}

void ogrenciBilgileri(void)
{
    char ad[] = "Derya";
    char soyad[] = "Deniz";
    char ogr_no[] = "123456";
    char bolum[] = "Yazilim Muh";
    printf("Adi: %s\nSoyadi: %s\nOgrenci No: %s\nBolumu: %s\n", ad, soyad, ogr_no, bolum);
}

void yasHesapla(int yil)
{

    int yas;
    yas = 2020 - yil;
    printf("Yasiniz: Merhaba sen %d yasindasin.Bereketli omurler dilerim :)\n", yas);
}

void selamfcn(int saat)
{
    if (saat < 5 && saat < 10)
    {
        printf("Hayirli Sabahlar\n");
    }
    else if (saat < 10 && saat < 17)
    {
        printf("Hayirli Gunler\n");
    }
    else if (17 <= saat && saat < 22)
    {
        printf("Hayirli Aksamlar\n");
    }
    else if (22 <= saat && saat <= 5)
    {
        printf("Hayirli Geceler\n");
    }
}

void yukleme(void)
{
    int i = 0;
    for (i = 0; i <= 10000; i++)
    {
        printf("\rYukleniyor %d", i / 100);
    }
    printf("\nIslem tamamlandi\n");
}

void ciftsayilar(void)
{
    int i = 0;
    while (1)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
        if (i == 2020)
        {
            break;
        }
    }
}