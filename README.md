# unico
unico is a incomplete unicode library for C. this support encoding, decoding and some operations. becareful! this may not be speedy and safety! 
in this library, unicode string is a pure array of unicode code points.
it is mutable. so often it may have a margin.
this library has not character class or structure, so the character is just a reference of range of string in this library.

```c
unicos *hello1 = make_unico_from_utf8_string(u8"Hello");
unicos *hello2 = make_unico_from_utf8_string(u8"مرحبا هناك");
unicos *hello3 = make_unico_from_utf8_string(u8"привет там");
unicos *separator = make_unico_from_utf8_string(u8", ");
unicos *hellos[] = { hello1, hello2, hello3 };
unicos *hi = join_unicos(hellos, 3, separator); // Hello, مرحبا هناك, привет там
```

# API

## Manual Functions
those functions does not allocate memory automatically.
so you should prepare working memory yourself. if you want to management unico by GC, those functions are useful. but normally [Automatic Functions](#automatic-functions) are easier to use than those.

### unico
`unico` is a smallest data type in this library. it can contain one code point of unicode.
but, it is not always one character of unicode, because unicode can use the combining character.

```c
unico a = 'a';
unico A = 'A';
unico smile = 0x00dc; // Ü
```

| Function | Description |
---- | ----
| `is_base_unico(unico)` | return a integer that is `1` if code is base character, otherwise `0`. |
| `is_combining_unico(unico)` | return a integer that is `1` if code is combining character like as accent, otherwise `0`. |
| `is_spacing_combining_unico(unico)` | return a integer that is `1` if code is spacing combining character like as tamil accent, otherwise `0`. |
| `is_enclosing_combining_unico(unico)` | return a integer that is `1` if code is enclosing combining character, otherwise `0`. |

### unicos 

`unicos` is a data type like as string. it has many `unico` inside.  
this data type is mutable, so you can insert, drop or overwrite if has margin.

#### Basic Functions

| Function | Description |
---- | ---- 
| `void init_unicos (unico *sequence, size_t size, unicos*)` | construct a `unicos` instance by arguments. |
| `void clear_unicos (unicos*)` | delete all characters in `unicos` instance. |
| `size_t size_unicos (unicos*)` | return an integer that is used size. |
| `size_t real_size_unicos (unicos*)` | return an integer that is allocated size. |
| `void set_unicos (unico code, size_t index, unicos*)` | set a one of code point to `unicos` instance. |
| `unico get_unicos (size_t index, unicos*)` | return a one of code point by `index` from `unicos` instance. |
| `int copy_unicos_manually (unicos*, unicos *uniout)` | copy content of `unicos` instance to `uniout`. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int load_unicos_from_utf8_string (unsigned char *string, unicos*)` | load unicode code points to `unicos` instance from utf8 string. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int load_unicos_from_utf8_array (unsigned char *array, size_t size, unicos*)` | load unicode code points to `unicos` instance from utf8 array. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int load_unicos_from_utf16_array (unsigned char *array, size_t size, unicos*)` | load unicode code points to `unicos` instance from utf16 array. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int load_unicos_from_utf32_array (unsigned char *array, size_t size, unicos*)` | load unicode code points to `unicos` instance from utf32 array. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int insert_unicos_manually (unico code, size_t index, unicos*)` | insert one of code point to `unicos` instance. if has no margin, this return a `UNICOC_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int inserts_unicos_manually (unico *sequence, size_t size, size_t index, unicos*)` | insert array of code point to `unicos` instance. if has no margin, this return a `UNICOC_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `void drop_unicos_manually (size_t index, unicos*)` | delete one of element from `unicos` instance. |
| `void drops_unicos_manually (size_t size, size_t index, unicos*)` | delete many elements from `unicos` instance. |
| `int sub_unicos_manually (unico *sequence, size_t size, size_t index, size_t sizeout, unicos*)` | substitute a elements that in the range to array contents. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int next_unicos (size_t index, unicos*, size_t *indexout)` | read code points and assign a next starting position of character to `indexout`. if code points is invalid, this return a non-zero integer. on success, this return `0`. |
| `int get_unicoc_from_unicos (size_t index, unicos*, unicoc *uniout)` | load a `unicoc` instance by index from `unicos` instance. if index is out of range, this return non zero integer. otherwise this always return `0`. |
| `int get_insertion_unicoc_from_unicos (size_t index, unicos*, unicoc *uniout)` | load a `unicos` instance that is zero ranged by index from `unicos` instance. if index is out of range, this return non zero integer. otherwise this always return `0`. |
| `size_t length_unicos (unicos*)` | return an integer that is count of characters (it's not unicode code points). |

#### Converter Functions

those functions are able to transform characters with [Unicode Normalization Table](https://unicode.org/charts/normalization/) and [Unicode Case Table](https://unicode.org/charts/case/).
for example, convert unicode string to uppercase etc...
those functions promise the exception safety that dont modify elements if caused error. maybe :D

```c
unicos *example = make_unicos_from_utf8_string(u8"smile Ü");
normalize_nfkd_unicos_manually(0, -1, example); // 00dc => 0055 0308
```

| Function | Description | 
---- | ---- 
| `int is_upcase_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is uppercase character, this return `1`. otherwise `0`. |
| `int is_downcase_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is lowercase character, this return `1`. otherwise `0`. |
| `int is_foldcase_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is foldcase character, this return `1`. otherwise `0`. |
| `int is_titlecase_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is titlecase character, this return `1`. otherwise `0`. |
| `int is_normalize_nfc_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is normalized character by **NFC**, this return `1`. otherwise `0`. |
| `int is_normalize_nfd_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is normalized character by **NFD**, this return `1`. otherwise `0`. |
| `int is_normalize_nfkc_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is normalized character by **NFKC**, this return `1`. otherwise `0`. |
| `int is_normalize_nfkd_unicos (size_t index, size_t end, unicos *uni)` | if code points that in range is normalized character by **NFKD**, this return `1`. otherwise `0`. |
| `size_upcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_downcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_foldcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_titlecase_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_normalize_nfc_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_normalize_nfd_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_normalize_nfkc_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `size_normalize_nfkd_unicos_manually (size_t index, size_t end, unicos *uniout)` | return a converted size as `size_t`. |
| `upcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | convert `unicos` instance to up case. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `downcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | convert `unicos` instance to down case. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `foldcase_unicos_manually (size_t index, size_t end, unicos *uniout)` | convert `unicos` instance to fold case. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `titlecase_unicos_manually (size_t index, size_t end, unicos *uniout)` | convert `unicos` instance to title case. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `normalize_nfc_unicos_manually (size_t index, size_t end, unicos *uniout)` | normalize `unicos` instance with **NFC**. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `normalize_nfd_unicos_manually (size_t index, size_t end, unicos *uniout)` | normalize an `unicos` instance with **NFD**. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `normalize_nfkc_unicos_manually (size_t index, size_t end, unicos *uniout)` | normalize an `unicos` instance with **NFKC**. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `normalize_nfkd_unicos_manually (size_t index, size_t end, unicos *uniout)` | normalize an `unicos` instance with **NFKD**. if `uniout` has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success this return `0`. |

#### Comparison Functions 

those functions can compare the two unicode character (not string) with [Unicode Collation Table](https://unicode.org/charts/collation/).

```c
unicos *hello1 = make_unicos_from_utf8_string(u8"hello");
unicos *hello2 = make_unicos_from_utf8_string(u8"𝒽ello");
equal_unicos(hello1, hello2); // false 
equalp_unicos(hello1, hello2); // true
```

| Function | Description |
---- | ---- 
| `int equal_unicos_as_primary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points as binary. if two code points are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicos_as_secondary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Secondary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_tertiary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Tertiary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_quaternary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Quaternary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_expansion_primary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Expansion Primary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_expansion_secondary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Expansion Secondary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_expansion_tertiary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Expansion Tertiary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos_as_expansion_quaternary (unicos *uni1, size_t index1, size_t end1, unicos *uni2, size_t index2, size_t end2)` | compare two unicode code points with *Expansion Quaternary Difference*. if two code points are equal, this return `1`. otherwise return `0`. |
| `int equal_unicos (unicos *uni1, unicos *uni2)` | compare two unicode strings as binary. if two unicode strings are equal, this return `1`. otherwise this return `0`. |
| `int equalp_unicos (unicos *uni1, unicos *uni2)` | compare two unicode strings with predicate function of `equal_unicos_as_primary ~ quaternary`. if two unicode strings are equal, this return `1`. otherwise this return `0`. |
| `int unequal_unicos (unicos *uni1, unicos *uni2)` | return a reversed result of `equal_unicos`. |
| `int unequalp_unicos (unicos *uni1, unicos *uni2)` | return a reversed result of `equalp_unicos`. |

#### Categorize Functions(Some Part)

those functions can check the character's (not string) category with [Unicode Collation Table](https://unicode.org/charts/collation/).
those are some part of all functions. 
because too many categorize functions are defined in this library.

```c
unicos *example = make_unicos_from_utf8_string(u8"01Ü");
is_digits_unicos(0, 1, example); // 0 is true
is_digits_unicos(1, 2, example); // 1 is true
is_digits_unicos(2, 3, example); // Ü is false
```

| Function | Description |
---- | ----
| `int is_digits_unicos (size_t index, size_t end, unicos*)` | return an integer that if characters category is digits, this return `1`. otherwise `0`. |
| `int is_whitespace_unicos (size_t index, size_t end, unicos*)` | return an integer that if characters category is whitespace, this return `1`. otherwise `0`. |
| `int is_katakana_and_hiragana_unicos (size_t index, size_t end, unicos*)` | return an integer that if characters category is katakana or hiragana, this return `1`. otherwise `0`. |

#### Operator Function 

| Function | Description | 
---- | ----
| `int concat_unicos_manually (unicos*, unicos*, unicos *uniout)` | output to `uniout` what is concatenated string by first two arguments. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int join_unicos_manually (unicos** strings, size_t size, unicos *separator, unicos *uniout)` | output to `uniout` what is joined string by `strings` and `separator`. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int replace_unicos_manually (unicos *pattern, unicos *replaced, unicos *source, unicos *uniout)` | output to `uniout` what is replaced `pattern` to `replaced` in `source`. instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int reverse_unicos_manually (unicos*, unicos *uniout)` | output to `uniout` what is reversed string. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `int slice_unicos_manually (size_t index, size_t end, unicos*, unicos *uniout)` | output to uniout what is sliced string between index to end. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this always return `0`. |
| `void remove_unicos (unicos *pattern, unicos *uniout)` | remove a `pattern` in `uniout`. this function always success. |
| `int startswith_unicos (unicos *pattern, unicos*)` | if string is ends with `pattern`, this return a `1`. otherwise this return `0`. |
| `int endswith_unicos (unicos *pattern, unicos*)` | if string is starts with `pattern`, this return a `1`. otherwise this return `0`. |
| `size_t count_unicos (unicos *pattern, unicos*)` | return an integer that was counted of `pattern` in string. |
| `int position_unicos (unicos *pattern, unicos*, size_t *indexout)` | assign to `indexout` what is index of `pattern` in string. if `pattern` is in string, this return `1`. otherwise this return `0`. |

### unicoc
`unicoc` is a data type like as character.  
this has information about range of `unicos` instance.
this is a mutable like as `unicos`. but this cannot refrect modification about referenced `unicos` instance.
so it is possible that if you modified one of `unicoc` or `unicos`, other `unicoc` will be broken.

```c
unicos *hello = make_unicos_from_utf8_string(u8"привет там");
unicoc character1;
unicoc character2;
get_unicoc_from_unicos(1, hello, &character1); // 0 is success.
get_unicoc_from_unicos(3, hello, &character2); // 0 is success.
```

#### Basic Functions
| Function | Description | 
---- | ---- 
| `void init_unicoc (unicos *uni, size_t start, size_t end, unicoc *uniout)` | construct `unicoc` instance by arguments. |
| `void set_unicoc (unico code, size_t index, unicoc *uniout)` | set a unicode code point to one of `unicoc` element. |
| `unico get_unicoc (size_t index, unicoc *uniout)` | return a one of unicode code point from `unicoc` element. |
| `size_t size_unicoc (unicoc *uni)` | return an integer that is size of `unicoc` instance. |
| `int insert_unicoc (unico code, size_t index, unicoc *uniout)` | insert one of unicode code point to `unicoc` instance. if has no margin, this return a `UNICOC_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int inserts_unicoc (unico *sequence, size_t size, size_t index, unicoc *uniout)` | insert array of unicode code point to `unicoc` instance. if has no margin, this return a `UNICOC_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `void drop_unicoc (size_t index, unicoc *uniout)` | delete one of element from `unicoc` instance. |
| `void drop_unicoc (size_t size, size_t index, unicoc *uniout)` | delete many element from `unicoc` instance. |
| `int sub_unicoc (unico *sequence, size_t size, size_t index, size_t sizeout, unicoc *uniout)` | substitute a elements that in the range to array contents. if instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |

#### Convert Functions
| Function | Description | 
---- | ----
| `int is_upcase_unicoc (unicoc *uni)` | if instance is a uppercase character, this return `1`. otherwise `0`. |
| `int is_downcase_unicoc (unicoc *uni)` | if instance is a lowercase character, this return `1`. otherwise `0`. |
| `int is_foldcase_unicoc (unicoc *uni)` | if instance is a foldcase character, this return `1`. otherwise `0`. |
| `int is_titlecase_unicoc (unicoc *uni)` | if instance is a titlecase character, this return `1`. otherwise `0`. |
| `int is_normalized_nfc_unicoc (unicoc *uni)` | if instance is a normalized character by **NFC**, this return `1`. otherwise `0`. |
| `int is_normalized_nfd_unicoc (unicoc *uni)` | if instance is a normalized character by **NFD**, this return `1`. otherwise `0`. |
| `int is_normalized_nfkc_unicoc (unicoc *uni)` | if instance is a normalized character by **NFKC**, this return `1`. otherwise `0`. |
| `int is_normalized_nfkd_unicoc (unicoc *uni)` | if instance is a normalized character by **NFKD**, this return `1`. otherwise `0`. |
| `int size_upcase_unicoc (unicoc *uni)` | return a converted size as `size_t`. |
| `int size_downcase_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_foldcase_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_titlecase_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_normalized_nfc_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_normalized_nfd_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_normalized_nfkc_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int size_normalized_nfkd_unicoc (unicoc *uni)` | return a converted size as `size_t`.  |
| `int upcase_unicoc_manually (unicoc*)` | convert character to uppercase. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int downcase_unicoc_manually (unicoc*)` | convert character to lowercase. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int foldcase_unicoc_manually (unicoc*)` | convert character to foldcase. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int titlecase_unicoc_manually (unicoc*)` | convert character to titlecase. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int normalized_nfc_unicoc_manually (unicoc*)` | normalize character with **NFC**. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int normalized_nfd_unicoc_manually (unicoc*)` | normalize character with **NFD**. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int normalized_nfkc_unicoc_manually (unicoc*)` | normalize character with **NFKC**. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int normalized_nfkd_unicoc_manually (unicoc*)` | normalize character with **NFKD**. if instance has no margin, this return `UNICOS_NOT_ENOUGH_MEMORY`. on success, this return `0`. |

#### Comparison Functions
| Function | Description |
---- | ----
| `int equal_unicoc_as_primary (unicoc*, unicoc*)` | compare two unicode characters as binary. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_secondary (unicoc*, unicoc*)` | compare two unicode characters with *Secondary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_tertiary (unicoc*, unicoc*)` | compare two unicode characters with *Tertiary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_quaternary (unicoc*, unicoc*)` | compare two unicode characters with *Quaternary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_expansion_primary (unicoc*, unicoc*)` | compare two unicode characters with *Expansion Primary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_expansion_secondary (unicoc*, unicoc*)` | compare two unicode characters with *Expansion Secondary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_expansion_tertiary (unicoc*, unicoc*)` | compare two unicode characters with *Expansion Tertiary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |
| `int equal_unicoc_as_expansion_quaternary (unicoc*, unicoc*)` | compare two unicode characters with *Expansion Quaternary Difference*. if two characters are equal, this return `1`. otherwise this return `0`. |

### unicop_utf8
`unicop_utf8` is a **UTF-8** decoder. it is defined as state machine.

| Function | Description | 
---- | ----
| `void init_unicop_utf8 (unicos *uni, unicop_utf8 *uniout)` | construct a decoder by arguments. |
| `int put_unicop_utf8_manually (unsigned char c, unicop_utf8 *uniout)` | input a byte to `uniout`. if one of code point was decoded completely, insert it to `unicos` instance inside. if inside `unicos` instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. if has syntax error in inputted datas, this return a `UNICOP_UTF8_SYNTAX_ERROR`. on success, this return `0`. |

### unicop_utf16
`unicop_utf16` is a **UTF-16** decoder. it is defined as state machine.

| Function | Description | 
---- | ----
| `void init_unicop_utf16 (unicos *uni, unicop_utf16 *uniout)` | construct a decoder by arguments. |
| `int put_unicop_utf16_manually (unsigned char c, unicop_utf16 *uniout)` | input a byte to `uniout`. if one of code point was decoded completely, insert it to `unicos` instance inside. if inside `unicos` instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. if has syntax error in inputted datas, this return a `UNICOP_UTF8_SYNTAX_ERROR`. on success, this return `0`. |

### unicop_utf32
`unicop_utf32` is a **UTF-32** decoder. it is defined as state machine.

| Function | Description | 
---- | ----
| `void init_unicop_utf32 (unicos *uni, unicop_utf32 *uniout)` | construct a decoder by arguments. |
| `int put_unicop_utf32_manually (unsigned char c, unicop_utf32 *uniout)` | input a byte to `uniout`. if one of code point was decoded completely, insert it to `unicos` instance inside. if inside `unicos` instance has no margin, this return a `UNICOS_NOT_ENOUGH_MEMORY`. if has syntax error in inputted datas, this return a `UNICOP_UTF8_SYNTAX_ERROR`. on success, this return `0`. |

### unicob

`unicob` is a data type like as a binary buffer.  
it is able to recorded an encoded data by some format. 
in this library, this is used to encoding.

| Function | Description |
---- | ---- 
| `void init_unicob (unsigned char *sequence, size_t size, unicob *uniout)` | construct `unicob` instance by arguments. |
| `int put_unicob_manually (unsigned char c, unicob *uniout)` | input byte to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `int write_unicob_manually (unsigned char *sequence, size_t size, unicob *uniout)` | write byte array to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success, this return `0`. |
| `unsigned char get_unicob_manually (size_t index, unicob *uni)` | get an element from `unicob` by `index`. |
| `void copy_unicob (unicob *uni, unicob *uniout)` | copy a contents of `uni` to `uniout`. |
| `size_t size_unicob (unicob *uni)` | return an integer that is used size of `unicob`. |
| `size_t real_size_unicob (unicob *uni)` | return an integer that is allocated size of `unicob`. |
| `int put_unicob_as_utf8_manually (unico code, unicob *uniout)` | input an **UTF-8** encoded code point to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_unicob_as_utf16be_manually (unico code, unicob *uniout)` | input an **UTF-16BE** encoded code point to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_unicob_as_utf16le_manually (unico code, unicob *uniout)` | input an **UTF-16LE** encoded code point to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_unicob_as_utf32be_manually (unico code, unicob *uniout)` | input an **UTF-32BE** encoded code point to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_unicob_as_utf32le_manually (unico code, unicob *uniout)` | input an **UTF-32LE** encoded code point to `uniout`. if `uniout` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_bom_unicob_as_utf8_manually (unicob *uniout)` | input a BOM to `unicob`. if `unicob` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_bom_unicob_as_utf16be_manually (unicob *uniout)` | input a BOM to `unicob`. if `unicob` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_bom_unicob_as_utf16le_manually (unicob *uniout)` | input a BOM to `unicob`. if `unicob` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_bom_unicob_as_utf32be_manually (unicob *uniout)` | input a BOM to `unicob`. if `unicob` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |
| `int put_bom_unicob_as_utf32le_manually (unicob *uniout)` | input a BOM to `unicob`. if `unicob` has no margin, this return a `UNICOB_NOT_ENOUGH_MEMORY`. on success this return `0`. |

## Automatic Functions

### unicos
#### Basic Functions 

| Function | Description |
---- | ---- 
| `unicos *make_unicos (size_t size)` | |
| `unicos *make_unicos_from_utf8_string (unsigned char *array)` | |
| `unicos *make_unicos_from_utf8_array (unsigned char *array, size_t size)` | |
| `unicos *make_unicos_from_utf16_array (unsigned char *array, size_t size)` | |
| `unicos *make_unicos_from_utf32_array (unsigned char *array, size_t size)` | |
| `void free_unicos (unicos*)` | |
| `int extend_unicos (size_t size, unicos*)` | |
| `unicos *copy_unicos (unicos*)` | |
| `int insert_unicos (unico, unicos*)` | |
| `int inserts_unicos (unico *sequence, size_t size, unicos*)` | |
| `int sub_unicos (unico *sequence, size_t size, size_t index, size_t sizeout, unicos*)` | |

#### Converter Functions 

| Function | Description |
---- | ----
| `int upcase_unicos (unicos*)` | |
| `int downcase_unicos (unicos*)` | |
| `int foldcase_unicos (unicos*)` | |
| `int titlecase_unicos (unicos*)` | |
| `int normalize_nfc_unicos (unicos*)` | |
| `int normalize_nfd_unicos (unicos*)` | |
| `int normalize_nfkc_unicos (unicos*)` | |
| `int normalize_nfkd_unicos (unicos*)` | |

### unicoc
#### Basic Functions 

| Function | Description |
---- | ---- 
| `int extend_unicoc (size_t size, unicoc*)` | |
| `int insert_unicoc (unico, unicoc*)` | |
| `int inserts_unicoc (unico *sequence, size_t size, unicoc*)` | |
| `int sub_unicoc (unico *sequence, size_t size, size_t index, size_t sizeout, unicoc*)` | |

#### Converter Functions 

| Function | Description |
---- | ----
| `int upcase_unicoc (unicoc*)` | |
| `int downcase_unicoc (unicoc*)` | |
| `int foldcase_unicoc (unicoc*)` | |
| `int titlecase_unicoc (unicoc*)` | |
| `int normalize_nfc_unicoc (unicoc*)` | |
| `int normalize_nfd_unicoc (unicoc*)` | |
| `int normalize_nfkc_unicoc (unicoc*)` | |
| `int normalize_nfkd_unicoc (unicoc*)` | |
| `unicos *upcased_unicoc (unicoc*)` | |
| `unicos *downcased_unicoc (unicoc*)` | |
| `unicos *foldcased_unicoc (unicoc*)` | |
| `unicos *titlecased_unicoc (unicoc*)` | |
| `unicos *normalized_nfc_unicoc (unicoc*)` | |
| `unicos *normalized_nfd_unicoc (unicoc*)` | |
| `unicos *normalized_nfkc_unicoc (unicoc*)` | |
| `unicos *normalized_nfkd_unicoc (unicoc*)` | |

### unicop_utf8

| Function | Description | 
---- | ---- 
| `put_unicop_utf8` | |

### unicop_utf16

| Function | Description | 
---- | ---- 
| `put_unicop_utf16` | |

### unicop_utf32

| Function | Description | 
---- | ---- 
| `put_unicop_utf32` | |

### unicob

| Function | Description |
---- | ---- 
| `int make_unicob (size_t size)` | |
| `void free_unicob (unicob*)` | |
| `int extend_unicob (size_t size, unicob*)` | |
| `int copy_unicob (size_t size, unicob*)` | |
| `int put_unicob (unico, unicob*)` | |
| `int write_unicob (unico *sequence, size_t size, unicob*)` | |
| `put_unicob_as_utf8` | |
| `put_unicob_as_utf16be` | |
| `put_unicob_as_utf16le` | |
| `put_unicob_as_utf32be` | |
| `put_unicob_as_utf32le` | |
| `put_bom_unicob_as_utf8` | |
| `put_bom_unicob_as_utf16be` | |
| `put_bom_unicob_as_utf16le` | |
| `put_bom_unicob_as_utf32be` | |
| `put_bom_unicob_as_utf32le` | |

## Temporary Macros

*Comming Soon...*
