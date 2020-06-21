## *********************************************************
##
## File autogenerated for the base_local_planner package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 245, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 290, 'description': 'The acceleration limit of the robot in the x direction', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'acc_lim_x', 'edit_method': '', 'default': 2.5, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The acceleration limit of the robot in the y direction', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'acc_lim_y', 'edit_method': '', 'default': 2.5, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The acceleration limit of the robot in the theta direction', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'acc_lim_theta', 'edit_method': '', 'default': 3.2, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The maximum x velocity for the robot in m/s', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_vel_x', 'edit_method': '', 'default': 0.55, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The minimum x velocity for the robot in m/s', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_vel_x', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The absolute value of the maximum rotational velocity for the robot in rad/s', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'max_vel_theta', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The absolute value of the minimum rotational velocity for the robot in rad/s', 'max': 0.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_vel_theta', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -20.0, 'type': 'double'}, {'srcline': 290, 'description': 'The absolute value of the minimum in-place rotational velocity the controller will explore', 'max': 20.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_in_place_vel_theta', 'edit_method': '', 'default': 0.4, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The amount of time to roll trajectories out for in seconds', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sim_time', 'edit_method': '', 'default': 1.7, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The granularity with which to check for collisions along each trajectory in meters', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'sim_granularity', 'edit_method': '', 'default': 0.025, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': "The distance between simulation points for angular velocity should be small enough that the robot doesn't hit things", 'max': 1.5707963267948966, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'angular_sim_granularity', 'edit_method': '', 'default': 0.025, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The weight for the path distance part of the cost function', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'pdist_scale', 'edit_method': '', 'default': 0.6, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The weight for the goal distance part of the cost function', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'gdist_scale', 'edit_method': '', 'default': 0.8, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The weight for the obstacle distance part of the cost function', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'occdist_scale', 'edit_method': '', 'default': 0.01, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The distance the robot must travel before oscillation flags are reset, in meters', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'oscillation_reset_dist', 'edit_method': '', 'default': 0.05, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The distance the robot must travel before oscillation flags are reset, in meters', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'escape_reset_dist', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The distance the robot must travel before oscillation flags are reset, in meters', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'escape_reset_theta', 'edit_method': '', 'default': 1.5707963267948966, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'The number of samples to use when exploring the x velocity space', 'max': 300, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'vx_samples', 'edit_method': '', 'default': 20, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 290, 'description': 'The number of samples to use when exploring the theta velocity space', 'max': 300, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'vtheta_samples', 'edit_method': '', 'default': 20, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 290, 'description': 'How far the robot should look ahead of itself when differentiating between different rotational velocities', 'max': 5.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'heading_lookahead', 'edit_method': '', 'default': 0.325, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'Set this to true if the robot being controlled can take y velocities and false otherwise', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'holonomic_robot', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'The velocity to use while backing up', 'max': 2.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'escape_vel', 'edit_method': '', 'default': -0.1, 'level': 0, 'min': -2.0, 'type': 'double'}, {'srcline': 290, 'description': 'Set this to true to use the Dynamic Window Approach, false to use acceleration limits', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'dwa', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'Set this to true to use the Dynamic Window Approach, false to use acceleration limits', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'heading_scoring', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'How far to look ahead in time when we score heading based trajectories', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'heading_scoring_timestep', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 290, 'description': 'Set this to true to allow simple attraction to a goal point instead of intelligent cost propagation', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'simple_attractor', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 290, 'description': 'A comma delimited list of the y velocities the controller will explore', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'y_vels', 'edit_method': '', 'default': '-0.3,-0.1,0.1,-0.3', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 290, 'description': 'Retore to the default configuration', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'restore_defaults', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']
