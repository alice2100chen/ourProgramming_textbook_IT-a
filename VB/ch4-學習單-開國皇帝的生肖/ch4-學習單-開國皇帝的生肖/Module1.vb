Module Module1

    Sub Main()
        Dim z = {"鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗", "豬"}
        Dim emperor = {"嬴政", "劉邦", "司馬炎", "楊堅", "李淵", "趙匡胤", "忽必烈", "朱元璋", "皇太極"}
        Dim birth = {-259, -256, 236, 541, 566, 927, 1215, 1328, 1592}
        Dim s As Integer


        For i = 0 To 8
            If birth(i) > 0 Then
                s = (birth(i) - 4) Mod 12
            Else
                s = (birth(i) - 4 + 1) Mod 12
                s = (s + 12) Mod 12
            End If
            Console.WriteLine(emperor(i) & "的生肖: " & z(s))
        Next
        Console.Read()
    End Sub

End Module
