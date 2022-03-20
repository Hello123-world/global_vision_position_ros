#!/usr/bin/env python
import rospy
from visualization_msgs.msg import Marker
from visualization_msgs.msg import MarkerArray
from nav_msgs.msg import Odometry
from nav_msgs.msg import Path

ma_1 = MarkerArray()
ma_2 = MarkerArray()
j = 0
path_id_counter = 0
pose_id_counter = 0
TRAJ_LENGTH = 30
flag = 0


def path_callback(msg):
    global path_id_counter
    for mp in msg.poses:
        marker = Marker()
        marker.header.frame_id = "map"
        marker.header.stamp = rospy.Time.now()
        marker.action = Marker.ADD
        marker.id = path_id_counter
        path_id_counter += 1
        marker.pose.position.x = mp.pose.position.x
        marker.pose.position.y = mp.pose.position.y
        marker.pose.position.z = 0
        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0
        marker.type = Marker.CYLINDER
        marker.scale.x = 0.5
        marker.scale.y = 0.5
        marker.scale.z = 0
        marker.color.r = 0.7
        marker.color.g = 0.3
        marker.color.b = 1.0
        marker.color.a = 0.3
        ma_1.markers.append(marker)
    
    rate = rospy.Rate(10)

    path = rospy.Publisher('/visualization_marker_array_path', MarkerArray, queue_size = 50)
    path.publish(ma_1)

    rate.sleep()

def pose_to_trajectory_callback(msg):
    global j
    global pose_id_counter
    j += 1
    
    marker = Marker()
    marker.header.frame_id = "map"
    marker.header.stamp = rospy.Time.now()
    marker.action = Marker.ADD
    marker.id = pose_id_counter
    pose_id_counter += 1
    marker.pose.position.x = msg.pose.pose.position.x
    marker.pose.position.y = msg.pose.pose.position.y
    marker.pose.position.z = 0
    marker.pose.orientation.x = msg.pose.pose.orientation.x
    marker.pose.orientation.y = msg.pose.pose.orientation.y
    marker.pose.orientation.z = msg.pose.pose.orientation.z
    marker.pose.orientation.w = msg.pose.pose.orientation.w
    marker.type = Marker.CYLINDER
    marker.scale.x = 0.5
    marker.scale.y = 0.5
    marker.scale.z = 0
    marker.color.r = 0.7
    marker.color.g = 0.3
    marker.color.b = 1.0
    marker.color.a = 0.1

    if( abs(marker.pose.position.x) < 0.00001 and abs(marker.pose.position.y) < 0.00001 and abs(marker.pose.orientation.x) < 0.00001 and abs(marker.pose.orientation.y) < 0.00001 and abs(marker.pose.orientation.z) < 0.00001 and abs(marker.pose.orientation.w) < 0.00001):
        flag = 1
    marker.lifetime = rospy.Duration(2)
    ma_2.markers.append(marker)

    for mark in ma_2.markers:
        mark.type = Marker.CYLINDER
        mark.scale.x = 0.5
        mark.scale.y = 0.5
        mark.scale.z = 0
        mark.color.r = 0.7
        mark.color.g = 0.3
        mark.color.b = 1.0
        mark.color.a = 0.1


    if(j > TRAJ_LENGTH):
        del ma_2.markers[0]
    
    length = len(ma_2.markers)
    rospy.loginfo("%d", length)

    ma_2.markers[length - 2].type = Marker.CYLINDER
    ma_2.markers[length - 2].color.r = 1.0
    ma_2.markers[length - 2].color.g = 0
    ma_2.markers[length - 2].color.b = 0
    ma_2.markers[length - 2].color.a = 1.0

    ma_2.markers[length - 1].type = Marker.ARROW
    ma_2.markers[length - 1].scale.x = 0.6
    ma_2.markers[length - 1].scale.y = 0.1
    ma_2.markers[length - 1].scale.z = 0
    mark.color.r = 1.0
    mark.color.g = 0
    mark.color.b = 0
    mark.color.a = 1.0

    
    rate = rospy.Rate(10)

    trajectory = rospy.Publisher('/visualization_marker_array_pose', MarkerArray, queue_size = 50)
    trajectory.publish(ma_2)

    rate.sleep()



def listener():
    rospy.init_node('listener', anonymous = True)

    rospy.Subscriber('/path', Path, path_callback)
    rospy.Subscriber('/robot_1/pose', Odometry, pose_to_trajectory_callback)

    if(flag & len(ma_2.markers) > 2):
        del ma_2.markers[0]



    rospy.spin()

if __name__ == '__main__':
    listener()
