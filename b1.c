#include<stdio.h>
#define maxSize 100
int main(){
    int n,s=0,value,pos;
    int arr[maxSize];
     printf("nhap so luong phan tu");
        scanf("%d",&s);
        if(s>maxSize){
            printf("vuot qua gioi han");
            return 0;
        }
        printf("nhap mang");
        for(int i=0;i < s;i++){
            scanf("%d",&arr[i]);
        }
     if(s==0){
            printf("mang rong");
            return 0;
        }
        printf("phan tu can them");
        scanf("%d",&value);
        printf("vi tri can them");
        scanf("%d",&pos);
        if(pos > s || pos <0){
            printf("vi tri khong hop le");
            return 0;
        }
        for(int i=s;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=value;
        s++;
        return 0;
}
