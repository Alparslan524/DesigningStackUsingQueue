#include <iostream>
using namespace std;

struct Dugum {
    int veri;
    Dugum* sonraki;
};
struct Kuyruk {
    Dugum* bas;
    Dugum* son;
    void olustur();
    void kapat();
    void ekle(int);
    int cikar();
    bool bosMu();
};

struct Yigin {
    Kuyruk k1, k2, k = k1;           
    void olustur();          
    void kapat();            
    void ekle(int);          
    int cikar();             
    bool bosMu();            
    int tepe();              
    void yazdir();           
    int yigin_boyut;
};

Yigin* y = new Yigin();
Kuyruk* ku = new Kuyruk();
void yiginCikar(Yigin* s);
void siraliEkle(Yigin* s, int x);

int main()
{

    cout << "Orjinal Yigin: ";
    y->ekle(3);
    y->ekle(1);
    y->ekle(7);
    y->ekle(4);
    y->ekle(8);
    y->yazdir();
    cout << endl << endl;

    cout << "yiginCikar Fonksiyonu Cagiriliyor" << endl << endl;
    
    cout << "Sirali Yigin: ";
    yiginCikar(y);
    y->yazdir();

}

void yiginCikar(Yigin* s)
{
    if (!s->bosMu())
    {
        int x = s->cikar();
        yiginCikar(s);
        siraliEkle(s, x);
    }
}

void siraliEkle(Yigin* s, int x)
{
    if(s->bosMu() or x > s->tepe())
    {
        s->ekle(x);
        return;
    }
    int temp = s->cikar();
    siraliEkle(s,x);
    s->ekle(temp);

}



void Kuyruk::olustur()
{
    bas = NULL;
    son = NULL;
}
void Kuyruk::kapat()
{
    Dugum* p;
    while (bas)
    {
        p = bas;
        bas = bas->sonraki;
        delete p;
    }
}
void Kuyruk::ekle(int deger)
{
    Dugum* yenidugum = new Dugum;
    yenidugum->veri = deger;
    yenidugum->sonraki = NULL;
    if (bas == NULL)
    {
        bas = yenidugum;
        son = bas;
    }
    else
    {
        son->sonraki = yenidugum;
        son = yenidugum;
    }
}
int Kuyruk::cikar()
{
    Dugum* ustdugum;
    int gecici;
    ustdugum = bas;
    bas = bas->sonraki;
    gecici = ustdugum->veri;
    delete ustdugum;
    return gecici;
}
bool Kuyruk::bosMu()
{
    return bas == NULL;
}


void Yigin::olustur()
{
    yigin_boyut = 0;
}
void Yigin::kapat()
{
    Dugum* p;
    while (y->k1.bas)
    {
        p = y->k1.bas;
        y->k1.bas = y->k1.bas->sonraki;
        delete p;
    }
}
void Yigin::ekle(int deger)
{
    yigin_boyut++;

    k2.ekle(deger);

    while (!k1.bosMu())
    {
        k2.ekle(k1.bas->veri);
        k1.cikar();
    }
    k1 = k2;
    k2 = k;
}
int Yigin::cikar()
{
    yigin_boyut--;
    if (k1.bosMu())
    {
        return 0;
    }
    k1.cikar();
    
}
bool Yigin::bosMu()
{
    return k1.bas == NULL;
}
int Yigin::tepe()
{
    if (k1.bosMu())
        return -11;
    return k1.bas->veri;
}
void Yigin::yazdir()//Yığını değil de k1i yazdırıyoruz. Çıkartırken de k2den çıkıyor
{  
    Dugum* temp = new Dugum();
    temp = y->k1.bas;
    for (int i = 1;i <= yigin_boyut;i++)
    {
        cout << temp->veri<<' ';
        temp = temp->sonraki;
    }
    delete temp;
}