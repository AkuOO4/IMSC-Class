import javax.swing.*;
import java.awt.event.*;

public class Ex {
    public static void main(String arg[]) {
        MyFrame f = new MyFrame();
    }
}


class MyFrame {
    JFrame f;
    JLabel l1, l2;
    JPanel p;
    JPasswordField pf1;
    JTextField t1;
    JButton b1, b2;


    MyFrame() {
        f = new JFrame("MY window");
        l1 = new JLabel("Username");
        l2 = new JLabel("Password");

        p = new JPanel();
        b1 = new JButton("Login");
        b2 = new JButton("Cancel");
        
        pf1 = new JPasswordField();
        t1 = new JTextField();


        p.setLayout(null);

        l1.setBounds(30, 40, 60, 30);
        l2.setBounds(30, 70, 60, 30);
        t1.setBounds(50, 40, 30, 15);
        pf1.setBounds(50, 70, 30, 15);
        b1.setBounds(100, 100, 5, 5);
        b2.setBounds(150, 100, 5, 5);

        b1.addActionListener(this );
        b2.addActionListener(this);
;
        f.setSize(400, 300);
        p.add(l1);
        p.add(l2);
        p.add(p);
        p.add(t1);
        p.add(pf1);
        p.add(b1);
        p.add(b2);

        f.add(p);

        f.setVisible(true);

    }

    public void actoionperformed(ActionEvent e){
        if (e.getSource()==b1){
            JOptionPane.showMessageDialog(null,"You clicked b1 ","window",1);
        }
    }
}