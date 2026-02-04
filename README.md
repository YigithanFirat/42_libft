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

Libft aslında bir kütüphanedir bu yüzden tek başına çalıştırılması mümkün değildir.

1. `libft.a` dosyasını `make` komutuyla oluşturunuz.
2. Kodlarınıza header dosyasını ekleyiniz. `#include "libfth.h"`
3. Derlenme sırasında kütüphaneyi linkleyiniz.

 ```bash
  cc main.c -L. lft
 ```

### Kütüphanenin Detaylı Anlatımı

Kütüphane içerisinde fonksiyonlar şu kategorilere ayrılmaktadır.

**1. Standart Libc Fonksiyonları**

Bu fonksiyonlar man kısmından yardımla birlikte yazılmıştır.

* **Karakter Kontrolü:** `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_isalpha`.
* **Bellek Yönetimi:** `ft_memcmp`, `ft_memchr`, `ft_memmove`, `ft_memset`, `ft_bzero`, `ft_memcpy`.
* **String İşlemleri:** `ft_strnstr`, `ft_strncmp`, `ft_strrchr`, `ft_strchr`, `ft_strlcat`, `ft_strlcpy`, `ft_strlen`.
* **Dönüştürme:** `ft_toupper`, `ft_tolower`, `ft_atoi`
* **Dinamik Bellek:** `ft_calloc`, `ft_strdup`

**2. Ek Yardımcı Fonksiyonlar**

Standart kütüphanelerde bulunmayan ancak sıkça ihtiyaç duyabileceğimiz fonksiyonlar:

* `ft_substr`: Bir stringin belirli bir bölgesini döndürür.
* `ft_strjoin`: İki stringi birleştirerek yeni bir string oluşturur.
* `ft_strtrim`: Stringin başındaki ve sonundaki karakterleri temizler.
* `ft_split`: Bir stringin ayırıcı karakter yardımıyla bu karaktere göre bölünmesini sağlar.
* `ft_itoa`: Bir integer değeri string formatına dönüştürmeyi sağlar.
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Belirtilen File Descriptor'a veri yazılmasını sağlar.

**3. Bağlı Listeler (Linked List)**

Veri koleksiyonlarını yönetmek için t_list yapısı ve fonksiyonları:

**Liste Yapısı:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

### Fonksiyon Detayları

* `ft_lstnew`: Yeni bir düğüm oluşturur. İçerik başlatılır.
* `ft_lstadd_front`: Listenin en başına yeni bir düğüm ekler.
* `ft_lstsize`: Listedeki toplam düğüm sayısını döndürür.
* `ft_lstlast`: Listenin son düğümü bulunur ve o döndürülür.
* `ft_lstadd_back`: Listenin sonuna yeni bir düğüm ekler.
* `ft_lstdelone`: Listenin içeriğini siler ve düğümü de serbest bırakır.
* `ft_lstclear`: Tüm listeyi siler ve belleği tamamen temizler.
* `ft_lstiter`: Listenin her düğümü üstünde verilen bir fonksiyonu çalıştırır.
* `ft_lstmap`: Listenin her düğümüne bir fonksiyon uygular ve sonuçlardan yeni bir liste oluşturur.

## Kaynaklar

Proje yazılırken dokümantasyon araştırması ve çeşitli yapay zekalardan destek alınarak proje ilerletildi.

* [C Standart Library Reference](https://www.tutorialspoint.com/c_standard_library/index.htm) - Standart fonksiyonların davranışlarını anlamak için temel kaynak.
* [Unix File Permissions](https://www.guru99.com/file-permissions-in-linux.html) - `open` fonksiyonu ve `0777` gibi izin bitlerinin mantığı üzerine rehber.
* [File Discriptor Research](https://en.wikipedia.org/wiki/File_descriptor) - File Discriptor biraz daha detaylı bilgi edinebilmek için bakıldı.
* [Linked Lists](https://www.geeksforgeeks.org/linked-list-set-1-introduction/) - Linked List projeleriyle alakalı bilgi almak için bakıldı.

### AI Kullanımı

Bu projede AI şu amaçlarla kullanılmıştır.

* **Dokümantasyon:** Projenin gereksinimlerini karşılayan profesyonel bir `README.md` dosyasını yapılandırabilmek ve fonksiyonların işlevlerini anlayabilmek adına kullanıldı.

* **Hata Ayıklama Yardımı:** Projede karşılaştığım ve fark edemediğim kısımlarda `KOD ALMADAN` fonksiyon işlevine yönelik şekilde hataları ayıklayarak bu hataları öğrenmek adına kullanıldı.

* **Makefile:** Oluşturulan komutların ne için kullanılacağı nasıl kurgulanacağını anlamak ve eklediğimiz komutların dışında olması gereken komutların örn:`PHONY:` ne için eklediğimizi öğrenmek adına kullanıldı.
