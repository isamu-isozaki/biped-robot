% Walking Robot Startup Script
%
% Copyright 2017-2019 The MathWorks, Inc.

%% Clear everything
clc
clear
close all

%% Add folders to the path
addpath(genpath('fullbot_v3'), genpath('Libraries'),genpath('LIPM'),genpath('ModelSimulation'),genpath('inventor_exports/fullbot_v4_feet'));                  % Other dependencies

actuatorType=1;
run('robot_DataFile.m')
run('robot_DataFile1.m')
