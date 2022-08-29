Module Module1

    Sub Main()
        Dim s = {"Eric", 15, 60, 170}
        Console.WriteLine(s(0) & " " & s(1) & " " & s(2) & " " & s(3))
        s(1) = s(1) + 1
        s(2) = 62
        Console.WriteLine(s(0) & " " & s(1) & " " & s(2) & " " & s(3))
        Console.Read()
    End Sub

End Module
