class bank:
    def __init__(self, account):
        self.account=account
        bank.employee=employee
    def display_accinfo(self):
        print(self.account.acc_num, self.account.acc_bal)
        print(bank.employee.empid, bank.employee.empname)
class employee:
    def __init__(self, empname, empid):
        self.empname=empname
        self.empid=empid
class customer:
    pass
class account:
    def __init__(self, acc_num, acc_bal):
        self.acc_num=acc_num
        self.acc_bal=acc_bal
