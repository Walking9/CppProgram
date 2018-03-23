//
// Created by brunon on 18-3-9.
//

#ifndef CPPPROGRAM_SORT_H
#define CPPPROGRAM_SORT_H

#include <iostream>
#include <vector>

using namespace std;

//插入排序 InsertSort
//时间复杂度：平均O(n2), 最好O(n), 最坏O(n2)
//稳定性：稳定
//适用情况：n小
void InsertSort(vector<int> &array) {  //升序
    int temp;
    for(int i=1; i<array.size(); i++) {
        for(int j=i; j>0; j--) {
            if(array[j] < array[j-1]) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
            else break;
        }
    }
}
//void InsertSortTest(vector<int> &array) {
//    int temp;
//    for(int i=1; i<array.size(); i++) {
//        for(int j=i; j>0; j--) {
//            if(array[j] < array[j-1]) {
//                temp = array[j];
//                array[j] = array[j-1];
//                array[j-1] = temp;
//            }
//            else break;
//        }
//    }
//}


//冒泡排序 BubbleSort
//时间复杂度：平均O(n2), 最好O(n), 最坏O(n2)
//稳定性：稳定
//适用情况：n小
void BubbleSort(vector<int>& array) {   //升序,向上冒泡
    int temp;
    for(int i=0; i<array.size(); i++) {
        for(int j=array.size()-1; j>i; --j) {
            if(array[j] < array[j-1]) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}
//
//void BubbleSortTest(vector<int> &array) {
//    int temp;
//    for(int i=0; i<array.size(); i++) {
//        for(int j=array.size()-1; j>i; j--) {
//            if(array[j] < array[j-1]) {
//                temp = array[j];
//                array[j] = array[j-1];
//                array[j-1] = temp;
//            }
//        }
//    }
//}

//快速排序 QuickSort
//时间复杂度：平均O(nlog2n), 最好O(nlog2n), 最坏O(n2)
//稳定性：不稳定
//适用情况：n大
int Partition(vector<int>& array, int begin, int end) {   //划分
    int i=begin, j=end, temp = array[begin];
    while(i != j) {
        while(i < j && array[j] > temp) --j;
        if(i < j) {
            array[i] = array[j];
            i++;
        }

        while(i < j && array[i] < temp) ++i;
        if(i < j) {
            array[j] = array[i];
            j--;
        }
    }
    array[i] = temp;
    return i;
}
void QuickSort(vector<int>& array, int begin, int end) {
    int middle;
    if(begin < end) {
        middle = Partition(array, begin, end);
        QuickSort(array, begin, middle-1);
        QuickSort(array, middle+1, end);
    }
}

void

//希尔排序 ShellSort
//时间复杂度：平均O(n1.3), 最好O(n), 最坏O(n2)
//稳定性：不稳定
//适用情况：
void ShellSort(vector<int>& array) {
    int i, j, increment;
    int temp;
    for(increment = array.size()/2; increment > 0; increment /= 2) {
        for(i = increment; i < array.size(); i++) {
            temp = array[i];
            for(j=i; j >= increment; j -= increment) {
                if(temp < array[j-increment])
                    array[j] = array[j-increment];
                else
                    break;
            }
            array[j] = temp;
        }
    }
}

//堆排序 HeapSort
//时间复杂度：平均O(nlog2n), 最好O(nlog2n), 最坏O(nlog2n)
//稳定性：不稳定
//适用情况：n大
void Heapify(vector<int>& array, int first, int end){  //建堆
    int father = first;
    int son = father * 2 + 1;
    while(son < end){
        if(son + 1 < end && array[son] < array[son+1]) ++son;
        //如果父节点大于子节点则表示调整完毕
        if(array[father] > array[son]) break;
        else {
            //不然就交换父节点和子节点的元素
            int temp = array[father];
            array[father] = array[son];
            array[son] = temp;
            //父和子节点变成下一个要比较的位置
            father = son;
            son = 2 * father + 1;
        }
    }
}
//堆排序
void HeapSort(vector<int>& array){
    int i, len = array.size();
    //初始化堆，从最后一个父节点开始
    for(i = len/2 - 1; i >= 0; --i){
        Heapify(array,i,len);
    }
    //从堆中的取出最大的元素再调整堆
    for(i = len - 1;i > 0;--i){
        int temp = array[i];
        array[i] = array[0];
        array[0] = temp;
        //调整成堆
        Heapify(array,0,i);
    }
}

//归并排序 MergeSort
//时间复杂度：平均O(nlog2n), 最好O(nlog2n), 最坏O(nlog2n)
//稳定性：稳定
//适用情况：n大
void Merge(int arr[], int reg[], int start, int end) {
    if (start >= end)return;
    int len = end - start, mid = (len >> 1) + start;

    //分成两部分
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    //然后合并
    Merge(arr, reg, start1, end1);
    Merge(arr, reg, start2, end2);
    int k = start;
    //两个序列一一比较,哪的序列的元素小就放进reg序列里面,然后位置+1再与另一个序列原来位置的元素比较
    //如此反复,可以把两个有序的序列合并成一个有序的序列
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];

    //然后这里是分情况,如果arr2序列的已经全部都放进reg序列了然后跳出了循环
    //那就表示arr序列还有更大的元素(一个或多个)没有放进reg序列,所以这一步就是接着放
    while (start1 <= end1)
        reg[k++] = arr[start1++];

    //这一步和上面一样
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    //把已经有序的reg序列放回arr序列中
    for (k = start; k <= end; k++)
        arr[k] = reg[k];
}

void MergeSort(int arr[], const int len) {
    //创建一个同样长度的序列,用于临时存放
    int  reg[len];
    Merge(arr, reg, 0, len - 1);
}
#endif //CPPPROGRAM_SORT_H
