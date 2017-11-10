#!/bin/bash
# @ job_name = Dbg
# @ initialdir = .
# @ output = %j.out
# @ error = %j.err
# @ wall_clock_limit = 00:05:00
# @ total_tasks = 1
# @ tasks_per_node = 1
# @ cpus_per_task = 1
# @ reservation = PATC17_MT

#./factorial 7
valgrind ./invalid_free
