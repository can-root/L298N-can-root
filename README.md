L298N DC motor sürücü kütüphanesidir.

Kullanım:

1-Kütüphaneyi içe aktarıp pinleri sırasıyla giriyoruz.Buradaki ilk 2 pin motor 1 in 1. ve 2. yönünü kontrol ediyor.
Sıradaki iki pin ise motor 2 nin 1. ve 2. yönünü kontrol ediyor.Son iki pin ise sırasıyla motor1 ve motor2 nin hızını kontrol ediyor(enb pinleri).

![resim](https://github.com/user-attachments/assets/759689e8-9276-49f8-9afc-1c8a8b03b51e)


2-Motorları dörtlü bloklar halinde [motor1 in yönü, motor2 nin yönü, motor1 nin hızı ve motor2 nin hızı] kontrol ediyoruz.

![resim](https://github.com/user-attachments/assets/8fcf3153-aed3-4069-995f-7206d27a6cc1)

3-Fonksiyonlar

motorSurucu.motor1Yonu(1); gibi yön fonksiyonlarının içine 1 girilirse pozitif yönde -1 girilirse negatif yönde dönerler.

motorSurucu.motor1Hiz(128); gibi hız fonksiyonlarında ise 0-255 arasında sayılar girilerek hızı PWM ile ayarlanır.

motorSurucu.sagaDurdur();  Sağ motoru durdurur.


motorSurucu.solaDurdur();  Sol motoru durdurur.  


motorSurucu.durdur(); Her iki motoruda durdurur.

motorSurucu.ileriGit(128);

motorSurucu.geriGit(128); 
                          Eğer basit bir araba modeli yapıldıysa bu şekilde yönlendirme işlemleride yapılabilir.
motorSurucu.solaDon(128);

motorSurucu.sagaDon(128);

4-Örnek

![resim](https://github.com/user-attachments/assets/6587ee66-41b8-4e68-b1c8-633e84907618)

















