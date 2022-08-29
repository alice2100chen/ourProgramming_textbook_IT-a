Module Module1

    Sub Main()
        Dim x As Integer
        x = 6000
        If x >= 9999 Then
            Console.Write("可買A或B手機")
        ElseIf x >= 4999 Then
            Console.Write("可買B手機")
        Else
            Console.Write("繼續存錢")
        End If
        Console.Read()
    End Sub

End Module
