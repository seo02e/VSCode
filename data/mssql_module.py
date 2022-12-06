import pymssql
# 연결할 데이터베이스 서버 및 계정 정보
host = '210.115.229.92:11433'
user = 's20215135'
password = "20215135@hallym"
database = 'db_20215135'
# 데이터베이스 Connection 및 Cursor
connection = None
cursor = None
# 데이터베이스 연결
def connect_db():
    global connection, cursor
    if connection == None and cursor == None:
        connection = pymssql.connect(host = host, user = user, password = password, database = database)
        cursor = connection.cursor()
    return connection, cursor
# 데이터베이스 연결 종료
def disconnect_db():
    global connection, cursor
    if connection != None and cursor != None:
        connection.close()
        connection = cursor = None
