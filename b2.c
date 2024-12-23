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
        printf("nhap phan tu can sua");
        scanf("%d",&value);
        printf("nhap vi tri can sua");
        scanf("%d",&pos);
        if(pos < 0 || pos >= s){
            printf("vi tri khong hop le");
            return 0;
        }
        arr[pos]=value;
        for(int i=0;i<s;i++){
            printf("%d ",arr[i]);
        }
        return 0;
}
