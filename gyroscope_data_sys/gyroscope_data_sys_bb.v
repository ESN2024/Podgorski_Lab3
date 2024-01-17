
module gyroscope_data_sys (
	clk_clk,
	pio_digit_1_export,
	reset_reset_n,
	i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in,
	i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in,
	i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe,
	i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe);	

	input		clk_clk;
	output	[3:0]	pio_digit_1_export;
	input		reset_reset_n;
	input		i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in;
	input		i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in;
	output		i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe;
	output		i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe;
endmodule
