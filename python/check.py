p=[['21','32','67','97','98','410'],
    ['64','85'],
    ['32','54','89','152','453','597'],
    ['07','11','15','19','30','73','96','98'],
    ['08','14','23','36','37','39','75','79'],
    ['13','19','55','71','93','97','381','453','644','734','985'],
    ['81','900'],
    ['081','089','105','188','335','358','367','396','441','467','521','594','798','912','941']]
name=['國旅券','i原券','農遊券','藝fun券數位','藝fun券紙本','動滋券','客庒券','地方創生券']
pid=list(input().split(','))
for i in pid:
    print(f'身份證尾數{i}')
    for k,v in enumerate(p):
        if i[-2:] in v or i[-3:] in v:
            print(f"\t抽中{name[k]}")
