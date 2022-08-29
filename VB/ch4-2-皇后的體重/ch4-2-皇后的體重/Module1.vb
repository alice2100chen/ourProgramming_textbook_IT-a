Module Module1

    Sub Main()
        Dim w As Double
        Dim q = {"楊貴妃", 138, 1.64}
        w = (q(1) * 600) / 1000
        q(1) = w
        Console.WriteLine(q(0) & "的體重為" & q(1) & "公斤")
        Console.Read()
    End Sub

End Module
