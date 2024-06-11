## RANGKUMAN

### 1. Definisi
Array (dalam sebuah python) merupakan struktur yang dapat menyimpan dan mengatur set data. Struktur data membicarakan tentang penyimpanan, mengatur, pengelompokan, dan mempresentasikan 

___

### 2. Set
Set adalah tipe data kolektif yang digunakan untuk menyimpan beberapa nilai unik satu variabel. nilai unik set antara lain :
- set hanya menyimpan nilai unik (bukan duplikat)
- setelah nilai di masukkan ke dalam set, nilai tidak dapat dirubah
- set tidak memiliki urutan, sehingga tidak dapat diakses berdasarkan indeks

contoh dalam set

```
student_set = {'Huda', 'Lendis', 'wahid'}
print (student_set)

fruit_set = {['manggo', 'apple']}
print (fruit_set)
```

Outputnya

~~~
{'Huda', 'Lendis', 'wahid'}
{'manggo', 'apple'}
~~~

---

#### a. unrordered (set)
Tipe Data set tidak berurut. Bahkan jika kita paksa, kit hanya mendapat pesan error:
```
my_set = {'a'}
print(my_set[0])
```

pesan errornya:
```
Traceback (most recent call last)
File "<stdin>", line 1, in <module>
TypeError: 'set' object is note subscriptable
```

kita bisa juga melihat kode program yang kita bikin awal
```
student_set = {'Huda', 'Lendis', 'wahid'}
print (student_set)
```
outputnya
```
{'Huda', 'Lendis', 'wahid'}
```
---
#### b. Unchangeable (set)
Tipe data set tidak bisa diganti, yang dimana nilai yang telat kita masukkan kedalam set tidak bisa diganti lagi

perhatikan contoh berikut
```
set_fruit = {'manggo', 'apple', True, 1, 2, 3}

keyboard_= {
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9),
    (0)
}
```

namun kita tidak dapat menyertakan list sebagai anggota karena list tidak dapat dirubah. perhatikan contoh berikut
```
x = set{ 35, 100, ['a', 'b']}
```

pesan error:
```
Traceback (most recent call last)
File "<stdin>", line 1, in <module>
TypeError: unhashable type: 'list'
```
---
#### c. No Duplicate Values (set)
Di python juga tidak bisa menduplikasi suatu nilai. Jika kita memasukkan nilai yang sudah ada di dalam sebuah set, lalu nilai itu akan hanya akan muncul pada nilai yang kita masukkan pertama kali. contoh
```
unique_word = {
    'morning', 'this', 'is', 'morning', 'which', 'very', 'bright'
}

print(unique_word)
```

## d. Add/Update Set Element
Pada saat ingin menambahkan elemen ke dalam set, dapat menggunakan fungsi 'add()'.
Selain itu kita juga dapat memeperbarui data dengan fungsi 'update().

# CONTOH dalam Add
alphabet_set = {'a', 'b', 'c'}
print(alphabet_set)

alphabet_set.add('d')
alphabet_set.add('e')

alphabet_set.update({'f', 'g'})
alphabet_set.update(['h', 'i'])

print(alphabet_set)

# OUTPUT:
{'a', 'b', 'c'}
{'d', 'u', 'e', 'a', 'b', 'g', 'h', 'f', 'c'}

## e. Delete/Remove Set Elemen
Untuk menghapus elemen dalam set di Python, terdapat empat fungsi yang bisa digunakan, yaitu:
- remove(value)  : Untuk menghapus nilai tertentu dari set
- discard(value) : Untuk menghapus nilai tertentu, tetapi tidak akan menghasilkan error jika nilai tersebut tidak ada dalam set
- Fungsi pop()   : Untuk menghapus dan mengembalikan elemen acak dari set, mengingat set di Python tidak memiliki urutan tetap
- fungsi clear() : Untuk menghapus semua elemen dalam set, mengosongkan set sepenuhnya

# CONTOH dalam Delete
set = {'virtual', 'virtuous', 100, ('a', 'b'), False, True}
print(set)
set = {'virtual', 'virtuous', 100, ('a', 'b'), False, True}
print(set)

#Menghapus elemen 100
set.remove(100)
print(set)

#Menghapus elemen ('a', 'b')
set.discard(('a', 'b'))
print(set)

#Menghapus elemen acak
RemovedValue = set.pop()
print("Removed value =", RemovedValue)
print(set)

#Menghapus semua elemen
set.clear()
print(set)

# OUTPUT:
{False, True, 100, 'maya', 'budi', ('a', 'b')}
{False, True, 'maya', 'budi', ('a', 'b')}
{False, True, 'maya', 'budi'}
Removed value = False
{True, 'maya', 'budi'}
set()

# F.Functions (Set)
Fungsi-fungsi bawaan dalam Python yang digunakan untuk mengelola set 
meliputi beberapa metode utama yang sangat berguna dalam manipulasi data.
Berikut ringkasan fungsi bawaan tipe data set yang bisa kita gunakan:
- add()        : Menambahkan satu anggota ke set
- clear()      : Menghapus seluruh rangkaian
- copy()       : Buat salinan satu set menjadi set baru
- difference() : Melakukan operasi perbedaan antara dua set
- discard()    : Menghapus satu anggota dari kumpulan

