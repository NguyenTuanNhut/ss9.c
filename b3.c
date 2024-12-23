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
        printf("nhap vi tri can xoa");
        scanf("%d",&pos);
        if(pos < 0 || pos >= s){
            printf("vi tri khong hop le");
            return 0;
        }
         for(int i=pos;i<s-1;i++){
            arr[i]=arr[i+1];
         }
         s--;
         for(int i=0;i<s;i++){
            printf("%d ",arr[i]);
         }
         return 0;
}