*Bu proje yfirat tarafından 42 müfredatının bir parçası olarak oluşturulmuştur.*

# Libft

## Açıklama

Libft, 42 müfredatının ilk projesidir. Bu projedeki temel amaç ise C dilinde ki standart kütüphane fonksiyonlarını sıfırdan yeniden kodlayarak ortaya kişisel bir kütüphane çıkarmaktır.

** Projenin Hedefleri **

* Standart fonksiyonların çalışma mantığını derinlemesine anlamak.
* C dilinde veri yapıları (struct), pointer konusu üstünde yetkinlik kazanmak.
* Gelecekte 42 projelerinde kullanılacak olan bir kütüphane oluşturmak.

## Talimatlar

Proje standart bir `Makefile` kullanılarak derlenir. Terminal üstünden aşağıdaki komutları kullanabilirsiniz.

* **Kütüphaneyi Oluşturmak İçin:**

 ```bash
  make
 ```
* **Oluşturulan Obje Dosyalarını Silmek İçin:**

 ```bash
  make clean
 ```
* **Her Şeyi Silmek İçin: (Arşiv ve Obje Dosyaları):**
 ```bash
  make fclean
 ```

* **Kütüphaneyi Temizleyip Yeniden Derlemek İçin:**
 ```bash
  make re
 ```

### Kullanım

Libft aslında bir kütüphanedir bu yüzden tek başına çalıştırılması mümkün değilir.

1. `libft.a` dosyasını `make` komutuyla oluşturunuz.
2. Kodlarınıza header dosyasını ekleyiniz. `#include "libfth.h"`
3. Derlenme sırasında kütüphaneyi linkleyiniz.

 ```bash
  cc main.c -L. lft
 ```

### Kütüphanenin Detaylı Anlatımı

Kütüphane içerisinde fonksiyonlar şu kategorilere ayrılmaktadır.

1. Standart Libc Fonksiyonları

Bu fonksiyonlar man kısmından yardımla birlikte yazılmıştır.

* **Karakter Kontrolü:** `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_isalpha`.
* **Bellek Yönetimi:** `ft_memcmp`, `ft_memchr`, `ft_memmove`, `ft_memset`, `ft_bzero`, `ft_memcpy`.
* **String İşlemleri:** `ft_strnstr`, `ft_strncmp`, `ft_strrchr`, `ft_strchr`, `ft_strlcat`, `ft_strlcpy`, `ft_strlen`.
