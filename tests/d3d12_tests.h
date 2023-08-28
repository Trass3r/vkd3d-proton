/*
 * Copyright 2016-2017 Józef Kucia for CodeWeavers
 * Copyright 2020-2021 Hans-Kristian Arntzen for Valve Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/* Can be included multiple times. */

decl_test(test_create_device);
decl_test(test_node_count);
decl_test(test_check_feature_support);
decl_test(test_format_support);
decl_test(test_multisample_quality_levels);
decl_test(test_create_command_allocator);
decl_test(test_create_command_list);
decl_test(test_create_command_queue);
decl_test(test_create_command_signature);
decl_test(test_create_committed_resource);
decl_test(test_create_heap);
decl_test(test_create_placed_resource);
decl_test(test_create_placed_resource_size);
decl_test(test_create_reserved_resource);
decl_test(test_create_descriptor_heap);
decl_test(test_create_sampler);
decl_test(test_create_sampler2);
decl_test(test_create_unordered_access_view);
decl_test(test_create_root_signature);
decl_test(test_root_signature_limits);
decl_test(test_create_compute_pipeline_state);
decl_test(test_create_graphics_pipeline_state);
decl_test(test_create_pipeline_state);
decl_test(test_create_fence);
decl_test(test_object_interface);
decl_test(test_object_interface_null_cases);
decl_test(test_multithread_private_data);
decl_test(test_reset_command_allocator);
decl_test(test_cpu_signal_fence);
decl_test(test_gpu_signal_fence);
decl_test(test_multithread_fence_wait);
decl_test(test_fence_values);
decl_test(test_clear_depth_stencil_view);
decl_test(test_clear_render_target_view);
decl_test(test_clear_unordered_access_view_buffer);
decl_test(test_clear_unordered_access_view_image);
decl_test(test_set_render_targets);
decl_test(test_draw_instanced);
decl_test(test_draw_indexed_instanced);
decl_test(test_draw_no_descriptor_bindings);
decl_test(test_multiple_render_targets);
decl_test(test_unknown_rtv_format);
decl_test(test_unknown_dsv_format);
decl_test(test_append_aligned_element);
decl_test(test_gpu_virtual_address);
decl_test(test_fragment_coords);
decl_test(test_fractional_viewports);
decl_test(test_negative_viewports);
decl_test(test_scissor);
decl_test(test_draw_depth_no_ps);
decl_test(test_draw_depth_only);
decl_test(test_draw_uav_only);
decl_test(test_texture_resource_barriers);
decl_test(test_device_removed_reason);
decl_test(test_enumerate_meta_commands);
decl_test(test_map_resource);
decl_test(test_map_placed_resources);
decl_test(test_bundle_state_inheritance);
decl_test(test_shader_instructions);
decl_test(test_shader_instructions_dxil);
decl_test(test_compute_shader_instructions);
decl_test(test_discard_instruction);
decl_test(test_shader_interstage_interface);
decl_test(test_shader_input_output_components);
decl_test(test_root_signature_byte_code);
decl_test(test_root_signature_byte_code2);
decl_test(test_cs_constant_buffer);
decl_test(test_constant_buffer_relative_addressing);
decl_test(test_immediate_constant_buffer);
decl_test(test_root_constants);
decl_test(test_sample_instructions);
decl_test(test_texture_ld);
decl_test(test_gather);
decl_test(test_gather_c);
decl_test(test_sample_c_lz);
decl_test(test_cube_maps);
decl_test(test_multisample_array_texture);
decl_test(test_resinfo);
decl_test(test_srv_component_mapping);
decl_test(test_descriptor_tables);
decl_test(test_descriptor_tables_overlapping_bindings);
decl_test(test_update_root_descriptors);
decl_test(test_update_descriptor_tables);
decl_test(test_update_descriptor_heap_after_closing_command_list);
decl_test(test_update_compute_descriptor_tables);
decl_test(test_update_descriptor_tables_after_root_signature_change);
decl_test(test_copy_descriptors);
decl_test(test_copy_descriptors_range_sizes);
decl_test(test_copy_rtv_descriptors);
decl_test(test_descriptors_visibility);
decl_test(test_create_null_descriptors);
decl_test(test_null_cbv);
decl_test(test_null_srv);
decl_test(test_null_uav);
decl_test(test_null_rtv);
decl_test(test_null_vbv);
decl_test(test_get_copyable_footprints);
decl_test(test_depth_clip);
decl_test(test_depth_stencil_sampling);
decl_test(test_depth_load);
decl_test(test_depth_read_only_view);
decl_test(test_stencil_load);
decl_test(test_typed_buffer_uav);
decl_test(test_typed_uav_store);
decl_test(test_compute_shader_registers);
decl_test(test_tgsm);
decl_test(test_uav_load);
decl_test(test_cs_uav_store);
decl_test(test_uav_counters);
decl_test(test_uav_counter_null_behavior_dxbc);
decl_test(test_uav_counter_null_behavior_dxil);
decl_test(test_decrement_uav_counter);
decl_test(test_atomic_instructions_dxbc);
decl_test(test_atomic_instructions_dxil);
decl_test(test_buffer_srv);
decl_test(test_create_query_heap);
decl_test(test_query_timestamp);
decl_test(test_query_timestamp_write_after_read);
decl_test(test_query_pipeline_statistics);
decl_test(test_query_occlusion);
decl_test(test_resolve_non_issued_query_data);
decl_test(test_resolve_query_data_in_different_command_list);
decl_test(test_resolve_query_data_in_reordered_command_list);
decl_test(test_execute_indirect);
decl_test(test_execute_indirect_state);
decl_test(test_execute_indirect_multi_dispatch);
decl_test(test_execute_indirect_multi_dispatch_root_constants);
decl_test(test_execute_indirect_multi_dispatch_root_descriptors);
decl_test(test_dispatch_zero_thread_groups);
decl_test(test_unaligned_vertex_stride);
decl_test(test_zero_vertex_stride);
decl_test(test_instance_id_dxbc);
decl_test(test_instance_id_dxil);
decl_test(test_vertex_id_dxbc);
decl_test(test_vertex_id_dxil);
decl_test(test_copy_texture);
decl_test(test_copy_texture_buffer);
decl_test(test_copy_buffer_texture);
decl_test(test_copy_block_compressed_texture);
decl_test(test_copy_buffer_overlap);
decl_test(test_separate_bindings);
decl_test(test_face_culling_dxbc);
decl_test(test_face_culling_dxil);
decl_test(test_multithread_command_queue_exec);
decl_test(test_geometry_shader_dxbc);
decl_test(test_geometry_shader_dxil);
decl_test(test_layered_rendering_dxbc);
decl_test(test_layered_rendering_dxil);
decl_test(test_ps_layer_dxbc);
decl_test(test_ps_layer_dxil);
decl_test(test_nop_tessellation_shaders);
decl_test(test_quad_tessellation_dxbc);
decl_test(test_quad_tessellation_dxil);
decl_test(test_tessellation_dcl_index_range);
decl_test(test_hull_shader_vertex_input_patch_constant_phase);
decl_test(test_hull_shader_control_point_phase_dxbc);
decl_test(test_hull_shader_control_point_phase_dxil);
decl_test(test_hull_shader_fork_phase_dxbc);
decl_test(test_hull_shader_fork_phase_dxil);
decl_test(test_tessellation_read_tesslevel);
decl_test(test_line_tessellation_dxbc);
decl_test(test_line_tessellation_dxil);
decl_test(test_tessellation_primitive_id);
decl_test(test_render_a8_dxbc);
decl_test(test_render_a8_dxil);
decl_test(test_cpu_descriptors_lifetime);
decl_test(test_clip_distance_dxbc);
decl_test(test_clip_distance_dxil);
decl_test(test_combined_clip_and_cull_distances_dxbc);
decl_test(test_combined_clip_and_cull_distances_dxil);
decl_test(test_resource_allocation_info);
decl_test(test_suballocate_small_textures);
decl_test(test_command_list_initial_pipeline_state);
decl_test(test_blend_factor);
decl_test(test_dual_source_blending_dxbc);
decl_test(test_dual_source_blending_dxil);
decl_test(test_multisample_rendering);
decl_test(test_multisample_resolve);
decl_test(test_sample_mask_dxbc);
decl_test(test_sample_mask_dxil);
decl_test(test_coverage_dxbc);
decl_test(test_coverage_dxil);
decl_test(test_shader_get_render_target_sample_count_dxbc);
decl_test(test_shader_get_render_target_sample_count_dxil);
decl_test(test_shader_sample_position_dxbc);
decl_test(test_shader_sample_position_dxil);
decl_test(test_shader_eval_attribute_dxbc);
decl_test(test_shader_eval_attribute_dxil);
decl_test(test_primitive_restart);
decl_test(test_index_buffer_edge_case_stream_output);
decl_test(test_vertex_shader_stream_output_dxbc);
decl_test(test_vertex_shader_stream_output_dxil);
decl_test(test_primitive_restart_list_topology_stream_output);
decl_test(test_read_write_subresource);
decl_test(test_queue_wait);
decl_test(test_graphics_compute_queue_synchronization);
decl_test(test_early_depth_stencil_tests);
decl_test(test_conditional_rendering);
decl_test(test_bufinfo_instruction_dxbc);
decl_test(test_bufinfo_instruction_dxil);
decl_test(test_write_buffer_immediate);
decl_test(test_register_space_sm51);
decl_test(test_register_space_dxil);
decl_test(test_constant_buffer_sm51);
decl_test(test_constant_buffer_dxil);
decl_test(test_bindless_srv_sm51);
decl_test(test_bindless_srv_dxil);
decl_test(test_bindless_full_root_parameters_sm51);
decl_test(test_bindless_samplers_sm51);
decl_test(test_bindless_samplers_dxil);
decl_test(test_bindless_cbv_sm51);
decl_test(test_bindless_cbv_dxil);
decl_test(test_bindless_uav_sm51);
decl_test(test_bindless_uav_dxil);
decl_test(test_bindless_uav_counter_sm51);
decl_test(test_bindless_uav_counter_dxil);
decl_test(test_bindless_bufinfo_sm51);
decl_test(test_bindless_bufinfo_dxil);
decl_test(test_bindless_heap_sm66);
decl_test(test_stencil_export_dxbc);
decl_test(test_stencil_export_dxil);
decl_test(test_raytracing);
decl_test(test_get_resource_tiling);
decl_test(test_update_tile_mappings);
decl_test(test_sampler_border_color);
decl_test(test_copy_tiles);
decl_test(test_buffer_feedback_instructions_sm51);
decl_test(test_buffer_feedback_instructions_dxil);
decl_test(test_texture_feedback_instructions_sm51);
decl_test(test_texture_feedback_instructions_dxil);
decl_test(test_aliasing_barrier);
decl_test(test_discard_resource);
decl_test(test_clock_calibration);
decl_test(test_open_heap_from_address);
decl_test(test_get_cached_blob);
decl_test(test_pipeline_library);
decl_test(test_buffers_oob_behavior_dxbc);
decl_test(test_buffers_oob_behavior_dxil);
decl_test(test_buffers_oob_behavior_vectorized_byte_address);
decl_test(test_typed_buffers_many_objects_dxbc);
decl_test(test_typed_buffers_many_objects_dxil);
decl_test(test_create_pipeline_with_null_root_signature);
decl_test(test_undefined_read_typed_buffer_as_untyped_dxbc);
decl_test(test_undefined_read_typed_buffer_as_untyped_dxil);
decl_test(test_undefined_descriptor_heap_mismatch_types);
decl_test(test_virtual_queries);
decl_test(test_vrs);
decl_test(test_vrs_dxil);
decl_test(test_vrs_image);
decl_test(test_stress_suballocation);
decl_test(test_stress_suballocation_multithread);
decl_test(test_stress_suballocation_rebar);
decl_test(test_stress_fallback_render_target_allocation_device);
decl_test(test_placed_image_alignment);
decl_test(test_root_parameter_preservation);
decl_test(test_cbv_hoisting_sm51);
decl_test(test_cbv_hoisting_dxil);
decl_test(test_write_watch);
decl_test(test_conservative_rasterization_dxbc);
decl_test(test_conservative_rasterization_dxil);
decl_test(test_root_signature_priority);
decl_test(test_missing_bindings_root_signature);
decl_test(test_mismatching_pso_stages);
decl_test(test_null_descriptor_mismatch_type);
decl_test(test_vbv_stride_edge_cases);
decl_test(test_view_min_lod);
decl_test(test_sv_barycentric);
decl_test(test_shader_fp16);
decl_test(test_shader_sm62_denorm);
decl_test(test_shader_sm64_packed);
decl_test(test_shader_sm66_packed);
decl_test(test_shader_sm65_wave_intrinsics);
decl_test(test_shader_sm66_wave_size);
decl_test(test_shader_sm66_quad_op_semantics);
decl_test(test_shader_sm66_compute_derivatives);
decl_test(test_shader_sm66_64bit_atomics);
decl_test(test_shader_sm66_is_helper_lane);
decl_test(test_get_copyable_footprints_planar);
decl_test(test_depth_stencil_test_no_dsv);
decl_test(test_depth_stencil_layout_tracking);
decl_test(test_copy_buffer_to_depth_stencil);
decl_test(test_map_texture_validation);
decl_test(test_read_write_subresource_2d);
decl_test(test_read_subresource_rt);
decl_test(test_integer_blending_pipeline_state);
decl_test(test_discard_resource_uav);
decl_test(test_unbound_rtv_rendering);
decl_test(test_raytracing_local_rs_static_sampler);
decl_test(test_raytracing_local_rs_static_sampler_collection);
decl_test(test_raytracing_object_assignment_ignore_default);
decl_test(test_rayquery);
decl_test(test_typed_srv_uav_cast);
decl_test(test_typed_srv_cast_clear);
decl_test(test_aliasing_barrier_edge_cases);
decl_test(test_mesh_shader_create_pipeline);
decl_test(test_mesh_shader_rendering);
decl_test(test_mesh_shader_execute_indirect);
decl_test(test_amplification_shader);
decl_test(test_advanced_cbv_layout);
decl_test(test_shader_waveop_maximal_convergence);
decl_test(test_uav_3d_sliced_view);
decl_test(test_pipeline_no_ps_nonzero_rts);
decl_test(test_root_descriptor_offset_sign);
decl_test(test_raytracing_no_global_root_signature);
decl_test(test_raytracing_missing_required_objects);
decl_test(test_raytracing_reject_duplicate_objects);
decl_test(test_raytracing_embedded_subobjects);
decl_test(test_raytracing_default_association_tiebreak);
decl_test(test_raytracing_collection_identifiers);
decl_test(test_raytracing_root_signature_from_subobject);
decl_test(test_fence_wait_robustness);
decl_test(test_fence_wait_robustness_shared);
decl_test(test_fence_wait_multiple);
decl_test(test_fence_wait_multiple_shared);
decl_test(test_root_signature_empty_blob);
decl_test(test_sparse_buffer_memory_lifetime);
decl_test(test_rendering_no_attachments_layers);
decl_test(test_memory_model_uav_coherence_thread_group_dxbc);
decl_test(test_memory_model_uav_coherence_thread_group_dxil);
decl_test(test_rasterizer_ordered_views_dxbc);
decl_test(test_rasterizer_ordered_views_dxil);
decl_test(test_vtable_origins);
decl_test(test_concurrent_signal_stress);
decl_test(test_uav_robustness_oob_structure_element_dxbc);
decl_test(test_uav_robustness_oob_structure_element_dxil);
decl_test(test_denorm_behavior_dxbc);
decl_test(test_denorm_behavior_dxil);
decl_test(test_dynamic_depth_stencil_write);
decl_test(test_reserved_resource_mapping);
decl_test(test_quad_vote_sm67_compute);
decl_test(test_sm67_helper_lane_wave_ops);
decl_test(test_sm67_multi_sample_uav);
decl_test(test_sm67_sample_cmp_level);
decl_test(test_sm67_dynamic_texture_offset);
decl_test(test_sm67_raw_gather);
decl_test(test_sm67_integer_sampling);
decl_test(test_enhanced_barrier_castable_formats);
decl_test(test_enhanced_barrier_castable_formats_buffer);
decl_test(test_enhanced_barrier_castable_formats_validation);
decl_test(test_enhanced_barrier_castable_dsv);
decl_test(test_dstorage_decompression);
decl_test(test_uninit_root_parameters);
