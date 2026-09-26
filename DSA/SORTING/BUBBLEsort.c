#include<stdio.h>
void bubbleSort(int size,int a[]){
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
int main(){
  int size=0;
  printf("Enter a size of array: ");
  scanf("%d",&size);
  int a[size];
  printf("Enter value of Array\n");
  for(int i=0;i<size;i++){
    printf("%d:",i+1);
    scanf("%d",&a[i]);
  }
  printf("values of array:");
  for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
  }
  bubbleSort(size,a);
  printf("\nSorted array:");
  for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
  }
}