class Account:
    def __init__(self, acc_num, acc_bal):
        self.acc_num = acc_num
        self.acc_bal = acc_bal

    def deposit(self, amount):
        self.acc_bal += amount

    def withdraw(self, amount):
        if amount <= self.acc_bal:
            self.acc_bal -= amount
        else:
            raise ValueError("Insufficient Balance")
            
    def m1(self):
        print(self)

a1 = Account(12, 100000)
print("before deposit", a1.acc_num, a1.acc_bal)
a1.deposit(12000)
print("after deposit", a1.acc_num, a1.acc_bal)
a1.m1()              
