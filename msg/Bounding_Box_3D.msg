# Techs4AgeCar project

string                           type         # Object type
float64                          score        # Object probability (0 to 1)

geometry_msgs/PoseWithCovariance pose         # Centroid x,y,z (Laser frame)
Node[]                           corners_3d   # 3D bbox coordinates (x,y,z ; Laser frame)
float64                          vel_lin      # Absolute global linear velocity
float64                          vel_ang      # Absolute global angular velocity

