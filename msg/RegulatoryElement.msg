### Regulatory Element definition ###

string type
int64 id
float64   x1                                       # Top-left x coordinate
float64   y1                                       # Top-left y coordinate 
float64   x2                                       # Bottom-right x coordinate
float64   y2                                       # Bottom-right y coordinate 
geometry_msgs/PoseWithCovariance location          # 3D Centroid x,y,z (Ego-vehicle frame)
geometry_msgs/PoseWithCovariance global_location   # 3D Centroid x,y,z (Map frame)
float64 distance
string[] affecting_roads
Landmark[] landmarks