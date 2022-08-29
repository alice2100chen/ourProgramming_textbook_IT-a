Module Module1

    Sub Main()
        Dim f, c As Double
        f = 77
        c = (f - 32) * (5 / 9)
        Console.WriteLine("攝氏:" & c & "度")
        If c < 20 Then
            Console.Write("畫畫")
        ElseIf c < 24 Then
            Console.Write("彈琴")
        ElseIf c < 27 Then
            Console.Write("下棋")
        ElseIf c < 30 Then
            Console.Write("賞花")
        Else
            Console.Write("水療SPA")
        End If
        Console.Read()
    End Sub

End Module

