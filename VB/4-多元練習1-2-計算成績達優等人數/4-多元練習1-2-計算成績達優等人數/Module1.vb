Module Module1

    Sub Main()
        Dim found As Integer
        Dim score = {0, 0, 0, 0, 0}
        found = 0
        For i = 0 To 4
            Console.Write("請輸入分數: ")
            score(i) = Val(Console.ReadLine())
            If score(i) < 70 Then
                Console.WriteLine("可")
            ElseIf score(i) < 90 Then
                Console.WriteLine("良")
            Else
                Console.WriteLine("優")
                found = found + 1
            End If
        Next
        Console.WriteLine("共 " & found & " 筆達到「優」等")
        Console.Read()
    End Sub

End Module
