	component gyroscope_data_sys is
		port (
			clk_clk                                                : in  std_logic                    := 'X'; -- clk
			pio_digit_1_export                                     : out std_logic_vector(3 downto 0);        -- export
			reset_reset_n                                          : in  std_logic                    := 'X'; -- reset_n
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in : in  std_logic                    := 'X'; -- conduit_data_in
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in  : in  std_logic                    := 'X'; -- conduit_clk_in
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe : out std_logic;                           -- conduit_data_oe
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe  : out std_logic                            -- conduit_clk_oe
		);
	end component gyroscope_data_sys;

	u0 : component gyroscope_data_sys
		port map (
			clk_clk                                                => CONNECTED_TO_clk_clk,                                                --                                    clk.clk
			pio_digit_1_export                                     => CONNECTED_TO_pio_digit_1_export,                                     --                            pio_digit_1.export
			reset_reset_n                                          => CONNECTED_TO_reset_reset_n,                                          --                                  reset.reset_n
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in => CONNECTED_TO_i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_in, -- i2cslave_to_avlmm_bridge_0_conduit_end.conduit_data_in
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in  => CONNECTED_TO_i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_in,  --                                       .conduit_clk_in
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe => CONNECTED_TO_i2cslave_to_avlmm_bridge_0_conduit_end_conduit_data_oe, --                                       .conduit_data_oe
			i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe  => CONNECTED_TO_i2cslave_to_avlmm_bridge_0_conduit_end_conduit_clk_oe   --                                       .conduit_clk_oe
		);

