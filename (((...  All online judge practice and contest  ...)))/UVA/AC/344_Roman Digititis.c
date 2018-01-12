#include <stdio.h>
#include <string.h>
int main()
{
    char a[120][20]={"i","ii","iii","iv","v","vi","vii","viii","ix","x","xi","xii","xiii","xiv","xv","xvi","xvii","xviii","xix","xx","xxi","xxii","xxiii","xxiv","xxv","xxvi","xxvii","xxviii","xxix","xxx","xxxi","xxxii","xxxiii","xxxiv","xxxv","xxxvi","xxxvii","xxxviii","xxxix","xl","xli","xlii","xliii","xliv","xlv","xlvi","xlvii","xlviii","xlix","l","li","lii","liii","liv","lv","lvi","lvii","lviii","lix","lx","lxi","lxii","lxiii","lxiv","lxv","lxvi","lxvii","lxviii","lxix","lxx","lxxi","lxxii","lxxiii","lxxiv","lxxv","lxxvi","lxxvii","lxxviii","lxxix","lxxx","lxxxi","lxxxii","lxxxiii","lxxxiv","lxxxv","lxxxvi","lxxxvii","lxxxviii","lxxxix","xc","xci","xcii","xciii","xciv","xcv","xcvi","xcvii","xcviii","xcix","c"};
    int n,j,k;
    int i,v,x,l,c;
    while(scanf("%d",&n) && n != 0){
        i = 0,v = 0,x = 0,l = 0,c = 0;
        for(k = 1;k <= n;k++){
            j = 0;
            while(a[k-1][j] != '\0'){
                if(a[k-1][j] == 'i')
                    i++;
                if(a[k-1][j] == 'v')
                    v++;
                if(a[k-1][j] == 'x')
                    x++;
                if(a[k-1][j] == 'l')
                    l++;
                if(a[k-1][j] == 'c')
                    c++;
                j++;
            }
        }

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
    }
    return 0;
}
