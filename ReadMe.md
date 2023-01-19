# Designing Stack Using Queue

## Proje Amacı
Bağlantılı liste ile kuyruk veri yapısı tasarlanıyor. Tasarlanan kuyruk veri yapısı kullanılarak yığın veri yapısı tasarlanıyor. En son ise özyinelemeli fonksiyonlar ile yığındaki verilerin büyükten küçüğe sıralanması isteniyor. Bu programdaki temel amacımız budur.
*** 


## Kullanılan Metodlar
1. void yiginCikar(Yigin* s) => Özyinemeli bir fonksiyondur. Kendisini ve siraliEkle fonksiyonunu çağırabilir. Kullanım amacı ise yığından veri çıkarmaktır. 
2. void siraliEkle(Yigin* s, int x) => Özyinemeli bir fonksiyondur. Sadece kendisini çağırır. Kullanım amacı verileri kıyaslayıp sıralı bir şekilde yığına eklemektir.
***

## Veri Yapıları Ve Değişkenler
1. Kuyruk veri yapısı: Yığındaki verileri kuyrukta tuttuk. Veri eklerken ve çıkarırken kuyruğa ekledik ve çıkarttık.
2. Yığın veri yapısı: Kuyruk tipinde yığın tanımladık. Verileri sıralarken de yığınlardan yararlandık.
3. Özyinemeli Fonksiyon: Verileri yığından çıkarmak ve sıralı bir şekilde yığına eklemek için kullandık.
***

## Program Akışı
1. Kuyruk veri yapısı ve kuyruk kullanılarak oluşturulan yığın oluşturulmuştur (Yığın, kuyruk veri yapısı kullanılarak oluşturulduğu için veriler direk olarak kuyruğa eklenmiştir ve çıkartılırken de kuyruktan çıkartılmıştır.)
2. Daha sonra yığına sırasıyla 3,1,7,4,8 verileri eklenmiştir. Ve ekrana yazdırılmıştır. 
* Yığın: 8   4   7   1   3 
* Tepe Değeri: 3
3. Şimdi ise özyinemeli yıgınÇıkar fonksiyonu çağrılıyor.
X değişkeninde yığından çıkardığı değeri atıyor. (Yani 8)
Bir alt satıra geçiyor, kendisini çağırıyor (Özyinemeli fonksiyon) ve sıradaki değeri çıkartıyor. (4) 
4. Döngü bu şekilde devam ediyor ve en son 3 değerini çıkartıyor. Tekrar kendini çağırıyor ve s->bosMu false döndürdüğü için if bloğuna girmiyor. Bir önceki yani X'in 3 olduğu döngüye dönüyor ve siraliEkle fonksiyonunu 3 parametresi ile çağırıyor. 
Burada yığın boş olduğu için 3 değeri direkt olarak yığına ekleniyor ve return çalışıyor. 
5. Tekrardan yiginCikar fonksiyonuna dönülüyor fakat bu sefer X'in değeri 1 5. Tekrardan kaldığı yerden yani siraliEkle fonksiyonundan devam ediyor. 
siraliEkle fonksiyonunda if bloğuna girmiyor. Çünkü yığın boş değil ve 1 3'ten küçük. Eğer 3'ten büyük bir eleman olsaydı yığına direkt ekleyecekti.
6. Sıradaki kodda 3'ü yığından çıkartıyor ve kendini çağırarak 1'i yığına ekliyor. Daha sonra kaldığı yerden devam ediyor yani s->ekle(temp) ile yığına 3'ü tekrar ekliyor. Böylece yığın 3-1 halini alıyor ve sıralı bir şekilde yazılmış oluyor. 
7. Program tekrar kaldığı yere geri dönüyor (yiginCikar'ın içinde X'in 7 olduğu yere)
Bu işlemleri 7 için de tekrar ediyor ve aynı şekilde diğer elemanlar için tekrar ediyor. 
Program bittiğinde yığının son hali ise amacına ulaşarak şu şekilde oluyor;
* Yığın: 8 7 4 3 1
***
## Sonuç
Kuyruk ve yığın veri yapılarını iyi bir şekilde öğrendiğimi düşünüyorum. Aklımda soru işareti kalmadı.
Bu ödevde olduğu gibi bir veri yapısı ile başka bir veri yapısını tasarlamayı öğrendim.
Daha önceden biliyordum fakat bu ödevle birlikte özyinemeli fonksiyonların pekiştiğini ve kendimi geliştirdiğimi düşünüyorum.
***
## Kullanılan Diller
* C++
***


# Alparslan Aydoğan
- [GitHub](https://github.com/Alparslan524)
- [Linkedin](https://www.linkedin.com/in/alparslan-aydoğan-6038771bb/)
***
