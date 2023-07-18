#include <vector>
#include <string>

int find6DPoses_(
	const std::vector<double>& imagePoints,
	const std::vector<double>& worldPoints,
	const std::vector<double>& intrinsicParams,
	std::vector<size_t>& labeling,
	std::vector<double>& homographies,
	const double &spatial_coherence_weight,
	const double &threshold,
	const double &confidence,
	const double &neighborhood_ball_radius,
	const double &maximum_tanimoto_similarity,
	const size_t &max_iters,
	const size_t &minimum_point_number,
	const int &maximum_model_number);

int findHomographies_(
	std::vector<double>& correspondences,
	std::vector<size_t>& labeling,
	std::vector<double>& homographies,
	const size_t &source_image_width,
	const size_t &source_image_height,
	const size_t &destination_image_width,
	const size_t &destination_image_height,
	const double &spatial_coherence_weight,
	const double &threshold,
	const double &confidence,
	const double &neighborhood_ball_radius,
	const double &maximum_tanimoto_similarity,
	const size_t &max_iters,
	const size_t &minimum_point_number,
	const int &maximum_model_number,
	const size_t &sampler_id,
	const double &scoring_exponent,
	const bool do_logging);
		
int findTwoViewMotions_(
	std::vector<double>& correspondences,
	std::vector<size_t>& labeling,
	std::vector<double>& homographies,
	const size_t &source_image_width,
	const size_t &source_image_height,
	const size_t &destination_image_width,
	const size_t &destination_image_height,
	const double &spatial_coherence_weight,
	const double &threshold,
	const double &confidence,
	const double &neighborhood_ball_radius,
	const double &maximum_tanimoto_similarity,
	const size_t &max_iters,
	const size_t &minimum_point_number,
	const int &maximum_model_number,
	const size_t &sampler_id,
	const double &scoring_exponent,
	const bool do_logging);

int findVanishingPoints_(
	std::vector<double>& lines,
	std::vector<double>& weights,
	std::vector<size_t>& labeling,
	std::vector<double>& vanishing_points,
	const size_t &image_width,
	const size_t &image_height,
	const double &spatial_coherence_weight,
	const double &threshold,
	const double &confidence,
	const double &neighborhood_ball_radius,
	const double &maximum_tanimoto_similarity,
	const size_t &max_iters,
	const size_t &minimum_point_number,
	const int &maximum_model_number,
	const size_t &sampler_id,
	const double &scoring_exponent,
	const bool do_logging);

int findLines_(
	std::vector<double>& input_points,
	std::vector<double>& weights,
	std::vector<size_t>& labeling,
	std::vector<double>& lines,
	const size_t &image_width,
	const size_t &image_height,
	const double &spatial_coherence_weight,
	const double &threshold,
	const double &confidence,
	const double &neighborhood_ball_radius,
	const double &maximum_tanimoto_similarity,
	const size_t &max_iters,
	const size_t &minimum_point_number,
	const int &maximum_model_number,
	const size_t &sampler_id,
	const double &scoring_exponent,
	const bool do_logging);