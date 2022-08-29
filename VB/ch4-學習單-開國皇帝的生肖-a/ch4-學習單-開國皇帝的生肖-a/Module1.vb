Module Module1

    Sub Main()
        Dim z = {"鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗", "豬"}
        Dim y, s As Integer
        Console.Write("西元: ")
        y = Val(Console.ReadLine())
        s = (y - 4) Mod 12
        Console.Write("生肖: " & z(s))
        Console.Read()
    End Sub

End Module
