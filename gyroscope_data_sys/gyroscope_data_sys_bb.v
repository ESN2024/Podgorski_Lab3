
module gyroscope_data_sys (
	clk_clk,
	pio_digit_1_export,
	reset_reset_n,
	i2c_bwabwa_scl_pad_io,
	i2c_bwabwa_sda_pad_io);	

	input		clk_clk;
	output	[3:0]	pio_digit_1_export;
	input		reset_reset_n;
	inout		i2c_bwabwa_scl_pad_io;
	inout		i2c_bwabwa_sda_pad_io;
endmodule
