/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bangsinhvien;

import java.awt.Dimension;
import java.awt.FlowLayout;
import java.io.IOException;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;

/**
 *
 * @author daotr
 */
public class Table extends JFrame{
    
    JTable table;
    
    public Table() throws IOException{
        setLayout(new FlowLayout());
        String[] collumnName = {"Ma sv","name","Lop","email"};
        Object [][] data= SinhVien.readData();
        table = new JTable(data,collumnName);
        table.setPreferredScrollableViewportSize(new Dimension(500,20));
        table.setFillsViewportHeight(true);
        
        JScrollPane scrollPane = new JScrollPane(table);
        add(scrollPane);
    }
}
