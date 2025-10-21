import csv

with open("telemetry_log.csv") as f:
    reader = csv.DictReader(f)
    for row in reader:
        print(row)