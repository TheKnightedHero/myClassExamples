namespace ModalDialogBoxes
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.mainFormText = new System.Windows.Forms.Label();
            this.clickMeButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // mainFormText
            // 
            this.mainFormText.AutoSize = true;
            this.mainFormText.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.mainFormText.Location = new System.Drawing.Point(3, 102);
            this.mainFormText.Name = "mainFormText";
            this.mainFormText.Size = new System.Drawing.Size(278, 15);
            this.mainFormText.TabIndex = 0;
            this.mainFormText.Text = "Click the Button below to interact with this window.";
            // 
            // clickMeButton
            // 
            this.clickMeButton.Location = new System.Drawing.Point(86, 147);
            this.clickMeButton.Name = "clickMeButton";
            this.clickMeButton.Size = new System.Drawing.Size(75, 23);
            this.clickMeButton.TabIndex = 1;
            this.clickMeButton.Text = "Click Me!";
            this.clickMeButton.UseVisualStyleBackColor = true;
            this.clickMeButton.Click += new System.EventHandler(this.clickMeButton_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.clickMeButton);
            this.Controls.Add(this.mainFormText);
            this.Name = "MainForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Modal Form";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label mainFormText;
        private System.Windows.Forms.Button clickMeButton;
    }
}