# Dictionary 

Kamus adalah tipe data dalam Python yang digunakan untuk menyimpan kumpulan data atau nilai dengan pendekatan "kunci-nilai". Kamus sendiri memiliki dua komponen inti: Pertama adalah kunci, yang merupakan nama atribut dari item dalam dictionary. Kedua adalah nilai, yang merupakan nilai yang disimpan dalam atribut.

Item dictionary memiliki 3 properti, yaitu:

Tidak Berurutan - tidak dalam urutan

* Dapat Diubah - bisa diubah

* Unik - tidak bisa menerima dua kunci yang sama

unodered meaning artinya tidak berurutan, jadi kunci atau atribut yang kita tentukan pertama, tidak berarti akan menjadi "pertama" dibandingkan dengan kunci lainnya. Selain itu, tidak berurutan berarti bahwa kita tidak dapat mengaksesnya menggunakan indeks (bilangan bulat) seperti halnya dengan daftar (list).

changeable artinya kita dapat mengubah nilai yang telah kita masukkan ke dalam dictionary. Ini berbeda dari tipe data set dan tuple, yang keduanya tidak dapat diubah atau tidak dapat diubah.

Dan yang terakhir adalah Unik, sebuah dictionary tidak dapat memiliki lebih dari satu kunci yang sama karena unik. Jadi jika dua kunci sama, kunci yang didefinisikan terakhir akan menimpa nilai kunci yang didefinisikan sebelumnya.

# a. Creat Dictionary Elements

Selanjutnya adalah cara membuat dictionary dalam Python. Untuk membuatnya, ada 2 cara:

* Pertama dengan kurung kurawal {}.

* Dan yang kedua dapat menggunakan fungsi atau konstruktor dict().

# contoh :

~~~
#first step

book = {

"title": "Fall Leaves Never Hate The Wind",

"Writer": "Tere Liye"

}

#second way

book = dict(

title="Fall Leaves Never Hate The Wind",
author-"Tere Liye" )
~~~

# b. ADD/Update Dict Elements

Untuk menambahkan kunci dan item baru, metodenya sama seperti mengedit item. Jadi: Jika kunci yang kita tentukan sudah ada, sistem akan mengganti item lama dengan yang baru, alias mengeditnya. Tetapi jika kunci yang kita tentukan tidak ada, sistem akan menambahkannya sebagai item baru.

Contoh:

~~~
python
student = {
    'name': 'Lendis Fabri',
    'origin': 'Indonesia'
}

# output None
print('Hobi:', student.get('hobi'))

# menambahkan data
student['hobi'] = 'Memancing'

# mencetak ulang
print('Hobi dari {} adalah {}'.format(
    student.get('name'), student.get('hobi')
))
~~~

Output:
~~~~
Hobi: None
Hobi dari Lendis Fabri adalah Memancing
~~~~

# c. Delete Dict Elements

Ada dua cara untuk menghapus sebuah item:

* Menggunakan pernyataan del <dict[key]>.

* Menggunakan fungsi dictionary.pop().

Contoh:
~~~
python
student = {
    'name': 'Wahid Abdullah',
    'age': 18,
}
'origin': 'Indonesia'

del student['name']

student.pop('age')

student.pop('origin')
~~~
Perbedaannya adalah, jika kita menggunakan fungsi pop(), kita dapat mendapatkan nilai kembalian dari data yang dihapus.

Contoh:
~~~
python
short_message = {
    "content": "PESAN INI HANYA BISA DIBACA SEKALI!!"
}

pesan_isi = short_message.pop('content')

# akses langsung dari kamus
# output: None
print('isi pesan:', short_message.get('content'))

# akses ke nilai yang disimpan kembali
print('isi pesan:', pesan_isi)
~~~
Output:
~~~
isi pesan: None
isi pesan: PESAN INI HANYA BISA DIBACA SEKALI!!
~~~
# d. Membership Operators (Dict)
 Kita bisa menggunakan membership operators untuk tipe data kamus dalam python.
 ```
 Contoh:
 student = {
    'name' : 'Inspired Renza'
 }

 print('Does the student variable have name key?')
 print('name' in student)

 print('\nDoes the student variable NOT have an age key?')
 print('age' note in student)
 ```

Output:
```
Apakah variabel siswa memiliki key nama?
True

Apakah variabel siswa tidak memiliki key usia?
True
```

# e. Functions (Dictionary)
Berikut adalah rangkuman untuk Dict-function yang bisa kita gunakan:
```
all() : Mengembalikan True jika semua key adalah true (atau jika dictionary kosong)

any() : Mengembalikan True jika salah satu key dictionary benar. jika dictionary kosong, returnfalse.

len() : Mengembalikan panjang (jumlah item) dalam dictionary

cmp() : Membandingkan item dari dua dictionary

sorted() : Mengembalikan daftar key baru yang diurutkan dalam dictionary
```
