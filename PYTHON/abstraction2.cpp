class bankaccountt:
    def __init__(self, owner, balance):
        self.owner = owner #public
        self.acc_type="savings" # protected
        #(covention)
        self.balance = balance