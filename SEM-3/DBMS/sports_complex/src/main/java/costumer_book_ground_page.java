
import java.sql.*;


/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

/**
 *
 * @author Akshay
 */

        
public class costumer_book_ground_page extends javax.swing.JFrame {

    /**
     * Creates new form costumer_book_ground_page
     */
    public costumer_book_ground_page() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTextField2 = new javax.swing.JTextField();
        jButton1 = new javax.swing.JButton();
        jComboBox1 = new javax.swing.JComboBox<>();
        prize_field = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        warning_label = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        addMouseMotionListener(new java.awt.event.MouseMotionAdapter() {
            public void mouseMoved(java.awt.event.MouseEvent evt) {
                formMouseMoved(evt);
            }
        });

        jTextField2.setText("ITEMS");

        jButton1.setText("ADD TO LIST");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jComboBox1.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
        jComboBox1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jComboBox1ActionPerformed(evt);
            }
        });

        prize_field.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                prize_fieldActionPerformed(evt);
            }
        });

        jLabel1.setText("QUANTITY");

        warning_label.setForeground(new java.awt.Color(204, 0, 0));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(102, 102, 102)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(111, 111, 111)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel1)
                            .addComponent(prize_field)
                            .addComponent(warning_label, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(161, 161, 161)
                        .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 142, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(182, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(84, 84, 84)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jTextField2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addGap(30, 30, 30)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jComboBox1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(prize_field, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(warning_label, javax.swing.GroupLayout.PREFERRED_SIZE, 18, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(30, 30, 30)
                .addComponent(jButton1)
                .addContainerGap(149, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        // TODO add your handling code here:
        
        costumer_page_1 jf1= new costumer_page_1();
        jf1.show();
        dispose();
    }//GEN-LAST:event_jButton1ActionPerformed

    private void formMouseMoved(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_formMouseMoved
        // TODO add your handling code here:
    if (mouse_count()==1){  
        jButton1.setVisible(false);
        try{
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3307/sports_complex","root","root");
      Statement stmt=conn.createStatement();
      
      String q1="select item from sports_items";
      String q2="select count(id) from sports_items where quantity!=0";
      //System.out.print(q1);
      //ResultSet rs2=stmt.executeQuery(q2);
      //String[] data;
      ResultSet rs=stmt.executeQuery(q1);
      
      //System.out.println("123");
      jComboBox1.removeAllItems();
      //removeAllItems();
      //int count=0;
      while (rs.next()){
        System.out.print(rs.getString(1)+" \n");
        String data=rs.getString(1);
        jComboBox1.addItem(data);
        //count++;
      }
      //return data;
    } 
    catch (Exception ex) {
      System.out.print("\n--ERROR--\n");
      System.out.print(ex.getMessage());
    }
    }

    }//GEN-LAST:event_formMouseMoved

    private void prize_fieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_prize_fieldActionPerformed
        // TODO add your handling code here:
        Object item= jComboBox1.getSelectedItem();
        item=item.toString();
        try{
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3307/sports_complex","root","root");
      Statement stmt=conn.createStatement();
      
      String q1="select quantity from sports_items where item='"+item+"'";
      //String q2="select count(id) from sports_items where quantity!=0";
      System.out.print(q1);
      //ResultSet rs2=stmt.executeQuery(q2);
      //String[] data;
      ResultSet rs=stmt.executeQuery(q1);
      String strprize=prize_field.getSelectedText();
      
      try{
          
          int int_prize=Integer.parseInt(strprize);
          if (rs.getInt(1)<int_prize){
              warning_label.setText("Not Enough Quantity");
              //jButton1.setVisible(true);
          }
          else{
              warning_label.setText(" ");
              jButton1.setVisible(true);
          }
          
          
      }
    catch (Exception ex) {
      System.out.print("\n--ERROR--\n");
      System.out.print(ex.getMessage());
      warning_label.setText("Enter Integer Values");
    }
      
      
    } 
    catch (Exception ex) {
      System.out.print("\n--ERROR--\n");
      System.out.print(ex.getMessage());
    }
        
        
        
    }//GEN-LAST:event_prize_fieldActionPerformed

    private void jComboBox1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jComboBox1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jComboBox1ActionPerformed
    int a=0;
    public int mouse_count(){ 
        a++;
        return a;
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(costumer_book_ground_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(costumer_book_ground_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(costumer_book_ground_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(costumer_book_ground_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        
        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                
                new costumer_book_ground_page().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JComboBox<String> jComboBox1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JTextField jTextField2;
    public javax.swing.JTextField prize_field;
    private javax.swing.JLabel warning_label;
    // End of variables declaration//GEN-END:variables
}
