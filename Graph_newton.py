import pandas as pd
import matplotlib.pyplot as plt

# CSVファイルを読み込む
data = pd.read_csv("/Users/yuumaro/Documents/ChibaInstituteTechnology_ClassMaterials/1st semester/ProgrammingLanguages/C_language/TechnicalDocument/Newtresults.csv")

# グラフを作成
plt.plot(data['Iteration'], data['Error'], marker='o')
plt.xlabel('Iteration')
plt.ylabel('Error')
plt.title('Newton\'s Method Error by Iteration')
plt.yscale('log')  # エラースケールを対数スケールに設定
plt.grid(True)
plt.show()
