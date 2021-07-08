## C++笔记

C++中，函数参数使用传引用写法对某一对象进行修改更好：
```cpp
void testReference(int &a)
{
    a = 1;
}

void testReferenceInCStyle(int * a){
    *a = 2;
}
```