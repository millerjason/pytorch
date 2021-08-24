#pragma once

#include <ATen/Tensor.h>
#include <ATen/core/Scalar.h>

namespace at {
namespace native {

void s_addmm_out_csr_sparse_dense_cuda_worker(int64_t nnz, int64_t m, int64_t n, int64_t k, const Tensor& r_, const Scalar& beta, const Tensor& t, const Scalar& alpha, const Tensor& crow_indices, const Tensor& col_indices, const Tensor& values, const Tensor& dense);

} // namespace native
} // namespace at
