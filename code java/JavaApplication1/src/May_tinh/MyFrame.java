/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package May_tinh;

/**
 *
 * @author daotr
 */
import java.awt.*;
import javax.swing.*;
public class MyFrame extends JFrame {

    public MyFrame(String title) throws HeadlessException {
        super(title);
        setLayout(new BorderLayout());
        
        JPanel p = new JPanel();
        
        JPanel p1 = new JPanel(new GridLayout(5,4));
        p1.add(new JButton("CE"));
        p1.add(new JButton("c"));
        p1.add(new JButton("xoa"));
        p1.add(new JButton("/"));
        
        p1.add(new JButton("7"));
        p1.add(new JButton("8"));
        p1.add(new JButton("9"));
        p1.add(new JButton("x"));
        
        p1.add(new JButton("4"));
        p1.add(new JButton("5"));
        p1.add(new JButton("6"));
        p1.add(new JButton("-"));
        
        p1.add(new JButton("1"));
        p1.add(new JButton("2"));
        p1.add(new JButton("3"));
        p1.add(new JButton("+"));
        
        p1.add(new JButton("ANS"));
        p1.add(new JButton("0"));
        p1.add(new JButton("."));
        p1.add(new JButton("="));
        
        p1.setSize(100, 100);
        p.add(p1,BorderLayout.CENTER);
        add(p1,BorderLayout.CENTER);
        add(new JButton("0"),BorderLayout.NORTH);
        
    }
    
}
