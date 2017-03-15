import numpy as np

a = 1
b = 2

def calc(x, y):
    return x + y

print(calc(a, b))


class MyClass():
    """docstring for MyClass."""
    def __init__(self, arg):
        super(MyClass, self).__init__(
            N = 6,
            n = 1,
        )
        self.arg = arg

model = MyClass()

print(model.N)
#
# class MyClass():
#     def __init__(self):
#         super(MyChain, self).__init__(
#             l1 = L.Linear(4, 3),
#             l2 = L.Linear(3, 3),
#         )
#
#     def __call__(self, x, y):
#         fv = self.fwd(x, y)
#         loss = F.mean_squared_error(fv, y)
#         return loss
#
#     def fwd(self, x, y):
#         return F.sigmoid(self.l1(x))
