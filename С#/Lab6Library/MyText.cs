using System;

namespace Lab6Library;

public class MyText 
{
    private MyString[] lines;
    private int count;

    public MyText() 
    {
        lines = new MyString[0];
        count = 0;
    }

    public void AddLine(string text)
    {
        MyString[] newLines = new MyString[count + 1];
        for (int i = 0; i < count; i++) newLines[i] = lines[i];

        newLines[count] = new MyString(text);
        lines = newLines;
        count++; 
    }

    public void RemoveLine(int index)
    {
        if (index < 0 || index >= count) return;

        MyString[] newLines = new MyString[count - 1];
        for (int i = 0; i < index; i++) newLines[i] = lines[i];
        for (int i = index + 1; i < count; i++) newLines[i - 1] = lines[i];

        lines = newLines;
        count--;
    }

    public void Clear() 
    {
        lines = new MyString[0];
        count = 0;
    }

    public int GetShortestLineLength() 
    {
        if (count == 0) return 0;
        int min = lines[0].Length();
        for (int i = 1; i < count; i++) 
        {
            if (lines[i].Length() < min) min = lines[i].Length();
        }
        return min;
    }

    public double GetConsonantsPercentage() 
    {
        int totalChars = 0, totalConsonants = 0;
        for (int i = 0; i < count; i++) 
        {
            totalChars += lines[i].Length();
            totalConsonants += lines[i].CountConsonants();
        }
        return (totalChars == 0) ? 0 : (double)totalConsonants / totalChars * 100;
    }

    public void ClearAllEdges()
    {
        for (int i = 0; i < count; i++) lines[i].ClearEdges();
    }

    public void ReplaceAllMultipleSpacesWithOne()
    {
        for (int i = 0; i < count; i++) lines[i].ReplaceManySpacesWithOne();
    }

    public string GetText()
    {
        string result = "";
        for (int i = 0; i < count; i++)
        {
            result = result + (i + 1) + ": " + lines[i].GetValue() + " ";
        }
        return result;
    }
}