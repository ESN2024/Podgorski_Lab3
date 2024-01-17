	gyroscope_data_sys u0 (
		.clk_clk                                                (<connected-to-clk_clk>),                                                //                                    clk.clk
		.pio_digit_1_export                                     (<connected-to-pio_digit_1_export>),                                     //                            pio_digit_1.export
		.reset_reset_n                                          (<connected-to-reset_reset_n>),                                          //                                  reset.reset_n
		.i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in (<connected-to-i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in>), // i2cslave_to_avlmm_bridge_0_conduit_end.conduit_data_in
		.i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in  (<connected-to-i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in>),  //                                       .conduit_clk_in
		.i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe (<connected-to-i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe>), //                                       .conduit_data_oe
		.i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe  (<connected-to-i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe>)   //                                       .conduit_clk_oe
	);

