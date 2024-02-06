wheat.current_price = 100;
wheat.cash_transactions = 25000;
wheat.futures = 30;
wheat.contact_name = 'Ellie Barley'

fieldnames(wheat)

wheat = rmfield(wheat, 'futures')
